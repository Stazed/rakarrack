/*
  ZynAddSubFX - a software synthesizer
  Synthfilter.h - Synthesizer filter effect
  Copyright (C) 2010 Ryan Billing
  Based on Analog Phaser  derived from 
  Phaser.h/.C
  Copyright (C) 2002-2005 Nasca Octavian Paul

  Authors: Nasca Octavian Paul, Ryan Billing, Josep Andreu

  Modified for rakarrack by Josep Andreu

  Further modified for rakarrack by Ryan Billing (Transmogrifox) to model Analog Phaser behavior 2009
  
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

#ifndef SYNTHFILTER_H
#define SYNTHFILTER_H
#include "global.h"
#include "EffectLFO.h"

#define MAX_SFILTER_STAGES 12

class Synthfilter
{
public:
  Synthfilter (REALTYPE * efxoutl_, REALTYPE * efxoutr_);
  ~Synthfilter ();
  void out (REALTYPE * smpsl, REALTYPE * smpsr);
  void setpreset (int npreset);
  void changepar (int npar, int value);
  int getpar (int npar);
  void cleanup ();
  int Ppreset;
  REALTYPE *efxoutl;
  REALTYPE *efxoutr;
  REALTYPE outvolume;

private:
  //Phaser parameters
    EffectLFO lfo;		//Phaser modulator
  int Pvolume;        //Used in Process.C to set wet/dry mix
  int Pdistortion;    //Model distortion added by FET element
  int Pwidth;		//Phaser width (LFO amplitude)
  int Pfb;		//feedback
  int Poffset;	//Model mismatch between variable resistors
  int Plpstages;	//Number of first-order Low-Pass stages
  int Phpstages;
  int Poutsub;	//if I wish to subtract the output instead of the adding it
  int Pdepth;         //Depth of phaser sweep
  int Penvelope;	//envelope sensitivity
 
  //Control parameters
  void setvolume (int Pvolume);
  void setdistortion (int Pdistortion);
  void setwidth (int Pwidth);
  void setfb (int Pfb);
  void setdepth (int Pdepth);

  //Internal Variables
  REALTYPE distortion, fb, width, offsetpct, fbl, fbr, depth;
  REALTYPE *lyn1, *ryn1, *lx1hp, *ly1hp, *rx1hp, *ry1hp;
  REALTYPE oldlgain, oldrgain, inv_period;
  
  REALTYPE delta;
  REALTYPE Rmin;	// 2N5457 typical on resistance at Vgs = 0
  REALTYPE Rmax;	// Resistor parallel to FET
  REALTYPE C, Clp, Chp;	        // Capacitor


};

#endif