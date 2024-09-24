#include "max6675.h"
#include "stm32f4xx_hal.h" // Menggunakan HAL library
#include "stdlib.h"
#include "stdio.h"

void max6675_init(MAX6675 *max6675, SPI_HandleTypeDef *hspi, GPIO_TypeDef *csPort, uint16_t csPin) {
    max6675->hspi = hspi;      // Simpan handle SPI
    max6675->csPort = csPort;  // Simpan GPIO port untuk CS
    max6675->csPin = csPin;    // Simpan pin CS

    // Inisialisasi CS pin sebagai output
    HAL_GPIO_WritePin(max6675->csPort, max6675->csPin, GPIO_PIN_SET); // Set CS high (nonaktif)
}

float ReadMAX6675_C(MAX6675 *max6675) {
    uint8_t data[2] = {0};     // Array untuk menyimpan data yang diterima
    uint16_t rawData;          // Data mentah dari MAX6675
    float temperature;

    // Pilih sensor dengan CS LOW
    HAL_GPIO_WritePin(max6675->csPort, max6675->csPin, GPIO_PIN_RESET);

    // Baca dua byte data dari MAX6675
    HAL_SPI_Receive(max6675->hspi, data, 2, HAL_MAX_DELAY);

    // Lepas sensor dengan CS HIGH
    HAL_GPIO_WritePin(max6675->csPort, max6675->csPin, GPIO_PIN_SET);

    // Gabungkan dua byte data
    rawData = (data[0] << 8) | data[1];

    // Periksa bit D2 untuk mendeteksi kesalahan thermocouple
    if (rawData & 0x4) {
        return NAN; // Indikasi tidak ada thermocouple terhubung
    }

    // Pindahkan data 3 bit ke kanan
    rawData >>= 5;

    // Konversi ke Celcius (0.25°C per LSB)
    temperature = rawData * 0.25;
    return rawData;
}
float ReadMAX6675_F(MAX6675 *max6675) {
    return (ReadMAX6675_C(max6675) * 9.0 / 5.0 + 32);
}
