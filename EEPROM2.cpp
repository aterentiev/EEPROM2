/*
  EEPROM2.cpp - EEPROM library
  Copyright (c) 2014 Alexandre Terentiev.  All right reserved.
  Based on the EEPROM library from David A. Mellis
*/

/******************************************************************************
 * Includes
 ******************************************************************************/

#include <avr/eeprom.h>
#include "Arduino.h"
#include "EEPROM2.h"

/******************************************************************************
 * Definitions
 ******************************************************************************/

/******************************************************************************
 * Constructors
 ******************************************************************************/

/******************************************************************************
 * User API
 ******************************************************************************/

uint8_t EEPROM2Class::read(int address)
{
	return eeprom_read_byte((unsigned char *) address);
}

void EEPROM2Class::read(int address, uint8_t *array, uint8_t count)
{
    for (uint8_t i = 0; i < count; i++) {
        array[i] = read(address + i);
    }
}

void EEPROM2Class::write(int address, uint8_t value)
{
	eeprom_write_byte((unsigned char *) address, value);
}

void EEPROM2Class::write(int address, uint8_t *array, uint8_t count)
{
    for (uint8_t i = 0; i < count; i++) {
        write(address + i, array[i]);
    }
}

EEPROM2Class EEPROM;
