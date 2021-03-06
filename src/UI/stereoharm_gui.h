// generated by Fast Light User Interface Designer (fluid) version 1.0304

#ifndef stereoharm_gui_h
#define stereoharm_gui_h
#include <FL/Fl.H>
#include <FL/Fl_Group.H>
#include "sliderW.h"
#include "../process.h"
#include "rakarrack.h"
#include <FL/Fl_Light_Button.H>
#include <FL/Fl_Choice.H>
#include <FL/Fl_Check_Button.H>
#include <FL/Fl_Box.H>

class SharGui : public Fl_Group {
public:
  SharGui(int X, int Y, int W, int H, const char *L = 0);
  Fl_Light_Button *shar_activar;
private:
  inline void cb_shar_activar_i(Fl_Light_Button*, void*);
  static void cb_shar_activar(Fl_Light_Button*, void*);
public:
  Fl_Choice *shar_preset;
private:
  inline void cb_shar_preset_i(Fl_Choice*, void*);
  static void cb_shar_preset(Fl_Choice*, void*);
  static Fl_Menu_Item menu_shar_preset[];
public:
  SliderW *shar_WD;
private:
  inline void cb_shar_WD_i(SliderW*, void*);
  static void cb_shar_WD(SliderW*, void*);
public:
  SliderW *shar_intl;
private:
  inline void cb_shar_intl_i(SliderW*, void*);
  static void cb_shar_intl(SliderW*, void*);
public:
  SliderW *shar_chl;
private:
  inline void cb_shar_chl_i(SliderW*, void*);
  static void cb_shar_chl(SliderW*, void*);
public:
  SliderW *shar_ganl;
private:
  inline void cb_shar_ganl_i(SliderW*, void*);
  static void cb_shar_ganl(SliderW*, void*);
public:
  SliderW *shar_intr;
private:
  inline void cb_shar_intr_i(SliderW*, void*);
  static void cb_shar_intr(SliderW*, void*);
public:
  SliderW *shar_chr;
private:
  inline void cb_shar_chr_i(SliderW*, void*);
  static void cb_shar_chr(SliderW*, void*);
public:
  SliderW *shar_ganr;
private:
  inline void cb_shar_ganr_i(SliderW*, void*);
  static void cb_shar_ganr(SliderW*, void*);
public:
  SliderW *shar_lrc;
private:
  inline void cb_shar_lrc_i(SliderW*, void*);
  static void cb_shar_lrc(SliderW*, void*);
public:
  Fl_Check_Button *shar_MIDI;
private:
  inline void cb_shar_MIDI_i(Fl_Check_Button*, void*);
  static void cb_shar_MIDI(Fl_Check_Button*, void*);
public:
  Fl_Check_Button *shar_SELECT;
private:
  inline void cb_shar_SELECT_i(Fl_Check_Button*, void*);
  static void cb_shar_SELECT(Fl_Check_Button*, void*);
public:
  Fl_Box *shar_chordname;
  SliderW *shar_note;
private:
  inline void cb_shar_note_i(SliderW*, void*);
  static void cb_shar_note(SliderW*, void*);
public:
  SliderW *shar_type;
private:
  inline void cb_shar_type_i(SliderW*, void*);
  static void cb_shar_type(SliderW*, void*);
};
#endif
