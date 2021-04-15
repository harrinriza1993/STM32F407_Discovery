#include "led.h"

/* Initialize the LED (GPIO as outpur)*/
void ledInit(GPIO_TypeDef* portNumber, uint16_t pinNuber)
{
  GPIO_InitTypeDef GPIO_InitStruct = {0};

  /* GPIO Ports Clock Enable */
  if(portNumber == GPIOA)
  {
    __HAL_RCC_GPIOA_CLK_ENABLE();
  }
  else if(portNumber == GPIOB)
  {
    __HAL_RCC_GPIOB_CLK_ENABLE();
  }
  else if(portNumber == GPIOC)
  {
    __HAL_RCC_GPIOC_CLK_ENABLE();
  }
  else if(portNumber == GPIOD)
  {
    __HAL_RCC_GPIOD_CLK_ENABLE();
  }
  else if(portNumber == GPIOE)
  {
    __HAL_RCC_GPIOE_CLK_ENABLE();
  }
    
  GPIO_InitStruct.Pin = pinNuber;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(portNumber, &GPIO_InitStruct);
}

/* On the led */
void ledOn(GPIO_TypeDef* portNumber, uint16_t pinNuber)
{
    HAL_GPIO_WritePin(portNumber, pinNuber, GPIO_PIN_SET);
}

/* Off the led */
void ledOff(GPIO_TypeDef* portNumber, uint16_t pinNuber)
{
    HAL_GPIO_WritePin(portNumber, pinNuber, GPIO_PIN_RESET);
}