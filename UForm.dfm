object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Form1'
  ClientHeight = 781
  ClientWidth = 1018
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -12
  Font.Name = 'Segoe UI'
  Font.Style = []
  TextHeight = 15
  object Crear: TButton
    Left = 8
    Top = 32
    Width = 97
    Height = 25
    Cancel = True
    Caption = 'Crear'
    DisabledImageName = 'Crear'
    TabOrder = 0
    OnClick = CrearClick
  end
  object PedirEspacio: TButton
    Left = 8
    Top = 80
    Width = 97
    Height = 25
    Caption = 'Pedir Espacio'
    TabOrder = 1
    OnClick = PedirEspacioClick
  end
  object LiberarEspacio: TButton
    Left = 8
    Top = 128
    Width = 97
    Height = 25
    Caption = 'Liberar Espacio'
    TabOrder = 2
    OnClick = LiberarEspacioClick
  end
  object PonerDato: TButton
    Left = 8
    Top = 176
    Width = 97
    Height = 25
    Caption = 'Poner Dato'
    TabOrder = 3
    OnClick = PonerDatoClick
  end
  object Mostrar: TButton
    Left = 8
    Top = 224
    Width = 97
    Height = 25
    Caption = 'Mostrar'
    TabOrder = 4
    OnClick = MostrarClick
  end
  object Edit1: TEdit
    Left = 144
    Top = 81
    Width = 137
    Height = 23
    TabOrder = 5
  end
  object Edit2: TEdit
    Left = 144
    Top = 129
    Width = 137
    Height = 23
    TabOrder = 6
  end
  object Button6: TButton
    Left = 8
    Top = 272
    Width = 97
    Height = 25
    Caption = 'Button6'
    DisabledImageName = 'Button1'
    TabOrder = 7
  end
  object Edit3: TEdit
    Left = 144
    Top = 177
    Width = 41
    Height = 23
    TabOrder = 8
  end
  object Edit4: TEdit
    Left = 191
    Top = 177
    Width = 42
    Height = 23
    TabOrder = 9
  end
  object Edit5: TEdit
    Left = 239
    Top = 177
    Width = 42
    Height = 23
    TabOrder = 10
  end
end
