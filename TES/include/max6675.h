#ifndef __MAX6675__h
#define __MAX6675__h

#include "stdint.h"
#include "stm32f4xx_hal.h"  // Perlu untuk HAL SPI dan GPIO

#define NAN -1000

// Struktur untuk menyimpan konfigurasi MAX6675
typedef struct {
    SPI_HandleTypeDef *hspi;  // Handle SPI
    GPIO_TypeDef *csPort;     // GPIO Port untuk pin CS
    uint16_t csPin;           // Pin CS
} MAX6675;

// Prototipe fungsi
void max6675_init(MAX6675 *max6675, SPI_HandleTypeDef *hspi, GPIO_TypeDef *csPort, uint16_t csPin);
float ReadMAX6675_C(MAX6675 *max6675);
float ReadMAX6675_F(MAX6675 *max6675);

#endif
