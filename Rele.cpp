/*

 Controle de reles - 

 (C) Copyright 2013 teixeiraa@gmail.com

 */

/*
Ref.: http://robomaniablog.blogspot.com.br/2012/11/arduino-tutorial-6-escrever-uma.html
 */

#include "Arduino.h"
#include "rele.h"


/*
byte RelesPins[4] = {3, 2, 1, 0};

Rele customReles = Rele(RelesPins, 4); 
 */

Rele::Rele(byte *pins, int nReles)
{
	_RelesPins = pins;
  _NumReles = min(MAX_RELE, nReles);
    
	for (byte r=0; r<_NumReles; r++)
  {
    pinMode(_RelesPins[r], OUTPUT); //pin selected to control
    digitalWrite(_RelesPins[r], HIGH);    // set pin  HIGH
  }
  
	for (byte r=0; r<_NumReles; r++)
    Desliga(_RelesPins[r]);
}

int Rele::Estado(int r)
{
  if (r >= 0 && r < _NumReles)
  {
    return _EstadoReles[r];
  }
  return 0;
}

void Rele::Liga(int r)
{
  if (r >= 0 && r < _NumReles)
  {
    digitalWrite(_RelesPins[r], LOW);    // set pin  high
    _EstadoReles[r] = 1;
  }
}

void Rele::Desliga(int r)
{
  if (r >= 0 && r < _NumReles)
  {
    digitalWrite(_RelesPins[r], HIGH);    // set pin  low
    _EstadoReles[r] = 0;
  }
}

