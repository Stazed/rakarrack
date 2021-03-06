// generated by Fast Light User Interface Designer (fluid) version 1.0304

#ifndef alienwah_gui_h
#define alienwah_gui_h
#include <FL/Fl.H>
#include <FL/Fl_Group.H>
#include "sliderW.h"
#include "../process.h"
#include "rakarrack.h"
#include "common_gui_menu.h"
#include <FL/Fl_Light_Button.H>
#include <FL/Fl_Choice.H>

class AlienwahGui : public Fl_Group {
public:
  AlienwahGui(int X, int Y, int W, int H, const char *L = 0);
  Fl_Light_Button *Alienwah_activar;
private:
  inline void cb_Alienwah_activar_i(Fl_Light_Button*, void*);
  static void cb_Alienwah_activar(Fl_Light_Button*, void*);
public:
  Fl_Choice *Alienwah_preset;
private:
  inline void cb_Alienwah_preset_i(Fl_Choice*, void*);
  static void cb_Alienwah_preset(Fl_Choice*, void*);
  static Fl_Menu_Item menu_Alienwah_preset[];
public:
  SliderW *Alienwah_WD;
private:
  inline void cb_Alienwah_WD_i(SliderW*, void*);
  static void cb_Alienwah_WD(SliderW*, void*);
public:
  SliderW *Alienwah_pan;
private:
  inline void cb_Alienwah_pan_i(SliderW*, void*);
  static void cb_Alienwah_pan(SliderW*, void*);
public:
  SliderW *Alienwah_freq;
private:
  inline void cb_Alienwah_freq_i(SliderW*, void*);
  static void cb_Alienwah_freq(SliderW*, void*);
public:
  SliderW *Alienwah_rnd;
private:
  inline void cb_Alienwah_rnd_i(SliderW*, void*);
  static void cb_Alienwah_rnd(SliderW*, void*);
public:
  Fl_Choice *Alienwah_lfotype;
private:
  inline void cb_Alienwah_lfotype_i(Fl_Choice*, void*);
  static void cb_Alienwah_lfotype(Fl_Choice*, void*);
public:
  SliderW *Alienwah_phase;
private:
  inline void cb_Alienwah_phase_i(SliderW*, void*);
  static void cb_Alienwah_phase(SliderW*, void*);
public:
  SliderW *Alienwah_stdf;
private:
  inline void cb_Alienwah_stdf_i(SliderW*, void*);
  static void cb_Alienwah_stdf(SliderW*, void*);
public:
  SliderW *Alienwah_dpth;
private:
  inline void cb_Alienwah_dpth_i(SliderW*, void*);
  static void cb_Alienwah_dpth(SliderW*, void*);
public:
  SliderW *Alienwah_delay;
private:
  inline void cb_Alienwah_delay_i(SliderW*, void*);
  static void cb_Alienwah_delay(SliderW*, void*);
public:
  SliderW *Alienwah_fb;
private:
  inline void cb_Alienwah_fb_i(SliderW*, void*);
  static void cb_Alienwah_fb(SliderW*, void*);
public:
  SliderW *Alienwah_LR;
private:
  inline void cb_Alienwah_LR_i(SliderW*, void*);
  static void cb_Alienwah_LR(SliderW*, void*);
  CommonGuiMenu *m_lfo_menu; 
};
#endif
