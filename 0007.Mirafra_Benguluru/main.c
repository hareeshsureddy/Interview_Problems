#include <stdio.h>
#include <stdlib.h>
#include "stdint.h"
/* // TR-1
#define MASK 3      //Given input patterin
uint8_t pattern(uint32_t num){
    uint8_t cnt=0;
    while(num){
        if((num&MASK)==MASK)
            cnt++;
        num=num>>1;
    }
    return cnt;
}
int main()
{
    uint32_t num=0x30707030; //00110000 00000111 00000111 00110000
    printf("Count %d",pattern(num));
    return 0;
}   */
   // TR-2
/*
   Convert ox12345678 to ox78345612
   123 321
*/

int reverse(int num){
    int result=0;
    while(num){
        result*=10;
        result+=(num%10);
        num/=10;
    }
    return result;
}
int main()
{
    int num=0x12345678;
    printf("revers number %X",(((num&0xFF)<<24)|((num&0xFF000000)>>24)|(num&0x00FFFF00)));
    return 0;
}
suppose fun() 10 times then what value would be a
//Method-1:
void fun(){
	static int a = 1;
	a++;
}
//Method-2:
void fun(){
    int a = 1;
	a++;
}
