/*
  EEPROM2.h - Extended EEPROM library
  Copyright (c) 2014 Alexandre Terentiev.  All right reserved.
  Based on the EEPROM library from David A. Mellis
*/

#ifndef EEPROM2_h
#define EEPROM2_h

#include <inttypes.h>

class EEPROM2Class
{
  public:
    uint8_t read(int);
    void read(int, uint8_t *, uint8_t);
    void write(int, uint8_t);
    void write(int, uint8_t *, uint8_t);
};

extern EEPROM2Class EEPROM;

#endif

