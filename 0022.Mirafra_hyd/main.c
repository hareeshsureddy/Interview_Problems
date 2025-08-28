#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
/*
//cfile-1
extern int (*fnptr)(int ,int);

fnptr(4,5);

//Cfile-2
static int sum(int a,int b){
        return a+b;
}
int (*fnptr)(int ,int)=sum;
*/

    char *reversewORDS1(char* ptr, int i,int j){
            while(i<j){
            char temp=ptr[i];
            ptr[i]=ptr[j];
            ptr[j]=temp;
            i++;
            j--;
        }
}
    char *reversewORDS(char* ptr){
        int len=strlen(ptr);
        int i=0,j=len-1;
        while(i<j){
            char temp=ptr[i];
            ptr[i]=ptr[j];
            ptr[j]=temp;
            i++;
            j--;
        }
        {
        int i=0,j=0;
        while(j<len){
            if(j<len && ptr[j]==' '){
                reversewORDS1(ptr,i,j-1);
                i=j+1;
            }
            j++;
        }
        reversewORDS1(ptr,i,j-1);
        }
        return ptr;
}
int main()
{
    int *arr[10];       //Array of integer pointers
    int (*arr1)[10];     //Pointer to an 10 integer array

    char str[]="I am Hareesh Sureddy"; //"Sureddy Hareesh am Iam"
    reversewORDS(str);
    printf("%s\n",str);
    /*
    uint16_t num=0x1234; //2 4 6 with 9 11 13
    #define MASK 0x55       //10101 0x15
    #define MASK1 0xAA      //
    int temp1=num&MASK;      //0 2 4 6
    int temp2=(num>>8)&MASK1; // 9 11 13 15
    num|=(num>>2)|(MASK>>1);
    num=num|(temp2>>1);
    num&=MASK1>>2;
    num|=(temp1<<1);
    */

    /*
    char gflag[256];
    int bit=100;
    int index=bit/8;
    int bit1=bit%8;
    gflag[index]|=(1<<bit1);
    printf("Hello world!\n"); */

    uint16_t num=0x2A54; //2 4 6 with 9 11 13
/*
76543210
0X0X0X00 0x54
00X0X0X0 0x2A
*/
    #define MASK 0x2A
    int temp1=num&(MASK<<1);
    temp1<<=7;
    int temp2=num&(MASK<<8);
    temp2>>=7;
    num&=~(MASK<<1);
    num&=~(MASK<<8);
    num|=temp1;
    num|=temp2;
    printf("0x%X\n",num);
    return 0;
}
