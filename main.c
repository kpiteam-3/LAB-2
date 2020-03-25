#include "stm32f10x.h"
#define POW_SLOW      1000000 
#define POW_FAST        100000
// It is for B0 output blink 

void delay_(int i);

int main(void){ 
      // I. Enable PORTB Clock    
      RCC -> APB2ENR |= RCC_APB2ENR_IOPBEN;
      // II. Enable  all low port B for output push-pool Mode
      GPIOB -> CRL &= 0; 
      GPIOB -> CRL |= GPIO_CRL_MODE; 
  
        for(;;){
               delay_(POW_SLOW); 
                GPIOB -> ODR |= GPIO_ODR_ODR0;// pin B0 on
              delay_(POW_SLOW);// this plase control
                GPIOB -> ODR &= ~(GPIO_ODR_ODR0);// pin B0 off
              }
    }

void delay_(int del){
  int i = 0;
    for(i=0;i<del;i++){
      ;
      }
}