/*
 * battery.h
 *
 *      Author: Baram
 */

#ifndef _BATTERY_H_
#define _BATTERY_H_

#include <Arduino.h>
#include "../def.h"


class Battery
{
  public:
    Battery();
    ~Battery();
    
    bool begin(void);
    float getVoltage(void);

  private:

};


#endif