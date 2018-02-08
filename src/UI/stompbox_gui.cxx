// generated by Fast Light User Interface Designer (fluid) version 1.0304

#include "stompbox_gui.h"

void StompboxGui::cb_stomp_activar_i(Fl_Light_Button* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(116);
 o->value(rkr->StompBox_Bypass);
 return;
}
rkr->StompBox_Bypass=(int)o->value();
if((int) o->value()==0)
rkr->efx_StompBox->cleanup();
rgui->findpos(39,(int)o->value(),o);
}
void StompboxGui::cb_stomp_activar(Fl_Light_Button* o, void* v) {
  ((StompboxGui*)(o->parent()))->cb_stomp_activar_i(o,v);
}

void StompboxGui::cb_stomp_preset_i(Fl_Choice* o, void* v) {
  long long ud= (long long) v;
if((ud==0)||(ud==12039))rkr->efx_StompBox->setpreset((int)o->value());
stomp_WD->value(rkr->efx_StompBox->getpar(0));
stomp_gain->value(rkr->efx_StompBox->getpar(4));
stomp_low->value(rkr->efx_StompBox->getpar(3));
stomp_mid->value(rkr->efx_StompBox->getpar(2));
stomp_high->value(rkr->efx_StompBox->getpar(1));

stomp_mode->value(rkr->efx_StompBox->getpar(5));
}
void StompboxGui::cb_stomp_preset(Fl_Choice* o, void* v) {
  ((StompboxGui*)(o->parent()))->cb_stomp_preset_i(o,v);
}

Fl_Menu_Item StompboxGui::menu_stomp_preset[] = {
 {"Odie", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {"Grunger", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {"Hard Dist.", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {"Ratula", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {"Classic Dist", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {"Morbid Impalement", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {"Sharp Metal", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {"Classic Fuzz", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {0,0,0,0,0,0,0,0,0}
};

void StompboxGui::cb_stomp_WD_i(SliderW* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(334);
 return;
}
rkr->efx_StompBox->changepar(0,(int)o->value());
}
void StompboxGui::cb_stomp_WD(SliderW* o, void* v) {
  ((StompboxGui*)(o->parent()))->cb_stomp_WD_i(o,v);
}

void StompboxGui::cb_stomp_gain_i(SliderW* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(335);
 return;
}
rkr->efx_StompBox->changepar(4,(int)o->value());
}
void StompboxGui::cb_stomp_gain(SliderW* o, void* v) {
  ((StompboxGui*)(o->parent()))->cb_stomp_gain_i(o,v);
}

void StompboxGui::cb_stomp_low_i(SliderW* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(336);
 return;
}
rkr->efx_StompBox->changepar(3,(int)o->value());
}
void StompboxGui::cb_stomp_low(SliderW* o, void* v) {
  ((StompboxGui*)(o->parent()))->cb_stomp_low_i(o,v);
}

void StompboxGui::cb_stomp_mid_i(SliderW* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(337);
 return;
}
rkr->efx_StompBox->changepar(2,(int)o->value());
}
void StompboxGui::cb_stomp_mid(SliderW* o, void* v) {
  ((StompboxGui*)(o->parent()))->cb_stomp_mid_i(o,v);
}

void StompboxGui::cb_stomp_high_i(SliderW* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(338);
 return;
}
rkr->efx_StompBox->changepar(1,(int)o->value());
}
void StompboxGui::cb_stomp_high(SliderW* o, void* v) {
  ((StompboxGui*)(o->parent()))->cb_stomp_high_i(o,v);
}

void StompboxGui::cb_stomp_mode_i(Fl_Choice* o, void*) {
  rkr->efx_StompBox->changepar(5,(int)o->value());
}
void StompboxGui::cb_stomp_mode(Fl_Choice* o, void* v) {
  ((StompboxGui*)(o->parent()))->cb_stomp_mode_i(o,v);
}

Fl_Menu_Item StompboxGui::menu_stomp_mode[] = {
 {"Amp", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 9, 0},
 {"Grunge", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 9, 0},
 {"Rat", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 9, 0},
 {"Fat Cat", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 9, 0},
 {"Dist+", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 9, 0},
 {"Death", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 9, 0},
 {"Mid Elves Own", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 9, 0},
 {"Fuzz", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 9, 0},
 {0,0,0,0,0,0,0,0,0}
};
StompboxGui::StompboxGui(int X, int Y, int W, int H, const char *L)
  : Fl_Group(0, 0, W, H, L) {
this->box(FL_UP_BOX);
this->color(FL_FOREGROUND_COLOR);
this->selection_color(FL_FOREGROUND_COLOR);
this->user_data((void*)(1));
this->align(Fl_Align(96|FL_ALIGN_INSIDE));
{ stomp_activar = new Fl_Light_Button(5, 4, 34, 18, "On");
  stomp_activar->shortcut(0x30);
  stomp_activar->color((Fl_Color)62);
  stomp_activar->selection_color((Fl_Color)1);
  stomp_activar->labelsize(10);
  stomp_activar->callback((Fl_Callback*)cb_stomp_activar, (void*)(2));
  stomp_activar->when(FL_WHEN_CHANGED);
} // Fl_Light_Button* stomp_activar
{ stomp_preset = new Fl_Choice(77, 4, 76, 18, "Preset");
  stomp_preset->down_box(FL_BORDER_BOX);
  stomp_preset->selection_color(FL_FOREGROUND_COLOR);
  stomp_preset->labelsize(10);
  stomp_preset->labelcolor(FL_BACKGROUND2_COLOR);
  stomp_preset->textsize(10);
  stomp_preset->textcolor(FL_BACKGROUND2_COLOR);
  stomp_preset->callback((Fl_Callback*)cb_stomp_preset, (void*)(12039));
  stomp_preset->when(FL_WHEN_RELEASE_ALWAYS);
  stomp_preset->menu(menu_stomp_preset);
} // Fl_Choice* stomp_preset
{ stomp_WD = new SliderW(50, 30, 100, 10, "Level");
  stomp_WD->type(5);
  stomp_WD->box(FL_FLAT_BOX);
  stomp_WD->color((Fl_Color)178);
  stomp_WD->selection_color((Fl_Color)62);
  stomp_WD->labeltype(FL_NORMAL_LABEL);
  stomp_WD->labelfont(0);
  stomp_WD->labelsize(10);
  stomp_WD->labelcolor(FL_BACKGROUND2_COLOR);
  stomp_WD->maximum(127);
  stomp_WD->step(1);
  stomp_WD->textcolor(FL_BACKGROUND2_COLOR);
  stomp_WD->callback((Fl_Callback*)cb_stomp_WD);
  stomp_WD->align(Fl_Align(FL_ALIGN_LEFT));
  stomp_WD->when(FL_WHEN_CHANGED);
} // SliderW* stomp_WD
{ stomp_gain = new SliderW(50, 58, 100, 10, "Gain");
  stomp_gain->type(5);
  stomp_gain->box(FL_FLAT_BOX);
  stomp_gain->color((Fl_Color)178);
  stomp_gain->selection_color((Fl_Color)62);
  stomp_gain->labeltype(FL_NORMAL_LABEL);
  stomp_gain->labelfont(0);
  stomp_gain->labelsize(10);
  stomp_gain->labelcolor(FL_BACKGROUND2_COLOR);
  stomp_gain->maximum(127);
  stomp_gain->step(1);
  stomp_gain->textcolor(FL_BACKGROUND2_COLOR);
  stomp_gain->callback((Fl_Callback*)cb_stomp_gain);
  stomp_gain->align(Fl_Align(FL_ALIGN_LEFT));
  stomp_gain->when(FL_WHEN_CHANGED);
} // SliderW* stomp_gain
{ stomp_low = new SliderW(50, 75, 100, 10, "Low");
  stomp_low->type(5);
  stomp_low->box(FL_FLAT_BOX);
  stomp_low->color((Fl_Color)178);
  stomp_low->selection_color((Fl_Color)62);
  stomp_low->labeltype(FL_NORMAL_LABEL);
  stomp_low->labelfont(0);
  stomp_low->labelsize(10);
  stomp_low->labelcolor(FL_BACKGROUND2_COLOR);
  stomp_low->minimum(-64);
  stomp_low->maximum(64);
  stomp_low->step(1);
  stomp_low->textcolor(FL_BACKGROUND2_COLOR);
  stomp_low->callback((Fl_Callback*)cb_stomp_low);
  stomp_low->align(Fl_Align(FL_ALIGN_LEFT));
  stomp_low->when(FL_WHEN_CHANGED);
} // SliderW* stomp_low
{ stomp_mid = new SliderW(50, 92, 100, 10, "Mid");
  stomp_mid->type(5);
  stomp_mid->box(FL_FLAT_BOX);
  stomp_mid->color((Fl_Color)178);
  stomp_mid->selection_color((Fl_Color)62);
  stomp_mid->labeltype(FL_NORMAL_LABEL);
  stomp_mid->labelfont(0);
  stomp_mid->labelsize(10);
  stomp_mid->labelcolor(FL_BACKGROUND2_COLOR);
  stomp_mid->minimum(-64);
  stomp_mid->maximum(64);
  stomp_mid->step(1);
  stomp_mid->textcolor(FL_BACKGROUND2_COLOR);
  stomp_mid->callback((Fl_Callback*)cb_stomp_mid);
  stomp_mid->align(Fl_Align(36));
  stomp_mid->when(FL_WHEN_CHANGED);
} // SliderW* stomp_mid
{ stomp_high = new SliderW(50, 109, 100, 10, "High");
  stomp_high->type(5);
  stomp_high->box(FL_FLAT_BOX);
  stomp_high->color((Fl_Color)178);
  stomp_high->selection_color((Fl_Color)62);
  stomp_high->labeltype(FL_NORMAL_LABEL);
  stomp_high->labelfont(0);
  stomp_high->labelsize(10);
  stomp_high->labelcolor(FL_BACKGROUND2_COLOR);
  stomp_high->minimum(-64);
  stomp_high->maximum(64);
  stomp_high->step(1);
  stomp_high->textcolor(FL_BACKGROUND2_COLOR);
  stomp_high->callback((Fl_Callback*)cb_stomp_high);
  stomp_high->align(Fl_Align(FL_ALIGN_LEFT));
  stomp_high->when(FL_WHEN_CHANGED);
} // SliderW* stomp_high
{ stomp_mode = new Fl_Choice(43, 165, 78, 13, "Mode");
  stomp_mode->down_box(FL_BORDER_BOX);
  stomp_mode->labelsize(9);
  stomp_mode->labelcolor(FL_BACKGROUND2_COLOR);
  stomp_mode->textsize(9);
  stomp_mode->textcolor(FL_BACKGROUND2_COLOR);
  stomp_mode->callback((Fl_Callback*)cb_stomp_mode, (void*)(12));
  stomp_mode->menu(menu_stomp_mode);
} // Fl_Choice* stomp_mode
position(X, Y);
end();
}
