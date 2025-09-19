#include <stdio.h>
#include <stdlib.h>
typedef struct{
    int a;
    uint8_t b;
    float c;
    int *ptr;
    uint8_t *ptr1;
}myData;
0x0000 4000
myData var;

#define SETBIT(x,p) x|=(1<<(p-1))

int main()
{
    uint32_t *src=(uint32_t*)0x00004000;
    uint32_t *dst=(uint32_t*)0x00002000;
    for(int i=0;i<(size/4);i++){
        *dst++=*src++;
    }
    int var1;
    char data;
    myData *ptr=&var;
    ptr->a=10;
    ptr->b=20;
    ptr->c=40.25;
    ptr->ptr=&var1;
    ptr->ptr1=&data;
    printf("Hello world!\n");
    return 0;
}
