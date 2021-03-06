/* tuneit.c -- Detect fundamental frequency of a sound
* Copyright (C) 2004, 2005  Mario Lang <mlang@delysid.org>
*
* Modified for rakarrack by Josep Andreu
* MIDIConverter.h  MIDIConverter definitions
*
* This is free software, placed under the terms of the
* GNU General Public License, as published by the Free Software Foundation.
* Please see the file COPYING for details.
*/


#ifndef MIDICONVERTER_H_
#define MIDICONVERTER_H_

#include <math.h>
#include <stdlib.h>
#include <complex.h>
#include <fftw3.h>

const unsigned char  EVENT_NOTE_OFF         = 0x80;
const unsigned char  EVENT_NOTE_ON          = 0x90;
const unsigned char  NOTE_OFF_VELOCITY      = 64;

#ifdef LV2_SUPPORT

#include "lv2/lv2plug.in/ns/ext/midi/midi.h"
#include"../lv2/rkrlv2.h"

struct _RKRLV2;     // Forward declaration

#else
#include <jack/midiport.h>
#include <jack/ringbuffer.h>
#include <alsa/asoundlib.h>
#include "process.h"

#endif // LV2_SUPPORT

class MIDIConverter
{
public:
    MIDIConverter (char *jname, double sample_rate, uint32_t intermediate_bufsize);
    ~MIDIConverter ();

    void out (float * efxoutl, float * efxoutr);

    signed short int *schmittBuffer;
    signed short int *schmittPointer;
    const char **notes;
    int note;
    float nfreq, afreq, freq;
    float TrigVal;
    int cents;
    void schmittFloat (float * efxoutl, float * efxoutr, float val_sum, float *freqs, float *lfreqs);
    void fftFloat (float * efxoutl, float * efxoutr, float val_sum, float *freqs, float *lfreqs);
    void setmidichannel (int channel);
    void panic ();
    void setTriggerAdjust (int val);
    void setVelAdjust (int val);
    void setOctAdjust(int val);
    void setGain(int val);

    void changepar (int npar, int value);
    int getpar (int npar);
    void cleanup ();
    void lv2_update_params(uint32_t period);

#ifdef LV2_SUPPORT
    void update_freqs(float val);
#endif // LV2_SUPPORT
    
    int channel;
    int lanota;
    int nota_actual;
    int hay;
    int preparada;
    int ponla;
    int velocity;
    int Moctave;
    uint32_t PERIOD;

    float VelVal;
    unsigned char        midi_Note_Message[3];

#ifdef LV2_SUPPORT
    _RKRLV2* plug; // for access to forge_midimessage()
#else
    jack_ringbuffer_t   *m_buffSize;
    jack_ringbuffer_t   *m_buffMessage;
    snd_seq_t *port;
#endif // LV2_SUPPORT

private:

    void displayFrequency (float freq, float val_sum, float *freqs, float *lfreqs);
    void schmittInit (int size);
    void schmittS16LE (signed short int *indata, float val_sum, float *freqs, float *lfreqs);
    void schmittFree ();

    //FFT
    void fftInit (int size);
    void fftMeasure (int overlap, float *indata, float val_sum, float *freqs, float *lfreqs);
    void fftS16LE (signed short int *indata, float val_sum, float *freqs, float *lfreqs);
    void fftFree ();
    void send_Midi_Note (uint nota, float val_sum, bool is_On);

    unsigned int blockSize;

    unsigned int SAMPLE_RATE;
    float fSAMPLE_RATE;
    
    float Input_Gain;       // lv2 only
#ifdef LV2_SUPPORT
    float FREQS[12];
    float LFREQS[12];
    float VAL_SUM;
    float old_il_sum; // -50.0
    float old_ir_sum; // -50.0
    float val_il_sum;
    float val_ir_sum;
#endif // LV2_SUPPORT
    
    //Parametrii
    int Pgain;              // lv2 only
    int Pmidi;
    int Poctave;
    int Ppanic;
    int Pvelocity;
    int Ptrigger;
    int Pfft;

    float *fftSampleBuffer;
    float *fftSample;
    float *fftLastPhase;
    int fftSize;
    int fftFrameCount;
    float *fftIn;
    fftwf_complex *fftOut;
    fftwf_plan fftPlan;

    typedef struct {
        double freq;
        double db;
    } Peak;

};

#endif /*MIDICONVERTER_H_ */
