//---------------------------------------------------------------------------

#ifndef UFormH
#define UFormH
#include "UCSMemoria.h"
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TButton *Crear;
	TButton *PedirEspacio;
	TButton *LiberarEspacio;
	TButton *PonerDato;
	TButton *Mostrar;
	TEdit *Edit1;
	TEdit *Edit2;
	TButton *Button6;
	TEdit *Edit3;
	TEdit *Edit4;
	TEdit *Edit5;
	void __fastcall CrearClick(TObject *Sender);
	void __fastcall PedirEspacioClick(TObject *Sender);
	void __fastcall LiberarEspacioClick(TObject *Sender);
	void __fastcall PonerDatoClick(TObject *Sender);
	void __fastcall MostrarClick(TObject *Sender);
private:	// User declarations
	CSMemoria *mem;
    int espacio_actual;
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
