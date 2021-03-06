// generated by Fast Light User Interface Designer (fluid) version 1.0304

#ifndef aphaser_gui_h
#define aphaser_gui_h
#include <FL/Fl.H>
#include <FL/Fl_Group.H>
#include "sliderW.h"
#include "../process.h"
#include "rakarrack.h"
#include "common_gui_menu.h"
#include <FL/Fl_Light_Button.H>
#include <FL/Fl_Choice.H>
#include <FL/Fl_Counter.H>
#include <FL/Fl_Check_Button.H>

class AphaserGui : public Fl_Group {
public:
  AphaserGui(int X, int Y, int W, int H, const char *L = 0);
  Fl_Light_Button *aphaser_activar;
private:
  inline void cb_aphaser_activar_i(Fl_Light_Button*, void*);
  static void cb_aphaser_activar(Fl_Light_Button*, void*);
public:
  Fl_Choice *aphaser_preset;
private:
  inline void cb_aphaser_preset_i(Fl_Choice*, void*);
  static void cb_aphaser_preset(Fl_Choice*, void*);
  static Fl_Menu_Item menu_aphaser_preset[];
public:
  SliderW *aphaser_WD;
private:
  inline void cb_aphaser_WD_i(SliderW*, void*);
  static void cb_aphaser_WD(SliderW*, void*);
public:
  Fl_Choice *aphaser_lfotype;
private:
  inline void cb_aphaser_lfotype_i(Fl_Choice*, void*);
  static void cb_aphaser_lfotype(Fl_Choice*, void*);
public:
  SliderW *aphaser_freq;
private:
  inline void cb_aphaser_freq_i(SliderW*, void*);
  static void cb_aphaser_freq(SliderW*, void*);
public:
  SliderW *aphaser_dpth;
private:
  inline void cb_aphaser_dpth_i(SliderW*, void*);
  static void cb_aphaser_dpth(SliderW*, void*);
public:
  SliderW *aphaser_phase;
private:
  inline void cb_aphaser_phase_i(SliderW*, void*);
  static void cb_aphaser_phase(SliderW*, void*);
public:
  SliderW *aphaser_fb;
private:
  inline void cb_aphaser_fb_i(SliderW*, void*);
  static void cb_aphaser_fb(SliderW*, void*);
public:
  SliderW *aphaser_LR;
private:
  inline void cb_aphaser_LR_i(SliderW*, void*);
  static void cb_aphaser_LR(SliderW*, void*);
public:
  SliderW *aphaser_pan;
private:
  inline void cb_aphaser_pan_i(SliderW*, void*);
  static void cb_aphaser_pan(SliderW*, void*);
public:
  SliderW *aphaser_stdf;
private:
  inline void cb_aphaser_stdf_i(SliderW*, void*);
  static void cb_aphaser_stdf(SliderW*, void*);
public:
  Fl_Counter *aphaser_stages;
private:
  inline void cb_aphaser_stages_i(Fl_Counter*, void*);
  static void cb_aphaser_stages(Fl_Counter*, void*);
public:
  Fl_Check_Button *aphaser_subs;
private:
  inline void cb_aphaser_subs_i(Fl_Check_Button*, void*);
  static void cb_aphaser_subs(Fl_Check_Button*, void*);
public:
  Fl_Check_Button *aphaser_hyper;
private:
  inline void cb_aphaser_hyper_i(Fl_Check_Button*, void*);
  static void cb_aphaser_hyper(Fl_Check_Button*, void*);
  CommonGuiMenu *m_lfo_menu; 
};
#endif
