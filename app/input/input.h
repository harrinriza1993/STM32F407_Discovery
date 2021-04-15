#include <stm32f4xx.h>
#include <stm32f4xx_hal_gpio.h>
#include <stm32f4xx_hal_def.h>
#include <stm32f4xx_hal_gpio_ex.h>
#include <stdint.h>

#ifndef INPUT_H
#define INPUT_H

void Input_init(GPIO_TypeDef* portNumber, uint16_t pinNuber);
GPIO_PinState ReadPin(GPIO_TypeDef* portNumber, uint16_t pinNumber);

#endif