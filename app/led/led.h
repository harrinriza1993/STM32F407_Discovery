#include <stm32f4xx.h>
#include <stm32f4xx_hal_gpio.h>
#include <stm32f4xx_hal_def.h>
#include <stm32f4xx_hal_gpio_ex.h>
#include <stdint.h>

#ifndef LED_H
#define LED_H

void ledInit(GPIO_TypeDef* portNumber, uint16_t pinNuber);
void ledOn(GPIO_TypeDef* portNumber, uint16_t pinNuber);
void ledOff(GPIO_TypeDef* portNumber, uint16_t pinNuber);

#endif