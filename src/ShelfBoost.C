/*
  Rakarrack   Audio FX software
  ShelfBoost.C - Tone Booster
  Modified for rakarrack by Josep Andreu

  This program is free software; you can redistribute it and/or modify
  it under the terms of version 2 of the GNU General Public License
  as published by the Free Software Foundation.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License (version 2) for more details.

  You should have received a copy of the GNU General Public License (version 2)
  along with this program; if not, write to the Free Software Foundation,
  Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307 USA

 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "ShelfBoost.h"

ShelfBoost::ShelfBoost(double sample_rate, uint32_t intermediate_bufsize)
{
    PERIOD = intermediate_bufsize; // correct for rakarrack, may be adjusted by lv2
    fSAMPLE_RATE = sample_rate;

    //default values
    Ppreset = 0;
    Pvolume = 50;
    Pstereo = 0;
    Pq1 = Pfreq1 = Plevel = 0;

    outvolume = 0.5f;
    freq1 = q1 = gain = u_gain = 1.0f;

    initialize();

    cleanup();

    setpreset(Ppreset);
}

ShelfBoost::~ShelfBoost()
{
    clear_initialize();
}

/*
 * Cleanup the effect
 */
void
ShelfBoost::cleanup()
{
    RB1l->cleanup();
    RB1r->cleanup();
}

void
ShelfBoost::lv2_update_params(uint32_t period)
{
    if (period > PERIOD) // only re-initialize if period > intermediate_bufsize of declaration
    {
        PERIOD = period;
        clear_initialize();
        initialize();
        set_q(Pq1);
        set_freq(Pfreq1);
        set_gain(Plevel);
    }
    else
    {
        PERIOD = period;
    }
}

void
ShelfBoost::initialize()
{
    interpbuf = new float[PERIOD];
    RB1l = new AnalogFilter(7, 3200.0f, 0.5f, 0, fSAMPLE_RATE, interpbuf);
    RB1r = new AnalogFilter(7, 3200.0f, 0.5f, 0, fSAMPLE_RATE, interpbuf);
}

void
ShelfBoost::clear_initialize()
{
    delete RB1l;
    delete RB1r;
    delete[] interpbuf;
}

/*
 * Effect output
 */
void
ShelfBoost::out(float * efxoutl, float * efxoutr)
{
    unsigned int i;

    RB1l->filterout(efxoutl, PERIOD);
    
    if (Pstereo) RB1r->filterout(efxoutr, PERIOD);

    for (i = 0; i < PERIOD; i++)
    {
        efxoutl[i] *= outvolume*u_gain;
        
        if (Pstereo) efxoutr[i] *= outvolume * u_gain;
    }

    if (!Pstereo) memcpy(efxoutr, efxoutl, sizeof (float)*PERIOD);
}

/*
 * Parameter control
 */
void
ShelfBoost::setvolume(int value)
{
    Pvolume = value;
    outvolume = (float) Pvolume / 127.0f;
}

void
ShelfBoost::setpreset(int npreset)
{
    const int PRESET_SIZE = 5;
    const int NUM_PRESETS = 4;
    int pdata[MAX_PDATA_SIZE];
    int presets[NUM_PRESETS][PRESET_SIZE] = {
        //Treble
        {127, 64, 16000, 1, 24},
        //Mid
        {127, 64, 4400, 1, 24},
        //Bass
        {127, 64, 220, 1, 24},
        //Distortion 1
        {6, 40, 12600, 1, 127}

    };

    if (npreset > NUM_PRESETS - 1)
    {
        Fpre->ReadPreset(34, npreset - NUM_PRESETS + 1, pdata);
        
        for (int n = 0; n < PRESET_SIZE; n++)
            changepar(n, pdata[n]);
    }
    else
    {
        for (int n = 0; n < PRESET_SIZE; n++)
            changepar(n, presets[npreset][n]);
    }
    
    Ppreset = npreset;
    cleanup();
}

void
ShelfBoost::set_q(int value)
{
    Pq1 = value;
    q1 = powf(30.0f, ((float) value - 64.0f) / 64.0f);
    RB1l->setq(q1);
    RB1r->setq(q1);
}

void
ShelfBoost::set_freq(int value)
{
    Pfreq1 = value;
    freq1 = (float) value;
    RB1l->setfreq(freq1);
    RB1r->setfreq(freq1);
}

void
ShelfBoost::set_gain(int value)
{
    Plevel = value;
    gain = .375f * (float) value;
    u_gain = 1.0f / gain;
    RB1l->setgain(gain);
    RB1r->setgain(gain);
}

void
ShelfBoost::changepar(int npar, int value)
{
    switch (npar)
    {
    case 0:
        setvolume(value);
        break;
    case 1:
        set_q(value);
        break;
    case 2:
        set_freq(value);
        break;
    case 3:
        Pstereo = value;
        break;
    case 4:
        set_gain(value);
        break;
    }
}

int
ShelfBoost::getpar(int npar)
{
    switch (npar)
    {
    case 0:
        return (Pvolume);
        break;
    case 1:
        return (Pq1);
        break;
    case 2:
        return (Pfreq1);
        break;
    case 3:
        return (Pstereo);
        break;
    case 4:
        return (Plevel);
        break;
    }
    return (0); //in case of bogus parameter number
}

