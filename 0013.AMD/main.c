#include <stdio.h>
#include <stdlib.h>

#define GPIOA 0x80000000
/* F2F
C programming:-
1.Shift even and odd bits in a unsigned 32bit value.
2.Write a program to know the frequency of the elements present in an array. Input array[]={1,2,2,3,1}. write in a optimized way.  Followup:- Write dynimacally, don’t use extra space.
3.Write a function to check the 5th bit of an 32 bit data, and make sure that 10th is same as a 5th bit. And same way check the 15th bit of an 32 bit data, and make sure that 20th is same as a 15th bit
*/
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
