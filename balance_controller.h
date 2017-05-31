/*
 * EGG OpenSource EBike firmware
 *
 * Copyright (C) Casainho, 2015, 2106, 2017.
 *
 * Released under the GPL License, Version 3
 */

#ifndef _BALANCE_CONTROLLER_H_
#define _BALANCE_CONTROLLER_H_

#define KI_BALANCE_CONTROLLER	0.5
#define KD_BALANCE_CONTROLLER	50.0

extern float kp;
extern float ki;
extern float kd;

void balance_controller(void);

#endif
