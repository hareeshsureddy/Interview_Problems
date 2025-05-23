#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number=0x7fff; //8 set bits
    int count=0;
    while(number){
        number&=(number-1);
        count++;
    }
    printf("Set bit count %d\n",count);
    {
    int count=0;
    #define mask 0b1101
    long long int num=0b1110000110111011010101101;
    while(num){
        if(!((num&0xF)^mask)) count++;
        num>>=1;
    }
        printf("match count %d\n",count);
    }
    return 0;
}
