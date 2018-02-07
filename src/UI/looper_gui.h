// generated by Fast Light User Interface Designer (fluid) version 1.0304

#ifndef looper_gui_h
#define looper_gui_h
#include <FL/Fl.H>
#include <FL/Fl_Group.H>
#include "sliderW.h"
#include "../process.h"
#include "rakarrack.h"
#include <FL/Fl_Light_Button.H>
#include <FL/Fl_Choice.H>
#include <FL/Fl_Check_Button.H>
#include <FL/Fl_Box.H>
#include <FL/Fl_Button.H>

class LooperGui : public Fl_Group {
public:
  LooperGui(int X, int Y, int W, int H, const char *L = 0);
  Fl_Light_Button *looper_activar;
private:
  inline void cb_looper_activar_i(Fl_Light_Button*, void*);
  static void cb_looper_activar(Fl_Light_Button*, void*);
public:
  Fl_Choice *looper_preset;
private:
  inline void cb_looper_preset_i(Fl_Choice*, void*);
  static void cb_looper_preset(Fl_Choice*, void*);
  static Fl_Menu_Item menu_looper_preset[];
public:
  SliderW *looper_WD;
private:
  inline void cb_looper_WD_i(SliderW*, void*);
  static void cb_looper_WD(SliderW*, void*);
public:
  SliderW *looper_level1;
private:
  inline void cb_looper_level1_i(SliderW*, void*);
  static void cb_looper_level1(SliderW*, void*);
public:
  SliderW *looper_level2;
private:
  inline void cb_looper_level2_i(SliderW*, void*);
  static void cb_looper_level2(SliderW*, void*);
public:
  SliderW *looper_Tempo;
private:
  inline void cb_looper_Tempo_i(SliderW*, void*);
  static void cb_looper_Tempo(SliderW*, void*);
public:
  Fl_Choice *looper_bar;
private:
  inline void cb_looper_bar_i(Fl_Choice*, void*);
  static void cb_looper_bar(Fl_Choice*, void*);
  static Fl_Menu_Item menu_looper_bar[];
public:
  Fl_Choice *looper_ms;
private:
  inline void cb_looper_ms_i(Fl_Choice*, void*);
  static void cb_looper_ms(Fl_Choice*, void*);
  static Fl_Menu_Item menu_looper_ms[];
public:
  Fl_Check_Button *looper_rv;
private:
  inline void cb_looper_rv_i(Fl_Check_Button*, void*);
  static void cb_looper_rv(Fl_Check_Button*, void*);
public:
  Fl_Check_Button *looper_ap;
private:
  inline void cb_looper_ap_i(Fl_Check_Button*, void*);
  static void cb_looper_ap(Fl_Check_Button*, void*);
public:
  Fl_Box *Box_Play;
  Fl_Box *Box_P;
  Fl_Button *looper_play;
private:
  inline void cb_looper_play_i(Fl_Button*, void*);
  static void cb_looper_play(Fl_Button*, void*);
public:
  Fl_Button *looper_stop;
private:
  inline void cb_looper_stop_i(Fl_Button*, void*);
  static void cb_looper_stop(Fl_Button*, void*);
public:
  Fl_Button *looper_record;
private:
  inline void cb_looper_record_i(Fl_Button*, void*);
  static void cb_looper_record(Fl_Button*, void*);
public:
  Fl_Check_Button *looper_r1;
private:
  inline void cb_looper_r1_i(Fl_Check_Button*, void*);
  static void cb_looper_r1(Fl_Check_Button*, void*);
public:
  Fl_Check_Button *looper_r2;
private:
  inline void cb_looper_r2_i(Fl_Check_Button*, void*);
  static void cb_looper_r2(Fl_Check_Button*, void*);
public:
  Fl_Button *looper_t1;
private:
  inline void cb_looper_t1_i(Fl_Button*, void*);
  static void cb_looper_t1(Fl_Button*, void*);
public:
  Fl_Button *looper_t2;
private:
  inline void cb_looper_t2_i(Fl_Button*, void*);
  static void cb_looper_t2(Fl_Button*, void*);
public:
  Fl_Check_Button *looper_lnk;
private:
  inline void cb_looper_lnk_i(Fl_Check_Button*, void*);
  static void cb_looper_lnk(Fl_Check_Button*, void*);
public:
  Fl_Button *looper_clear;
private:
  inline void cb_looper_clear_i(Fl_Button*, void*);
  static void cb_looper_clear(Fl_Button*, void*);
public:
  Fl_Check_Button *looper_mt;
private:
  inline void cb_looper_mt_i(Fl_Check_Button*, void*);
  static void cb_looper_mt(Fl_Check_Button*, void*);
public:
  Fl_Box *L_TimePos;
  Fl_Menu_Item* get_menu_looper_bar();
  Fl_Menu_Item* get_menu_looper_ms();
};
#endif
