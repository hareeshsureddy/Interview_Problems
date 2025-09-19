#include <stdio.h>
#include <stdlib.h>

void FelxCom0_IRQ(){
    if(Rx==IT){
            while(FIFO&&FF){
                Buffre[index++]=FIFO;
                FIFO>>=8;
            }
    }else
    if(TX==IR){
        FIFO=Buffre[index++]
    }
}

int main()
{
    int *ptr;
    char a; 0x12345678
    char *ptr=&a;
    int a=32, char b=12;
    const int *ptr1;
    int *const ptr2;
    const int *const ptr3;
    int a=12,b=21;
    a=a^b;
    b=a^b;
    a=a^b;
    printf("%d %d",a,b);
    return 0;
}
