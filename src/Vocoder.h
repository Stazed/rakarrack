/*
  Vocoder.h - Vocoder Effect

  Author: Ryam Billing & Josep Andreu
  
  Adapted effect structure of ZynAddSubFX - a software synthesizer
  Author: Nasca Octavian Paul
   
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

#ifndef VOCODER_H
#define VOCODER_H

#include "global.h"

class Vocoder
{
public:
  Vocoder (float * efxoutl_, float * efxoutr_, float *auxresampled_);
  ~Vocoder ();
  void out (float * smpsl, float * smpr);
  void setpreset (int npreset);
  void changepar (int npar, int value);
  int getpar (int npar);
  void cleanup ();

  void setdryonly ();
  int Ppreset;

  float *efxoutl;
  float *efxoutr;
  float *auxresampled;

  float volume;
  float outvolume;



private:
  //Parametrii
  int Pvolume;	//This is master wet/dry mix like other FX...but I am finding it is not useful
  int Ppanning;	//Panning
  int Plrcross;	// L/R Mixing  // This is a mono effect, so lrcross and panning are pointless
  int Phidamp;
  int Plevel;		//This should only adjust the level of the IR effect, and not wet/dry mix
  int Psafe;
  int Plength;		//5...500 ms// Set maximum length of IR.
  int Puser;		//-64...64//Feedback.
  int Preverb;		//0 or 1//For processing long reverb responses using some tricks to make CPU ok.
  int Filenum;
  int Pfb;		//-64 ... 64// amount of feedback
  void setvolume (int Pvolume);
  void setpanning (int Ppanning);
  void sethidamp (int Phidamp);
  void process_window();

  int offset, voffset;

  //Parametrii reali
  float lpanning, rpanning, hidamp, alpha_hidamp, convlength, oldl;
  float *vocbuf, *window, *lxn;
  int maxx_size,maxx_read,real_len,length;
  float level,fb, feedback;
  


};


#endif