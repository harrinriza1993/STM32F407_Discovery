#include "input.h"

void Input_init(GPIO_TypeDef* portNumber, uint16_t pinNumber)
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

  /*Configure GPIO pin : PC1 */
  GPIO_InitStruct.Pin = pinNumber;
  GPIO_InitStruct.Mode = GPIO_MODE_INPUT;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  HAL_GPIO_Init(portNumber, &GPIO_InitStruct);

}

GPIO_PinState ReadPin(GPIO_TypeDef* portNumber, uint16_t pinNumber)
{
  return  HAL_GPIO_ReadPin(portNumber, pinNumber);
}