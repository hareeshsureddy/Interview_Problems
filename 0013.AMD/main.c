#include <stdio.h>
#include <stdlib.h>

#define GPIOA 0x80000000
int main()
{
    //Toggel a LED wich is connected to GPIO 1 and 5
    uint32_t *ptr=(uint32_t*)GPIOA;
    while(1){
        *ptr^=(1<<5);
        delay(100);
        *ptr^=(1);
         delay(100);
    }
    printf("Hello world!\n");
    return 0;
}

#define SIZE 256

int buffer[SIZE];
int fill_index=0;
int read_index=0;

void fill(int data){
        if(read_index>=SIZE){
            read_index-=SIZE;
            fill_index-=SIZE;
        }
        if(fill_index-read_index>=SIZE){
            printf("Buffer is full");
            return;
        }
        buffer[fill_index&(SIZE-1)]=data; //255
        fill_index++;
}

int *read (){
        if(fill_index>read_index){
            return buffer[read_index++]
        }else{
        printf("Buffer is empty");
        }
}
