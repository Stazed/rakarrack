// generated by Fast Light User Interface Designer (fluid) version 1.0304

#ifndef eq_gui_h
#define eq_gui_h
#include <FL/Fl.H>
#include <FL/Fl_Group.H>
#include "sliderW.h"
#include "../process.h"
#include "rakarrack.h"
#include <FL/Fl_Light_Button.H>
#include <FL/Fl_Choice.H>

class EqGui : public Fl_Group {
public:
  EqGui(int X, int Y, int W, int H, const char *L = 0);
  Fl_Light_Button *eq_activar;
private:
  inline void cb_eq_activar_i(Fl_Light_Button*, void*);
  static void cb_eq_activar(Fl_Light_Button*, void*);
public:
  Fl_Choice *eq_preset;
private:
  inline void cb_eq_preset_i(Fl_Choice*, void*);
  static void cb_eq_preset(Fl_Choice*, void*);
  static Fl_Menu_Item menu_eq_preset[];
public:
  SliderW *eq_Gain;
private:
  inline void cb_eq_Gain_i(SliderW*, void*);
  static void cb_eq_Gain(SliderW*, void*);
public:
  SliderW *eq_Q;
private:
  inline void cb_eq_Q_i(SliderW*, void*);
  static void cb_eq_Q(SliderW*, void*);
public:
  SliderW *eq_1;
private:
  inline void cb_eq_1_i(SliderW*, void*);
  static void cb_eq_1(SliderW*, void*);
public:
  SliderW *eq_2;
private:
  inline void cb_eq_2_i(SliderW*, void*);
  static void cb_eq_2(SliderW*, void*);
public:
  SliderW *eq_3;
private:
  inline void cb_eq_3_i(SliderW*, void*);
  static void cb_eq_3(SliderW*, void*);
public:
  SliderW *eq_4;
private:
  inline void cb_eq_4_i(SliderW*, void*);
  static void cb_eq_4(SliderW*, void*);
public:
  SliderW *eq_5;
private:
  inline void cb_eq_5_i(SliderW*, void*);
  static void cb_eq_5(SliderW*, void*);
public:
  SliderW *eq_6;
private:
  inline void cb_eq_6_i(SliderW*, void*);
  static void cb_eq_6(SliderW*, void*);
public:
  SliderW *eq_7;
private:
  inline void cb_eq_7_i(SliderW*, void*);
  static void cb_eq_7(SliderW*, void*);
public:
  SliderW *eq_8;
private:
  inline void cb_eq_8_i(SliderW*, void*);
  static void cb_eq_8(SliderW*, void*);
public:
  SliderW *eq_9;
private:
  inline void cb_eq_9_i(SliderW*, void*);
  static void cb_eq_9(SliderW*, void*);
public:
  SliderW *eq_10;
private:
  inline void cb_eq_10_i(SliderW*, void*);
  static void cb_eq_10(SliderW*, void*);
};
#endif
