#include "pwm_control.h"

// Fungsi untuk mengatur nilai duty cycle PWM (dalam mikrodetik)
// Param: htim -> Timer handle, channel -> Timer channel, pulseWidth_us -> Lebar pulsa dalam mikrodetik
void SetPWMDutyCycle(TIM_HandleTypeDef *htim, uint32_t channel, uint16_t pulseWidth_us)
{
    // Cek apakah nilai pulseWidth_us berada di antara 100 dan 200 µs
    if (pulseWidth_us >= 100 && pulseWidth_us <= 200)
    {
        // Set nilai compare value dari timer (PWM) jika valid
        __HAL_TIM_SET_COMPARE(htim, channel, pulseWidth_us);
    }
    else
    {
        // Abaikan nilai jika berada di luar rentang 100 - 200 µs
        // Anda bisa tambahkan log error atau debugging di sini jika perlu
    }
}
