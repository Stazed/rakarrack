// generated by Fast Light User Interface Designer (fluid) version 1.0304

#include "midilearnwindow_gui.h"

void MidiLearnWindowGui::cb_Epar_i(Fl_Browser*, void*) {
  m_rgui->DisAssigns();
}
void MidiLearnWindowGui::cb_Epar(Fl_Browser* o, void* v) {
  ((MidiLearnWindowGui*)(o->parent()))->cb_Epar_i(o,v);
}

void MidiLearnWindowGui::cb_GMM_i(Fl_Button*, void*) {
  m_rkr->ControlGet=0;
m_rkr->CountWait=0;
m_rkr->RControl=1;
}
void MidiLearnWindowGui::cb_GMM(Fl_Button* o, void* v) {
  ((MidiLearnWindowGui*)(o->parent()))->cb_GMM_i(o,v);
}

void MidiLearnWindowGui::cb_CopyF_i(Fl_Button*, void*) {
  memcpy(m_rkr->XUserMIDI,m_rkr->Bank[TPresets->value()].XUserMIDI,sizeof(m_rkr->XUserMIDI));
  m_rgui->DisAssigns();
}
void MidiLearnWindowGui::cb_CopyF(Fl_Button* o, void* v) {
  ((MidiLearnWindowGui*)(o->parent()))->cb_CopyF_i(o,v);
}

void MidiLearnWindowGui::cb_CopyT_i(Fl_Button*, void*) {
  memcpy(m_rkr->Bank[TPresets->value()].XUserMIDI,m_rkr->XUserMIDI, sizeof(m_rkr->XUserMIDI));
}
void MidiLearnWindowGui::cb_CopyT(Fl_Button* o, void* v) {
  ((MidiLearnWindowGui*)(o->parent()))->cb_CopyT_i(o,v);
}

void MidiLearnWindowGui::cb_ClearA_i(Fl_Button*, void*) {
  int i, j,k;
int the_one;

if (m_rkr->ML_filter==0)
 the_one = m_rkr->efx_params[(int)Epar->value()-1].Ato;
 else
 the_one = m_rkr->ML_clist[(int)Epar->value()-1];


for(i=0; i<128; i++)
  {
    for(j=0;j<20;j++)
      {
         if (m_rkr->XUserMIDI[i][j] == the_one)
           {
             for(k=j+1;k<20;k++) m_rkr->XUserMIDI[i][k-1]=m_rkr->XUserMIDI[i][k];
             m_rkr->XUserMIDI[i][19]=0;             
           }
       
       }  
   }
   
    m_rgui->DisAssigns();
}
void MidiLearnWindowGui::cb_ClearA(Fl_Button* o, void* v) {
  ((MidiLearnWindowGui*)(o->parent()))->cb_ClearA_i(o,v);
}

void MidiLearnWindowGui::cb_ClearP_i(Fl_Button*, void*) {
  memset(m_rkr->XUserMIDI, 0, sizeof(m_rkr->XUserMIDI));
    m_rgui->DisAssigns();
}
void MidiLearnWindowGui::cb_ClearP(Fl_Button* o, void* v) {
  ((MidiLearnWindowGui*)(o->parent()))->cb_ClearP_i(o,v);
}

void MidiLearnWindowGui::cb_Assign_i(Fl_Button*, void*) {
  int i;

int the_one = 0;

if((int)Epar->value()-1 >= 0)
{
    if (m_rkr->ML_filter==0)
        the_one = m_rkr->efx_params[(int)Epar->value()-1].Ato;
    else
        the_one = m_rkr->ML_clist[(int)Epar->value()-1];
}

for(i=0;i<20;i++)

 {
    if(m_rkr->XUserMIDI[(int)Disp_Control->value()][i] == the_one) return;

    if(m_rkr->XUserMIDI[(int)Disp_Control->value()][i] ==0)
       {
         m_rkr->XUserMIDI[(int)Disp_Control->value()][i]=the_one;
         break;
        }
 }
 
 
    m_rgui->DisAssigns();
}
void MidiLearnWindowGui::cb_Assign(Fl_Button* o, void* v) {
  ((MidiLearnWindowGui*)(o->parent()))->cb_Assign_i(o,v);
}

void MidiLearnWindowGui::cb_AssignA_i(Fl_Button*, void*) {
  int i,j;
int the_one = 0;

if((int)Epar->value()-1 >= 0)
{
    if (m_rkr->ML_filter==0)
        the_one = m_rkr->efx_params[(int)Epar->value()-1].Ato;
    else
        the_one = m_rkr->ML_clist[(int)Epar->value()-1];
}

for(j=1;j<61;j++)

{
for(i=0;i<20;i++)

 {
    if(m_rkr->Bank[j].XUserMIDI[(int)Disp_Control->value()][i] == the_one) break;

    if(m_rkr->Bank[j].XUserMIDI[(int)Disp_Control->value()][i] ==0)
       {
         m_rkr->Bank[j].XUserMIDI[(int)Disp_Control->value()][i]=the_one;
         break;
        }
 }
 
} 

Assign->do_callback();
}
void MidiLearnWindowGui::cb_AssignA(Fl_Button* o, void* v) {
  ((MidiLearnWindowGui*)(o->parent()))->cb_AssignA_i(o,v);
}

void MidiLearnWindowGui::cb_CancelRec_i(Fl_Button*, void*) {
  m_rkr->RControl = 0;
GMM->color(fore_color);
GMM->redraw();
}
void MidiLearnWindowGui::cb_CancelRec(Fl_Button* o, void* v) {
  ((MidiLearnWindowGui*)(o->parent()))->cb_CancelRec_i(o,v);
}

void MidiLearnWindowGui::cb_Disp_Control_i(Fl_Value_Input* o, void*) {
  if(o->value()> 127) o->value(127);
if(o->value()< 1) o->value(1);
}
void MidiLearnWindowGui::cb_Disp_Control(Fl_Value_Input* o, void* v) {
  ((MidiLearnWindowGui*)(o->parent()))->cb_Disp_Control_i(o,v);
}

void MidiLearnWindowGui::cb_CopyTAll_i(Fl_Button*, void*) {
  int i;
for(i=1;i<61;i++) memcpy(m_rkr->Bank[i].XUserMIDI,m_rkr->XUserMIDI, sizeof(m_rkr->XUserMIDI));
}
void MidiLearnWindowGui::cb_CopyTAll(Fl_Button* o, void* v) {
  ((MidiLearnWindowGui*)(o->parent()))->cb_CopyTAll_i(o,v);
}

void MidiLearnWindowGui::cb_CloseML_i(Fl_Button*, void*) {
  do_callback();
}
void MidiLearnWindowGui::cb_CloseML(Fl_Button* o, void* v) {
  ((MidiLearnWindowGui*)(o->parent()))->cb_CloseML_i(o,v);
}

void MidiLearnWindowGui::cb_M_fil_all_i(Fl_Button*, void*) {
  m_rkr->ML_filter=0;
      m_rgui->FillML(0);
}
void MidiLearnWindowGui::cb_M_fil_all(Fl_Button* o, void* v) {
  ((MidiLearnWindowGui*)(o->parent()->parent()))->cb_M_fil_all_i(o,v);
}

void MidiLearnWindowGui::cb_M_fil_current_i(Fl_Button*, void*) {
  m_rkr->ML_filter=1;
      m_rgui->FillML(0);
}
void MidiLearnWindowGui::cb_M_fil_current(Fl_Button* o, void* v) {
  ((MidiLearnWindowGui*)(o->parent()->parent()))->cb_M_fil_current_i(o,v);
}
MidiLearnWindowGui::MidiLearnWindowGui(int X, int Y, int W, int H, const char *L)
  : Fl_Double_Window(X, Y, W, H, L) {
  _MidiLearnWindowGui();
}

MidiLearnWindowGui::MidiLearnWindowGui(int W, int H, const char *L)
  : Fl_Double_Window(0, 0, W, H, L) {
  clear_flag(16);
  _MidiLearnWindowGui();
}

MidiLearnWindowGui::MidiLearnWindowGui()
  : Fl_Double_Window(0, 0, 640, 480, 0) {
  clear_flag(16);
  _MidiLearnWindowGui();
}

void MidiLearnWindowGui::_MidiLearnWindowGui() {
this->box(FL_FLAT_BOX);
this->color((Fl_Color)22);
this->selection_color(FL_BACKGROUND2_COLOR);
this->labeltype(FL_NO_LABEL);
this->labelfont(0);
this->labelsize(14);
this->labelcolor(FL_FOREGROUND_COLOR);
this->align(Fl_Align(FL_ALIGN_TOP));
this->when(FL_WHEN_RELEASE);
{ Fondo4 = new Fl_Box(1, 1, 640, 480);
} // Fl_Box* Fondo4
{ Epar = new Fl_Browser(10, 58, 201, 348);
  Epar->type(2);
  Epar->textcolor(FL_BACKGROUND2_COLOR);
  Epar->callback((Fl_Callback*)cb_Epar, (void*)(99));
} // Fl_Browser* Epar
{ GMM = new Fl_Button(10, 445, 135, 30, "Get MIDI Message");
  GMM->callback((Fl_Callback*)cb_GMM, (void*)(77));
} // Fl_Button* GMM
{ TPresets = new Fl_Browser(430, 61, 201, 348);
  TPresets->type(2);
  TPresets->textcolor(FL_BACKGROUND2_COLOR);
  TPresets->when(3);
} // Fl_Browser* TPresets
{ CopyF = new Fl_Button(430, 20, 95, 30, "Copy from: ");
  CopyF->callback((Fl_Callback*)cb_CopyF, (void*)(77));
} // Fl_Button* CopyF
{ CopyT = new Fl_Button(535, 20, 95, 30, "Copy to: ");
  CopyT->callback((Fl_Callback*)cb_CopyT, (void*)(77));
} // Fl_Button* CopyT
{ Ares = new Fl_Group(215, 60, 205, 180);
  Ares->box(FL_THIN_DOWN_BOX);
  Ares->align(Fl_Align(FL_ALIGN_CLIP|FL_ALIGN_INSIDE));
  { Ar1 = new Fl_Box(220, 65, 45, 30);
    Ar1->box(FL_DOWN_BOX);
  } // Fl_Box* Ar1
  { Ar2 = new Fl_Box(270, 65, 45, 30);
    Ar2->box(FL_DOWN_BOX);
  } // Fl_Box* Ar2
  { Ar3 = new Fl_Box(320, 65, 45, 30);
    Ar3->box(FL_DOWN_BOX);
  } // Fl_Box* Ar3
  { Ar4 = new Fl_Box(370, 65, 45, 30);
    Ar4->box(FL_DOWN_BOX);
  } // Fl_Box* Ar4
  { Ar5 = new Fl_Box(220, 100, 45, 30);
    Ar5->box(FL_DOWN_BOX);
  } // Fl_Box* Ar5
  { Ar6 = new Fl_Box(270, 100, 45, 30);
    Ar6->box(FL_DOWN_BOX);
  } // Fl_Box* Ar6
  { Ar7 = new Fl_Box(320, 100, 45, 30);
    Ar7->box(FL_DOWN_BOX);
  } // Fl_Box* Ar7
  { Ar8 = new Fl_Box(370, 100, 45, 30);
    Ar8->box(FL_DOWN_BOX);
  } // Fl_Box* Ar8
  { Ar9 = new Fl_Box(220, 135, 45, 30);
    Ar9->box(FL_DOWN_BOX);
  } // Fl_Box* Ar9
  { Ar10 = new Fl_Box(270, 135, 45, 30);
    Ar10->box(FL_DOWN_BOX);
  } // Fl_Box* Ar10
  { Ar11 = new Fl_Box(320, 135, 45, 30);
    Ar11->box(FL_DOWN_BOX);
  } // Fl_Box* Ar11
  { Ar12 = new Fl_Box(370, 135, 45, 30);
    Ar12->box(FL_DOWN_BOX);
  } // Fl_Box* Ar12
  { Ar13 = new Fl_Box(220, 170, 45, 30);
    Ar13->box(FL_DOWN_BOX);
  } // Fl_Box* Ar13
  { Ar14 = new Fl_Box(270, 170, 45, 30);
    Ar14->box(FL_DOWN_BOX);
  } // Fl_Box* Ar14
  { Ar15 = new Fl_Box(320, 170, 45, 30);
    Ar15->box(FL_DOWN_BOX);
  } // Fl_Box* Ar15
  { Ar16 = new Fl_Box(370, 170, 45, 30);
    Ar16->box(FL_DOWN_BOX);
  } // Fl_Box* Ar16
  { Ar17 = new Fl_Box(220, 205, 45, 30);
    Ar17->box(FL_DOWN_BOX);
  } // Fl_Box* Ar17
  { Ar18 = new Fl_Box(270, 205, 45, 30);
    Ar18->box(FL_DOWN_BOX);
  } // Fl_Box* Ar18
  { Ar19 = new Fl_Box(320, 205, 45, 30);
    Ar19->box(FL_DOWN_BOX);
  } // Fl_Box* Ar19
  { Ar20 = new Fl_Box(370, 205, 45, 30);
    Ar20->box(FL_DOWN_BOX);
  } // Fl_Box* Ar20
  Ares->end();
} // Fl_Group* Ares
{ ClearA = new Fl_Button(245, 250, 150, 30, "Clear Assignements");
  ClearA->callback((Fl_Callback*)cb_ClearA, (void*)(77));
} // Fl_Button* ClearA
{ ClearP = new Fl_Button(245, 285, 150, 30, "Clear Preset");
  ClearP->callback((Fl_Callback*)cb_ClearP, (void*)(77));
} // Fl_Button* ClearP
{ Assign = new Fl_Button(112, 20, 98, 30, "Assign");
  Assign->callback((Fl_Callback*)cb_Assign, (void*)(77));
} // Fl_Button* Assign
{ AssignA = new Fl_Button(10, 20, 98, 30, "Assign to All");
  AssignA->callback((Fl_Callback*)cb_AssignA, (void*)(77));
} // Fl_Button* AssignA
{ CancelRec = new Fl_Button(200, 450, 60, 20, "Cancel");
  CancelRec->callback((Fl_Callback*)cb_CancelRec, (void*)(77));
} // Fl_Button* CancelRec
{ Disp_Control = new Fl_Value_Input(155, 445, 40, 30);
  Disp_Control->minimum(1);
  Disp_Control->maximum(127);
  Disp_Control->step(1);
  Disp_Control->value(1);
  Disp_Control->textcolor(FL_BACKGROUND2_COLOR);
  Disp_Control->callback((Fl_Callback*)cb_Disp_Control);
} // Fl_Value_Input* Disp_Control
{ CopyTAll = new Fl_Button(480, 412, 150, 30, "Copy to All");
  CopyTAll->callback((Fl_Callback*)cb_CopyTAll, (void*)(77));
} // Fl_Button* CopyTAll
{ CloseML = new Fl_Button(480, 445, 150, 30, "Close");
  CloseML->callback((Fl_Callback*)cb_CloseML, (void*)(77));
} // Fl_Button* CloseML
{ Filters_ML = new Fl_Group(10, 410, 200, 31);
  Filters_ML->box(FL_DOWN_BOX);
  { M_fil_all = new Fl_Button(16, 415, 89, 20, "All");
    M_fil_all->type(102);
    M_fil_all->callback((Fl_Callback*)cb_M_fil_all);
  } // Fl_Button* M_fil_all
  { M_fil_current = new Fl_Button(113, 415, 89, 20, "Current");
    M_fil_current->type(102);
    M_fil_current->callback((Fl_Callback*)cb_M_fil_current);
  } // Fl_Button* M_fil_current
  Filters_ML->end();
} // Fl_Group* Filters_ML
this->m_rkr = NULL;
this->m_rgui = NULL;
end();
resizable(this);
}

void MidiLearnWindowGui::initialize(RKR *_rkr,RKRGUI *_rgui ) {
  m_rkr = _rkr;
  m_rgui= _rgui;
}
