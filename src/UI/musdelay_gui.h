// generated by Fast Light User Interface Designer (fluid) version 1.0304

#ifndef musdelay_gui_h
#define musdelay_gui_h
#include <FL/Fl.H>
#include <FL/Fl_Group.H>
#include "sliderW.h"
#include "../process.h"
#include "rakarrack.h"
#include <FL/Fl_Light_Button.H>
#include <FL/Fl_Choice.H>

class MusdelayGui : public Fl_Group {
public:
  MusdelayGui(int X, int Y, int W, int H, const char *L = 0);
  Fl_Light_Button *musdelay_activar;
private:
  inline void cb_musdelay_activar_i(Fl_Light_Button*, void*);
  static void cb_musdelay_activar(Fl_Light_Button*, void*);
public:
  Fl_Choice *musdelay_preset;
private:
  inline void cb_musdelay_preset_i(Fl_Choice*, void*);
  static void cb_musdelay_preset(Fl_Choice*, void*);
  static Fl_Menu_Item menu_musdelay_preset[];
public:
  SliderW *musdelay_WD;
private:
  inline void cb_musdelay_WD_i(SliderW*, void*);
  static void cb_musdelay_WD(SliderW*, void*);
public:
  SliderW *musdelay_LRc;
private:
  inline void cb_musdelay_LRc_i(SliderW*, void*);
  static void cb_musdelay_LRc(SliderW*, void*);
public:
  SliderW *musdelay_pan1;
private:
  inline void cb_musdelay_pan1_i(SliderW*, void*);
  static void cb_musdelay_pan1(SliderW*, void*);
public:
  SliderW *musdelay_pan2;
private:
  inline void cb_musdelay_pan2_i(SliderW*, void*);
  static void cb_musdelay_pan2(SliderW*, void*);
public:
  Fl_Choice *musdelay_delay1;
private:
  inline void cb_musdelay_delay1_i(Fl_Choice*, void*);
  static void cb_musdelay_delay1(Fl_Choice*, void*);
  static Fl_Menu_Item menu_musdelay_delay1[];
public:
  Fl_Choice *musdelay_delay3;
private:
  inline void cb_musdelay_delay3_i(Fl_Choice*, void*);
  static void cb_musdelay_delay3(Fl_Choice*, void*);
  static Fl_Menu_Item menu_musdelay_delay3[];
public:
  Fl_Choice *musdelay_delay2;
private:
  inline void cb_musdelay_delay2_i(Fl_Choice*, void*);
  static void cb_musdelay_delay2(Fl_Choice*, void*);
public:
  SliderW *musdelay_tempo;
private:
  inline void cb_musdelay_tempo_i(SliderW*, void*);
  static void cb_musdelay_tempo(SliderW*, void*);
public:
  SliderW *musdelay_gain1;
private:
  inline void cb_musdelay_gain1_i(SliderW*, void*);
  static void cb_musdelay_gain1(SliderW*, void*);
public:
  SliderW *musdelay_gain2;
private:
  inline void cb_musdelay_gain2_i(SliderW*, void*);
  static void cb_musdelay_gain2(SliderW*, void*);
public:
  SliderW *musdelay_fb1;
private:
  inline void cb_musdelay_fb1_i(SliderW*, void*);
  static void cb_musdelay_fb1(SliderW*, void*);
public:
  SliderW *musdelay_fb2;
private:
  inline void cb_musdelay_fb2_i(SliderW*, void*);
  static void cb_musdelay_fb2(SliderW*, void*);
public:
  SliderW *musdelay_damp;
private:
  inline void cb_musdelay_damp_i(SliderW*, void*);
  static void cb_musdelay_damp(SliderW*, void*);
};
#endif
