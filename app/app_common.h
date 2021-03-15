#ifndef __APP_COMMON_DEF_H__
#define __APP_COMMON_DEF_H__

#include "stm32f4xx_hal.h"
#include <stdint.h>
#include <stdio.h>

#define bool      uint8_t
#define true      1
#define false     0

extern volatile uint32_t    __uptime;

#endif //!__APP_COMMON_DEF_H__
