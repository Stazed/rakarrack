// generated by Fast Light User Interface Designer (fluid) version 1.0304

#include "compress_gui.h"

void CompressGui::cb_compress_activar_i(Fl_Light_Button* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(116);
 o->value(rkr->Compressor_Bypass);
 return;
}
rkr->Compressor_Bypass=(int)o->value();
rkr->efx_Compressor->cleanup();
rgui->findpos(1,(int)o->value(),o);
}
void CompressGui::cb_compress_activar(Fl_Light_Button* o, void* v) {
  ((CompressGui*)(o->parent()))->cb_compress_activar_i(o,v);
}

void CompressGui::cb_compress_preset_i(Fl_Choice* o, void* v) {
  long long ud= (long long) v;
if((ud==0)||(ud==12001))rkr->efx_Compressor->setpreset(1,(int) o->value());
compress_threshold->value(rkr->efx_Compressor->getpar(1));
compress_Ratio->value(rkr->efx_Compressor->getpar(2));
compress_output->value(rkr->efx_Compressor->getpar(3));
compress_ATime->value(rkr->efx_Compressor->getpar(4));
compress_RTime->value(rkr->efx_Compressor->getpar(5));
Auto_Output->value(rkr->efx_Compressor->getpar(6));
compress_Knee->value(rkr->efx_Compressor->getpar(7));
Stereo->value(rkr->efx_Compressor->getpar(8));
Peak->value(rkr->efx_Compressor->getpar(9));
}
void CompressGui::cb_compress_preset(Fl_Choice* o, void* v) {
  ((CompressGui*)(o->parent()))->cb_compress_preset_i(o,v);
}

Fl_Menu_Item CompressGui::menu_compress_preset[] = {
 {"2:1", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {"4:1", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {"8:1", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 10, 0},
 {0,0,0,0,0,0,0,0,0}
};

void CompressGui::cb_compress_ATime_i(SliderW* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(142);
 return;
} 
rkr->efx_Compressor->changepar(4,(int)o->value());
}
void CompressGui::cb_compress_ATime(SliderW* o, void* v) {
  ((CompressGui*)(o->parent()))->cb_compress_ATime_i(o,v);
}

void CompressGui::cb_compress_RTime_i(SliderW* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(143);
 return;
} 
rkr->efx_Compressor->changepar(5, (int) o->value());
}
void CompressGui::cb_compress_RTime(SliderW* o, void* v) {
  ((CompressGui*)(o->parent()))->cb_compress_RTime_i(o,v);
}

void CompressGui::cb_compress_Ratio_i(SliderW* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(144);
 return;
} 
rkr->efx_Compressor->changepar(2, (int) o->value());
}
void CompressGui::cb_compress_Ratio(SliderW* o, void* v) {
  ((CompressGui*)(o->parent()))->cb_compress_Ratio_i(o,v);
}

void CompressGui::cb_compress_Knee_i(SliderW* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(145);
 return;
} 
rkr->efx_Compressor->changepar(7, (int) o->value());
}
void CompressGui::cb_compress_Knee(SliderW* o, void* v) {
  ((CompressGui*)(o->parent()))->cb_compress_Knee_i(o,v);
}

void CompressGui::cb_compress_threshold_i(SliderW* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(146);
 return;
} 
rkr->efx_Compressor->changepar(1, (int)o->value());
}
void CompressGui::cb_compress_threshold(SliderW* o, void* v) {
  ((CompressGui*)(o->parent()))->cb_compress_threshold_i(o,v);
}

void CompressGui::cb_compress_output_i(SliderW* o, void*) {
  if(Fl::event_button()==3)
{
 rgui->getMIDIControl(147);
 return;
} 
rkr->efx_Compressor->changepar(3,(int)o->value());
}
void CompressGui::cb_compress_output(SliderW* o, void* v) {
  ((CompressGui*)(o->parent()))->cb_compress_output_i(o,v);
}

void CompressGui::cb_Auto_Output_i(Fl_Check_Button* o, void*) {
  rkr->efx_Compressor->changepar(6,(int)o->value());
if ((int) o->value() == 0) compress_output->do_callback();
}
void CompressGui::cb_Auto_Output(Fl_Check_Button* o, void* v) {
  ((CompressGui*)(o->parent()))->cb_Auto_Output_i(o,v);
}

void CompressGui::cb_Stereo_i(Fl_Check_Button* o, void*) {
  rkr->efx_Compressor->changepar(8,(int)o->value());
if ((int) o->value() == 0) compress_output->do_callback();
}
void CompressGui::cb_Stereo(Fl_Check_Button* o, void* v) {
  ((CompressGui*)(o->parent()))->cb_Stereo_i(o,v);
}

void CompressGui::cb_Peak_i(Fl_Check_Button* o, void*) {
  rkr->efx_Compressor->changepar(9,(int)o->value());
if ((int) o->value() == 0) compress_output->do_callback();
}
void CompressGui::cb_Peak(Fl_Check_Button* o, void* v) {
  ((CompressGui*)(o->parent()))->cb_Peak_i(o,v);
}
CompressGui::CompressGui(int X, int Y, int W, int H, const char *L)
  : Fl_Group(0, 0, W, H, L) {
this->box(FL_UP_BOX);
this->color(FL_FOREGROUND_COLOR);
this->selection_color(FL_FOREGROUND_COLOR);
this->user_data((void*)(1));
this->align(Fl_Align(96|FL_ALIGN_INSIDE));
{ compress_activar = new Fl_Light_Button(5, 4, 34, 18, "On");
  compress_activar->shortcut(0x32);
  compress_activar->color((Fl_Color)62);
  compress_activar->selection_color((Fl_Color)1);
  compress_activar->labelsize(10);
  compress_activar->callback((Fl_Callback*)cb_compress_activar, (void*)(2));
  compress_activar->align(Fl_Align(68|FL_ALIGN_INSIDE));
  compress_activar->when(FL_WHEN_CHANGED);
} // Fl_Light_Button* compress_activar
{ compress_preset = new Fl_Choice(77, 4, 76, 18, "Preset");
  compress_preset->down_box(FL_BORDER_BOX);
  compress_preset->selection_color(FL_FOREGROUND_COLOR);
  compress_preset->labelsize(10);
  compress_preset->labelcolor(FL_BACKGROUND2_COLOR);
  compress_preset->textsize(10);
  compress_preset->textcolor(FL_BACKGROUND2_COLOR);
  compress_preset->callback((Fl_Callback*)cb_compress_preset, (void*)(12001));
  compress_preset->when(FL_WHEN_RELEASE_ALWAYS);
  compress_preset->menu(menu_compress_preset);
} // Fl_Choice* compress_preset
{ compress_ATime = new SliderW(51, 39, 100, 10, "A. Time");
  compress_ATime->type(5);
  compress_ATime->box(FL_FLAT_BOX);
  compress_ATime->color((Fl_Color)178);
  compress_ATime->selection_color((Fl_Color)62);
  compress_ATime->labeltype(FL_NORMAL_LABEL);
  compress_ATime->labelfont(0);
  compress_ATime->labelsize(10);
  compress_ATime->labelcolor(FL_BACKGROUND2_COLOR);
  compress_ATime->minimum(10);
  compress_ATime->maximum(250);
  compress_ATime->step(1);
  compress_ATime->value(2);
  compress_ATime->textcolor(FL_BACKGROUND2_COLOR);
  compress_ATime->callback((Fl_Callback*)cb_compress_ATime);
  compress_ATime->align(Fl_Align(FL_ALIGN_LEFT));
  compress_ATime->when(FL_WHEN_CHANGED);
} // SliderW* compress_ATime
{ compress_RTime = new SliderW(50, 59, 100, 10, "R. Time");
  compress_RTime->type(5);
  compress_RTime->box(FL_FLAT_BOX);
  compress_RTime->color((Fl_Color)178);
  compress_RTime->selection_color((Fl_Color)62);
  compress_RTime->labeltype(FL_NORMAL_LABEL);
  compress_RTime->labelfont(0);
  compress_RTime->labelsize(10);
  compress_RTime->labelcolor(FL_BACKGROUND2_COLOR);
  compress_RTime->minimum(10);
  compress_RTime->maximum(500);
  compress_RTime->step(1);
  compress_RTime->value(120);
  compress_RTime->textcolor(FL_BACKGROUND2_COLOR);
  compress_RTime->callback((Fl_Callback*)cb_compress_RTime);
  compress_RTime->align(Fl_Align(FL_ALIGN_LEFT));
  compress_RTime->when(FL_WHEN_CHANGED);
} // SliderW* compress_RTime
{ compress_Ratio = new SliderW(50, 79, 100, 10, "Ratio");
  compress_Ratio->type(5);
  compress_Ratio->box(FL_FLAT_BOX);
  compress_Ratio->color((Fl_Color)178);
  compress_Ratio->selection_color((Fl_Color)62);
  compress_Ratio->labeltype(FL_NORMAL_LABEL);
  compress_Ratio->labelfont(0);
  compress_Ratio->labelsize(10);
  compress_Ratio->labelcolor(FL_BACKGROUND2_COLOR);
  compress_Ratio->minimum(2);
  compress_Ratio->maximum(42);
  compress_Ratio->step(1);
  compress_Ratio->value(2);
  compress_Ratio->textcolor(FL_BACKGROUND2_COLOR);
  compress_Ratio->callback((Fl_Callback*)cb_compress_Ratio);
  compress_Ratio->align(Fl_Align(FL_ALIGN_LEFT));
  compress_Ratio->when(FL_WHEN_CHANGED);
} // SliderW* compress_Ratio
{ compress_Knee = new SliderW(49, 99, 100, 10, "Knee");
  compress_Knee->type(5);
  compress_Knee->box(FL_FLAT_BOX);
  compress_Knee->color((Fl_Color)178);
  compress_Knee->selection_color((Fl_Color)62);
  compress_Knee->labeltype(FL_NORMAL_LABEL);
  compress_Knee->labelfont(0);
  compress_Knee->labelsize(10);
  compress_Knee->labelcolor(FL_BACKGROUND2_COLOR);
  compress_Knee->maximum(100);
  compress_Knee->step(1);
  compress_Knee->value(3);
  compress_Knee->textcolor(FL_BACKGROUND2_COLOR);
  compress_Knee->callback((Fl_Callback*)cb_compress_Knee);
  compress_Knee->align(Fl_Align(FL_ALIGN_LEFT));
  compress_Knee->when(FL_WHEN_CHANGED);
} // SliderW* compress_Knee
{ compress_threshold = new SliderW(50, 119, 100, 10, "Thrhold");
  compress_threshold->type(5);
  compress_threshold->box(FL_FLAT_BOX);
  compress_threshold->color((Fl_Color)178);
  compress_threshold->selection_color((Fl_Color)62);
  compress_threshold->labeltype(FL_NORMAL_LABEL);
  compress_threshold->labelfont(0);
  compress_threshold->labelsize(10);
  compress_threshold->labelcolor(FL_BACKGROUND2_COLOR);
  compress_threshold->minimum(-60);
  compress_threshold->maximum(-3);
  compress_threshold->step(1);
  compress_threshold->value(-3);
  compress_threshold->textcolor(FL_BACKGROUND2_COLOR);
  compress_threshold->callback((Fl_Callback*)cb_compress_threshold);
  compress_threshold->align(Fl_Align(FL_ALIGN_LEFT));
  compress_threshold->when(FL_WHEN_CHANGED);
} // SliderW* compress_threshold
{ compress_output = new SliderW(50, 139, 100, 10, "Output");
  compress_output->type(5);
  compress_output->box(FL_FLAT_BOX);
  compress_output->color((Fl_Color)178);
  compress_output->selection_color((Fl_Color)62);
  compress_output->labeltype(FL_NORMAL_LABEL);
  compress_output->labelfont(0);
  compress_output->labelsize(10);
  compress_output->labelcolor(FL_BACKGROUND2_COLOR);
  compress_output->minimum(-40);
  compress_output->maximum(0);
  compress_output->step(1);
  compress_output->textcolor(FL_BACKGROUND2_COLOR);
  compress_output->callback((Fl_Callback*)cb_compress_output);
  compress_output->align(Fl_Align(FL_ALIGN_LEFT));
  compress_output->when(FL_WHEN_CHANGED);
} // SliderW* compress_output
{ Auto_Output = new Fl_Check_Button(19, 166, 15, 15, "Auto Output");
  Auto_Output->down_box(FL_BORDER_BOX);
  Auto_Output->labelsize(10);
  Auto_Output->labelcolor(FL_BACKGROUND2_COLOR);
  Auto_Output->callback((Fl_Callback*)cb_Auto_Output, (void*)(2));
} // Fl_Check_Button* Auto_Output
{ Stereo = new Fl_Check_Button(104, 166, 15, 15, "Stereo");
  Stereo->tooltip("Level detect Left and Right separately.  Unchecked compresses according to L/\
R average.");
  Stereo->down_box(FL_BORDER_BOX);
  Stereo->labelsize(10);
  Stereo->labelcolor(FL_BACKGROUND2_COLOR);
  Stereo->callback((Fl_Callback*)cb_Stereo, (void*)(2));
} // Fl_Check_Button* Stereo
{ Peak = new Fl_Check_Button(19, 153, 15, 15, "Peak");
  Peak->tooltip("Peak Mode Compression");
  Peak->down_box(FL_BORDER_BOX);
  Peak->labelsize(10);
  Peak->labelcolor(FL_BACKGROUND2_COLOR);
  Peak->callback((Fl_Callback*)cb_Peak, (void*)(2));
} // Fl_Check_Button* Peak
position(X, Y);
end();
}
