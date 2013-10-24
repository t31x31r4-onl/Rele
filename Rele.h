/*

 Controle de reles - 

 (C) Copyright 2013 teixeiraa@gmail.com

 */

#ifndef __RELE_H__
#define __RELE_H__

#include <Arduino.h>

#define MAX_RELE 8

class Rele
{
  public:
    Rele(byte *pins, int nReles);
    void Liga(int r);
    void Desliga(int r);
    int Estado(int r);

  private:
   int _NumReles;
   byte *_RelesPins;
   byte _EstadoReles[MAX_RELE];
};


#endif // __RELE_H__


