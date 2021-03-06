
// Based in gate_1410.c LADSPA Swh-plugins

/*
  rakarrack - a guitar effects software

 Gate.h  -  Noise Gate Effect definitions
 Based on Steve Harris LADSPA gate.

  Copyright (C) 2008 Josep Andreu
  Author: Josep Andreu

 This program is free software; you can redistribute it and/or modify
 it under the terms of version 2 of the GNU General Public License
 as published by the Free Software Foundation.

 This program is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License (version 2) for more details.

 You should have received a copy of the GNU General Public License
 (version2)  along with this program; if not, write to the Free Software
 Foundation,
 Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307 USA

*/


#ifndef NOISEGATE_H
#define NOISEGATE_H

#include "AnalogFilter.h"

class Gate
{

public:

    Gate (double samplerate, uint32_t intermediate_bufsize);
    ~Gate ();

    void out (float *efxoutl, float *efxoutr);

    void changepar (int npar, int value);
    void setpreset (int npreset);
    void cleanup ();
    void lv2_update_params(uint32_t period);
    void initialize();
    void clear_initialize();
    int getpar (int npar);

    // Compressor

    int Pthreshold;		// attack time  (ms)
    int Pattack;			// release time (ms)
    int Ohold;
    int Pdecay;
    int Prange;
    int Plpf;
    int Phpf;
    int Phold;

private:

    void setlpf (int Plpf);
    void sethpf (int Phpf);


    int hold_count;
    int state;
    float range;
    float cut;
    float t_level;
    float a_rate;
    float d_rate;
    float env;
    float gate;
    float fs;
    float hold;
    
    uint32_t PERIOD;
    double fSAMPLE_RATE;

    float* interpbuf; //buffer for filters
    AnalogFilter *lpfl, *lpfr, *hpfl, *hpfr;
    class FPreset *Fpre;

};

#endif
