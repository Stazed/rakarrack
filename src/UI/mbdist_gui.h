// generated by Fast Light User Interface Designer (fluid) version 1.0304

#ifndef mbdist_gui_h
#define mbdist_gui_h
#include <FL/Fl.H>
#include <FL/Fl_Group.H>
#include "sliderW.h"
#include "../process.h"
#include "rakarrack.h"
#include "common_gui_menu.h"
#include <FL/Fl_Light_Button.H>
#include <FL/Fl_Choice.H>
#include <FL/Fl_Check_Button.H>

class MbdistGui : public Fl_Group {
public:
  MbdistGui(int X, int Y, int W, int H, const char *L = 0);
  Fl_Light_Button *mbdist_activar;
private:
  inline void cb_mbdist_activar_i(Fl_Light_Button*, void*);
  static void cb_mbdist_activar(Fl_Light_Button*, void*);
public:
  Fl_Choice *mbdist_preset;
private:
  inline void cb_mbdist_preset_i(Fl_Choice*, void*);
  static void cb_mbdist_preset(Fl_Choice*, void*);
  static Fl_Menu_Item menu_mbdist_preset[];
public:
  SliderW *mbdist_WD;
private:
  inline void cb_mbdist_WD_i(SliderW*, void*);
  static void cb_mbdist_WD(SliderW*, void*);
public:
  SliderW *mbdist_LRc;
private:
  inline void cb_mbdist_LRc_i(SliderW*, void*);
  static void cb_mbdist_LRc(SliderW*, void*);
public:
  SliderW *mbdist_drive;
private:
  inline void cb_mbdist_drive_i(SliderW*, void*);
  static void cb_mbdist_drive(SliderW*, void*);
public:
  SliderW *mbdist_level;
private:
  inline void cb_mbdist_level_i(SliderW*, void*);
  static void cb_mbdist_level(SliderW*, void*);
public:
  SliderW *mbdist_volL;
private:
  inline void cb_mbdist_volL_i(SliderW*, void*);
  static void cb_mbdist_volL(SliderW*, void*);
public:
  SliderW *mbdist_volM;
private:
  inline void cb_mbdist_volM_i(SliderW*, void*);
  static void cb_mbdist_volM(SliderW*, void*);
public:
  SliderW *mbdist_volH;
private:
  inline void cb_mbdist_volH_i(SliderW*, void*);
  static void cb_mbdist_volH(SliderW*, void*);
public:
  SliderW *mbdist_cross1;
private:
  inline void cb_mbdist_cross1_i(SliderW*, void*);
  static void cb_mbdist_cross1(SliderW*, void*);
public:
  SliderW *mbdist_cross2;
private:
  inline void cb_mbdist_cross2_i(SliderW*, void*);
  static void cb_mbdist_cross2(SliderW*, void*);
public:
  Fl_Choice *mbdist_tipoL;
private:
  inline void cb_mbdist_tipoL_i(Fl_Choice*, void*);
  static void cb_mbdist_tipoL(Fl_Choice*, void*);
public:
  Fl_Choice *mbdist_tipoM;
private:
  inline void cb_mbdist_tipoM_i(Fl_Choice*, void*);
  static void cb_mbdist_tipoM(Fl_Choice*, void*);
public:
  Fl_Choice *mbdist_tipoH;
private:
  inline void cb_mbdist_tipoH_i(Fl_Choice*, void*);
  static void cb_mbdist_tipoH(Fl_Choice*, void*);
public:
  SliderW *mbdist_pan;
private:
  inline void cb_mbdist_pan_i(SliderW*, void*);
  static void cb_mbdist_pan(SliderW*, void*);
public:
  Fl_Check_Button *mbdist_st;
private:
  inline void cb_mbdist_st_i(Fl_Check_Button*, void*);
  static void cb_mbdist_st(Fl_Check_Button*, void*);
public:
  Fl_Check_Button *mbdist_neg;
private:
  inline void cb_mbdist_neg_i(Fl_Check_Button*, void*);
  static void cb_mbdist_neg(Fl_Check_Button*, void*);
  CommonGuiMenu *m_dist_menu; 
};
#endif
