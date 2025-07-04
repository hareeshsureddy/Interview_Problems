#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdint.h>

#define MAX (3.3)
#define MAX1 (3.2)
#define MAX_BIT (255)
/*
voltage ranges -1.6 to 1.6
               -128 -1 to 0 127
               bit 8
               */
float adcTOdisatnce(int8_t voltageCount){
        const float stepSize=MAX1/MAX_BIT;
        float voltage=stepSize*voltageCount;
        float distance = (voltage*voltage) * 10;
        return distance;
}
int main()
{
    uint8_t voltage=200;
    printf("Distance is %0.2f\n",adcTOdisatnce(voltage));
    return 0;
}
/*
0x20
  7 6 5 4 3 2 1 0
|-|-|-| | | | | |
<NDIV[10:8]>
0x21
  7 6 5 4 3 2 1 0
|-|-|-|-|-|-|-|-|
<NDIV[7:0]>

NDIV[10:0]
*/
int reg_read(const struct device* dev, uint8_t regAddr, void* readBuff, uint8_t numBytes){
}
/*
uint8_t *ptr=(uint8_t*)0x20;
uint8_t *ptr1=(uint8_t*)0x21;
NDIV=((*ptr1)<<8)|(*ptr))
/*
An analog sensor outputs a voltage non-linearly mapped to distance:
distance = sqrt(voltage) * 10.
The sensor is connected to an 8-bit ADC with a 3.3V reference.
Write a function to calculate the distance from an 8-bit ADC reading  */
/* 3.3 = 255
255 --> 3.3
200 --> */


