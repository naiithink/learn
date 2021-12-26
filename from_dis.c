#define LIS3DSH_REG_OUT_X_L 0x28
// Example struct
typedef struct LIS3DSH {
    SPI_HandleTypeDef *spiHandle;
    uint16_t CSPin;
    GPIO_TypeDef *CSPort;
    LIS3DSH_Init_t init;
} LIS3DSH_t;

// Example function
uint8_t LIS3DSH_Read_Reg(LIS3DSH_t *sensor, uint8_t addr) {
    uint8_t rx;

    addr |= _LIS3DSH_MASK_READ;

    HAL_GPIO_WritePin(sensor->CSPort, sensor->CSPin, GPIO_PIN_RESET);
    HAL_SPI_Transmit(sensor->spiHandle, &addr, 1, 50);
    HAL_SPI_Receive(sensor->spiHandle, &rx, 1, 50);
    HAL_GPIO_WritePin(sensor->CSPort, sensor->CSPin, GPIO_PIN_SET);

    return rx;
}

int main(void) {
    LIS3DSH_t mySensor;
    // Fill the struct with appropriate data
    uint8_t x = LIS3DSH(&mySensor, LIS3DSH_REG_OUT_X_L) ;
    return 0;
}