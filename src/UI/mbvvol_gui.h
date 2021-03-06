// generated by Fast Light User Interface Designer (fluid) version 1.0304

#ifndef mbvvol_gui_h
#define mbvvol_gui_h
#include <FL/Fl.H>
#include <FL/Fl_Group.H>
#include "sliderW.h"
#include "../process.h"
#include "rakarrack.h"
#include "common_gui_menu.h"
#include <FL/Fl_Light_Button.H>
#include <FL/Fl_Choice.H>

class MbvvolGui : public Fl_Group {
public:
  MbvvolGui(int X, int Y, int W, int H, const char *L = 0);
  Fl_Light_Button *mbvvol_activar;
private:
  inline void cb_mbvvol_activar_i(Fl_Light_Button*, void*);
  static void cb_mbvvol_activar(Fl_Light_Button*, void*);
public:
  Fl_Choice *mbvvol_preset;
private:
  inline void cb_mbvvol_preset_i(Fl_Choice*, void*);
  static void cb_mbvvol_preset(Fl_Choice*, void*);
  static Fl_Menu_Item menu_mbvvol_preset[];
public:
  SliderW *mbvvol_WD;
private:
  inline void cb_mbvvol_WD_i(SliderW*, void*);
  static void cb_mbvvol_WD(SliderW*, void*);
public:
  SliderW *mbvvol_freq1;
private:
  inline void cb_mbvvol_freq1_i(SliderW*, void*);
  static void cb_mbvvol_freq1(SliderW*, void*);
public:
  Fl_Choice *mbvvol_lfotype1;
private:
  inline void cb_mbvvol_lfotype1_i(Fl_Choice*, void*);
  static void cb_mbvvol_lfotype1(Fl_Choice*, void*);
public:
  SliderW *mbvvol_stdf1;
private:
  inline void cb_mbvvol_stdf1_i(SliderW*, void*);
  static void cb_mbvvol_stdf1(SliderW*, void*);
public:
  SliderW *mbvvol_freq2;
private:
  inline void cb_mbvvol_freq2_i(SliderW*, void*);
  static void cb_mbvvol_freq2(SliderW*, void*);
public:
  Fl_Choice *mbvvol_lfotype2;
private:
  inline void cb_mbvvol_lfotype2_i(Fl_Choice*, void*);
  static void cb_mbvvol_lfotype2(Fl_Choice*, void*);
public:
  SliderW *mbvvol_stdf2;
private:
  inline void cb_mbvvol_stdf2_i(SliderW*, void*);
  static void cb_mbvvol_stdf2(SliderW*, void*);
public:
  SliderW *mbvvol_cross1;
private:
  inline void cb_mbvvol_cross1_i(SliderW*, void*);
  static void cb_mbvvol_cross1(SliderW*, void*);
public:
  SliderW *mbvvol_cross2;
private:
  inline void cb_mbvvol_cross2_i(SliderW*, void*);
  static void cb_mbvvol_cross2(SliderW*, void*);
public:
  SliderW *mbvvol_cross3;
private:
  inline void cb_mbvvol_cross3_i(SliderW*, void*);
  static void cb_mbvvol_cross3(SliderW*, void*);
public:
  Fl_Choice *mbvvol_LB;
private:
  inline void cb_mbvvol_LB_i(Fl_Choice*, void*);
  static void cb_mbvvol_LB(Fl_Choice*, void*);
  static Fl_Menu_Item menu_mbvvol_LB[];
public:
  Fl_Choice *mbvvol_MB1;
private:
  inline void cb_mbvvol_MB1_i(Fl_Choice*, void*);
  static void cb_mbvvol_MB1(Fl_Choice*, void*);
  static Fl_Menu_Item menu_mbvvol_MB1[];
public:
  Fl_Choice *mbvvol_MB2;
private:
  inline void cb_mbvvol_MB2_i(Fl_Choice*, void*);
  static void cb_mbvvol_MB2(Fl_Choice*, void*);
  static Fl_Menu_Item menu_mbvvol_MB2[];
public:
  Fl_Choice *mbvvol_HB;
private:
  inline void cb_mbvvol_HB_i(Fl_Choice*, void*);
  static void cb_mbvvol_HB(Fl_Choice*, void*);
  static Fl_Menu_Item menu_mbvvol_HB[];
  CommonGuiMenu *m_lfo_menu; 
};
#endif
