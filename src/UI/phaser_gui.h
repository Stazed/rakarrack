// generated by Fast Light User Interface Designer (fluid) version 1.0304

#ifndef phaser_gui_h
#define phaser_gui_h
#include <FL/Fl.H>
#include <FL/Fl_Group.H>
#include "sliderW.h"
#include "../process.h"
#include "rakarrack.h"
#include "common_gui_menu.h"
#include <FL/Fl_Light_Button.H>
#include <FL/Fl_Choice.H>
#include <FL/Fl_Check_Button.H>
#include <FL/Fl_Counter.H>

class PhaserGui : public Fl_Group {
public:
  PhaserGui(int X, int Y, int W, int H, const char *L = 0);
  Fl_Light_Button *phaser_activar;
private:
  inline void cb_phaser_activar_i(Fl_Light_Button*, void*);
  static void cb_phaser_activar(Fl_Light_Button*, void*);
public:
  Fl_Choice *phaser_preset;
private:
  inline void cb_phaser_preset_i(Fl_Choice*, void*);
  static void cb_phaser_preset(Fl_Choice*, void*);
  static Fl_Menu_Item menu_phaser_preset[];
public:
  SliderW *phaser_WD;
private:
  inline void cb_phaser_WD_i(SliderW*, void*);
  static void cb_phaser_WD(SliderW*, void*);
public:
  SliderW *phaser_pan;
private:
  inline void cb_phaser_pan_i(SliderW*, void*);
  static void cb_phaser_pan(SliderW*, void*);
public:
  SliderW *phaser_freq;
private:
  inline void cb_phaser_freq_i(SliderW*, void*);
  static void cb_phaser_freq(SliderW*, void*);
public:
  SliderW *phaser_rnd;
private:
  inline void cb_phaser_rnd_i(SliderW*, void*);
  static void cb_phaser_rnd(SliderW*, void*);
public:
  Fl_Choice *phaser_lfotype;
private:
  inline void cb_phaser_lfotype_i(Fl_Choice*, void*);
  static void cb_phaser_lfotype(Fl_Choice*, void*);
public:
  Fl_Check_Button *phaser_subs;
private:
  inline void cb_phaser_subs_i(Fl_Check_Button*, void*);
  static void cb_phaser_subs(Fl_Check_Button*, void*);
public:
  SliderW *phaser_phase;
private:
  inline void cb_phaser_phase_i(SliderW*, void*);
  static void cb_phaser_phase(SliderW*, void*);
public:
  SliderW *phaser_stdf;
private:
  inline void cb_phaser_stdf_i(SliderW*, void*);
  static void cb_phaser_stdf(SliderW*, void*);
public:
  SliderW *phaser_dpth;
private:
  inline void cb_phaser_dpth_i(SliderW*, void*);
  static void cb_phaser_dpth(SliderW*, void*);
public:
  SliderW *phaser_fb;
private:
  inline void cb_phaser_fb_i(SliderW*, void*);
  static void cb_phaser_fb(SliderW*, void*);
public:
  Fl_Counter *phaser_stages;
private:
  inline void cb_phaser_stages_i(Fl_Counter*, void*);
  static void cb_phaser_stages(Fl_Counter*, void*);
public:
  SliderW *phaser_LR;
private:
  inline void cb_phaser_LR_i(SliderW*, void*);
  static void cb_phaser_LR(SliderW*, void*);
  CommonGuiMenu *m_lfo_menu; 
};
#endif
