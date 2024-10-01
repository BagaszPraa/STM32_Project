#ifndef PWM_CONTROL_H
#define PWM_CONTROL_H

#include "main.h"  // Include HAL headers and timer definitions

// Deklarasi fungsi untuk mengatur nilai PWM duty cycle dengan parameter timer dan channel
void SetPWMDutyCycle(TIM_HandleTypeDef *htim, uint32_t channel, uint16_t pulseWidth_us);

#endif // PWM_CONTROL_H
