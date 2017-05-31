/*
 * EGG OpenSource EBike firmware
 *
 * Copyright (C) Casainho, 2015, 2106, 2017.
 *
 * Released under the GPL License, Version 3
 */

#ifndef _FILTER_H_
#define _FILTER_H_

#define EMA_ALPHA 1

unsigned int ema_filter_uint32 (int *current_value, int *exponential_moving_average, int *ema_alpha);
float ema_filter_float (float *current_value, float *exponential_moving_average, float *ema_alpha);

#endif
