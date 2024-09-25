// esc_control.h

#ifndef ESC_CONTROL_H
#define ESC_CONTROL_H

#include "stm32f4xx_hal.h"

// Inisialisasi PWM untuk ESC
void init_pwm(TIM_HandleTypeDef *htim, uint32_t channel);

// Mengatur throttle ESC
void set_throttle(TIM_HandleTypeDef *htim, uint32_t channel, uint16_t pulse_width);

#endif // ESC_CONTROL_H
