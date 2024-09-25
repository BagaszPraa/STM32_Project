// esc_control.c

#include "PWM_Motor.h"

// Inisialisasi PWM untuk ESC
void init_pwm(TIM_HandleTypeDef *htim, uint32_t channel) {
    HAL_TIM_PWM_Start(htim, channel);  // Memulai PWM pada channel yang sesuai
}

// Mengatur throttle ESC
void set_throttle(TIM_HandleTypeDef *htim, uint32_t channel, uint16_t pulse_width) {
    // pulse_width harus berada dalam rentang 1000 hingga 2000 (µs)
    __HAL_TIM_SET_COMPARE(htim, channel, pulse_width);
}
