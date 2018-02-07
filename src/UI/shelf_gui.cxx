// generated by Fast Light User Interface Designer (fluid) version 1.0304

#include "shelf_gui.h"

void ShelfGui::cb_shelf_activar_i(Fl_Light_Button* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(116);
 o->value(rkr->ShelfBoost_Bypass);
 return;
}
rkr->ShelfBoost_Bypass=(int)o->value();
if((int) o->value()==0)
rkr->efx_ShelfBoost->cleanup();
rgui->findpos(34,(int)o->value(),o);
}
void ShelfGui::cb_shelf_activar(Fl_Light_Button* o, void* v) {
  ((ShelfGui*)(o->parent()))->cb_shelf_activar_i(o,v);
}

void ShelfGui::cb_shelf_preset_i(Fl_Choice* o, void* v) {
  long long ud= (long long) v;
if((ud==0)||(ud==12034))rkr->efx_ShelfBoost->setpreset((int) o->value());
shelf_gain->value(rkr->efx_ShelfBoost->getpar(0));
shelf_q1->value(rkr->efx_ShelfBoost->getpar(1));
shelf_freq1->value(rkr->efx_ShelfBoost->getpar(2));
shelf_mode->value(rkr->efx_ShelfBoost->getpar(3));
shelf_level->value(rkr->efx_ShelfBoost->getpar(4));
}
void ShelfGui::cb_shelf_preset(Fl_Choice* o, void* v) {
  ((ShelfGui*)(o->parent()))->cb_shelf_preset_i(o,v);
}

Fl_Menu_Item ShelfGui::menu_shelf_preset[] = {
 {"Treble", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {"Mid", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {"Low", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {"Distortion 1", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {0,0,0,0,0,0,0,0,0}
};

void ShelfGui::cb_shelf_gain_i(SliderW* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(292);
 return;
}
rkr->efx_ShelfBoost->changepar(0,(int)o->value());
}
void ShelfGui::cb_shelf_gain(SliderW* o, void* v) {
  ((ShelfGui*)(o->parent()))->cb_shelf_gain_i(o,v);
}

void ShelfGui::cb_shelf_level_i(SliderW* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(293);
 return;
}
rkr->efx_ShelfBoost->changepar(4,(int)o->value());
}
void ShelfGui::cb_shelf_level(SliderW* o, void* v) {
  ((ShelfGui*)(o->parent()))->cb_shelf_level_i(o,v);
}

void ShelfGui::cb_shelf_freq1_i(SliderW* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(294);
 return;
}
rkr->efx_ShelfBoost->changepar(2,(int)o->value());
}
void ShelfGui::cb_shelf_freq1(SliderW* o, void* v) {
  ((ShelfGui*)(o->parent()))->cb_shelf_freq1_i(o,v);
}

void ShelfGui::cb_shelf_q1_i(SliderW* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(295);
 return;
}
rkr->efx_ShelfBoost->changepar(1,(int)o->value());
}
void ShelfGui::cb_shelf_q1(SliderW* o, void* v) {
  ((ShelfGui*)(o->parent()))->cb_shelf_q1_i(o,v);
}

void ShelfGui::cb_shelf_mode_i(Fl_Check_Button* o, void*) {
  rkr->efx_ShelfBoost->changepar(3,(int)o->value());
}
void ShelfGui::cb_shelf_mode(Fl_Check_Button* o, void* v) {
  ((ShelfGui*)(o->parent()))->cb_shelf_mode_i(o,v);
}
ShelfGui::ShelfGui(int X, int Y, int W, int H, const char *L)
  : Fl_Group(0, 0, W, H, L) {
this->box(FL_UP_BOX);
this->color(FL_FOREGROUND_COLOR);
this->selection_color(FL_FOREGROUND_COLOR);
this->user_data((void*)(1));
this->align(Fl_Align(96|FL_ALIGN_INSIDE));
{ shelf_activar = new Fl_Light_Button(5, 4, 34, 18, "On");
  shelf_activar->shortcut(0x31);
  shelf_activar->color((Fl_Color)62);
  shelf_activar->selection_color((Fl_Color)1);
  shelf_activar->labelsize(10);
  shelf_activar->callback((Fl_Callback*)cb_shelf_activar, (void*)(2));
  shelf_activar->align(Fl_Align(68|FL_ALIGN_INSIDE));
  shelf_activar->when(FL_WHEN_CHANGED);
} // Fl_Light_Button* shelf_activar
{ shelf_preset = new Fl_Choice(77, 4, 76, 18, "Preset");
  shelf_preset->down_box(FL_BORDER_BOX);
  shelf_preset->selection_color(FL_FOREGROUND_COLOR);
  shelf_preset->labelsize(10);
  shelf_preset->labelcolor(FL_BACKGROUND2_COLOR);
  shelf_preset->textsize(10);
  shelf_preset->textcolor(FL_BACKGROUND2_COLOR);
  shelf_preset->callback((Fl_Callback*)cb_shelf_preset, (void*)(12034));
  shelf_preset->when(FL_WHEN_RELEASE_ALWAYS);
  shelf_preset->menu(menu_shelf_preset);
} // Fl_Choice* shelf_preset
{ shelf_gain = new SliderW(49, 26, 100, 10, "Gain");
  shelf_gain->type(5);
  shelf_gain->box(FL_FLAT_BOX);
  shelf_gain->color((Fl_Color)178);
  shelf_gain->selection_color((Fl_Color)62);
  shelf_gain->labeltype(FL_NORMAL_LABEL);
  shelf_gain->labelfont(0);
  shelf_gain->labelsize(10);
  shelf_gain->labelcolor(FL_BACKGROUND2_COLOR);
  shelf_gain->maximum(127);
  shelf_gain->step(1);
  shelf_gain->textcolor(FL_BACKGROUND2_COLOR);
  shelf_gain->callback((Fl_Callback*)cb_shelf_gain);
  shelf_gain->align(Fl_Align(FL_ALIGN_LEFT));
  shelf_gain->when(FL_WHEN_CHANGED);
} // SliderW* shelf_gain
{ shelf_level = new SliderW(49, 86, 100, 10, "Level");
  shelf_level->type(5);
  shelf_level->box(FL_FLAT_BOX);
  shelf_level->color((Fl_Color)178);
  shelf_level->selection_color((Fl_Color)62);
  shelf_level->labeltype(FL_NORMAL_LABEL);
  shelf_level->labelfont(0);
  shelf_level->labelsize(10);
  shelf_level->labelcolor(FL_BACKGROUND2_COLOR);
  shelf_level->minimum(1);
  shelf_level->maximum(127);
  shelf_level->step(1);
  shelf_level->value(32);
  shelf_level->textcolor(FL_BACKGROUND2_COLOR);
  shelf_level->callback((Fl_Callback*)cb_shelf_level);
  shelf_level->align(Fl_Align(FL_ALIGN_LEFT));
  shelf_level->when(FL_WHEN_CHANGED);
} // SliderW* shelf_level
{ shelf_freq1 = new SliderW(49, 106, 100, 10, "Tone");
  shelf_freq1->type(5);
  shelf_freq1->box(FL_FLAT_BOX);
  shelf_freq1->color((Fl_Color)178);
  shelf_freq1->selection_color((Fl_Color)62);
  shelf_freq1->labeltype(FL_NORMAL_LABEL);
  shelf_freq1->labelfont(0);
  shelf_freq1->labelsize(10);
  shelf_freq1->labelcolor(FL_BACKGROUND2_COLOR);
  shelf_freq1->minimum(220);
  shelf_freq1->maximum(16000);
  shelf_freq1->step(1);
  shelf_freq1->value(1000);
  shelf_freq1->textcolor(FL_BACKGROUND2_COLOR);
  shelf_freq1->callback((Fl_Callback*)cb_shelf_freq1);
  shelf_freq1->align(Fl_Align(FL_ALIGN_LEFT));
  shelf_freq1->when(FL_WHEN_CHANGED);
} // SliderW* shelf_freq1
{ shelf_q1 = new SliderW(49, 126, 100, 10, "Pres.");
  shelf_q1->type(5);
  shelf_q1->box(FL_FLAT_BOX);
  shelf_q1->color((Fl_Color)178);
  shelf_q1->selection_color((Fl_Color)62);
  shelf_q1->labeltype(FL_NORMAL_LABEL);
  shelf_q1->labelfont(0);
  shelf_q1->labelsize(10);
  shelf_q1->labelcolor(FL_BACKGROUND2_COLOR);
  shelf_q1->minimum(-64);
  shelf_q1->maximum(64);
  shelf_q1->step(1);
  shelf_q1->textcolor(FL_BACKGROUND2_COLOR);
  shelf_q1->callback((Fl_Callback*)cb_shelf_q1);
  shelf_q1->align(Fl_Align(FL_ALIGN_LEFT));
  shelf_q1->when(FL_WHEN_CHANGED);
} // SliderW* shelf_q1
{ shelf_mode = new Fl_Check_Button(13, 161, 54, 15, "Stereo");
  shelf_mode->down_box(FL_BORDER_BOX);
  shelf_mode->labelsize(10);
  shelf_mode->labelcolor(FL_BACKGROUND2_COLOR);
  shelf_mode->callback((Fl_Callback*)cb_shelf_mode, (void*)(2));
} // Fl_Check_Button* shelf_mode
position(X, Y);
end();
}
