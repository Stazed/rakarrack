// generated by Fast Light User Interface Designer (fluid) version 1.0304

#ifndef peq_gui_h
#define peq_gui_h
#include <FL/Fl.H>
#include <FL/Fl_Group.H>
#include "sliderW.h"
#include "../process.h"
#include "rakarrack.h"
#include <FL/Fl_Light_Button.H>
#include <FL/Fl_Choice.H>

class PeqGui : public Fl_Group {
public:
  PeqGui(int X, int Y, int W, int H, const char *L = 0);
  Fl_Light_Button *eqp_activar;
private:
  inline void cb_eqp_activar_i(Fl_Light_Button*, void*);
  static void cb_eqp_activar(Fl_Light_Button*, void*);
public:
  Fl_Choice *eqp_preset;
private:
  inline void cb_eqp_preset_i(Fl_Choice*, void*);
  static void cb_eqp_preset(Fl_Choice*, void*);
  static Fl_Menu_Item menu_eqp_preset[];
public:
  SliderW *eqp_Gain;
private:
  inline void cb_eqp_Gain_i(SliderW*, void*);
  static void cb_eqp_Gain(SliderW*, void*);
public:
  SliderW *eqp_LF;
private:
  inline void cb_eqp_LF_i(SliderW*, void*);
  static void cb_eqp_LF(SliderW*, void*);
public:
  SliderW *eqp_LFg;
private:
  inline void cb_eqp_LFg_i(SliderW*, void*);
  static void cb_eqp_LFg(SliderW*, void*);
public:
  SliderW *eqp_LQ;
private:
  inline void cb_eqp_LQ_i(SliderW*, void*);
  static void cb_eqp_LQ(SliderW*, void*);
public:
  SliderW *eqp_MF;
private:
  inline void cb_eqp_MF_i(SliderW*, void*);
  static void cb_eqp_MF(SliderW*, void*);
public:
  SliderW *eqp_MFg;
private:
  inline void cb_eqp_MFg_i(SliderW*, void*);
  static void cb_eqp_MFg(SliderW*, void*);
public:
  SliderW *eqp_MQ;
private:
  inline void cb_eqp_MQ_i(SliderW*, void*);
  static void cb_eqp_MQ(SliderW*, void*);
public:
  SliderW *eqp_HF;
private:
  inline void cb_eqp_HF_i(SliderW*, void*);
  static void cb_eqp_HF(SliderW*, void*);
public:
  SliderW *eqp_HFg;
private:
  inline void cb_eqp_HFg_i(SliderW*, void*);
  static void cb_eqp_HFg(SliderW*, void*);
public:
  SliderW *eqp_HQ;
private:
  inline void cb_eqp_HQ_i(SliderW*, void*);
  static void cb_eqp_HQ(SliderW*, void*);
};
#endif