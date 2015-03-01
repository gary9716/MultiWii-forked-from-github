#ifndef OPTICALFLOW_H
#define OPTICALFLOW_H

#include "Arduino.h"
#include "config.h"

#ifdef OPTFLOW

extern int8_t optflowMode;
extern int16_t optflow_angle[2];

void Optflow_update();
void initOptflow();

#endif

#endif