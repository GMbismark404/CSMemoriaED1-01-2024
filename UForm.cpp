//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "UForm.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::CrearClick(TObject *Sender)
{
mem = new CSMemoria();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::PedirEspacioClick(TObject *Sender)
{
AnsiString text = Edit1->Text;
espacio_actual = mem->new_espacio(std::string(text.c_str()));
//mem->new_espacio(AnsiString(Edit1->Text).c_str());
}
//---------------------------------------------------------------------------
void __fastcall TForm1::LiberarEspacioClick(TObject *Sender)
{
//int dir = StrToInt(Edit2->Text);
mem->delete_espacio(StrToInt(Edit2->Text));
}
//---------------------------------------------------------------------------
void __fastcall TForm1::PonerDatoClick(TObject *Sender)
{
AnsiString text = Edit4->Text;
mem->poner_dato(StrToInt(Edit3->Text), std::string(text.c_str()), StrToInt(Edit5->Text));
//mem->poner_dato(StrToInt(Edit3->Text), AnsiString(Edit4->Text).c_str(), StrToInt(Edit5->Text));
}
//---------------------------------------------------------------------------

void __fastcall TForm1::MostrarClick(TObject *Sender)
{
mem->Mostrar(Form1->Canvas);
}
//---------------------------------------------------------------------------
