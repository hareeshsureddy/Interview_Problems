#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stdint.h>
#include <string.h>
 typedef struct {
    int num;
    char a;
 }Struct_data_t;
 void modifyStruct(Struct_data_t *ptr){
     ptr->num=44;
     ptr->a='S';
 }
 int addition(int a,int b){return a+b;}
  int subtraction(int a,int b){return a-b;}
   int multiplication(int a,int b){return a*b;}
    int division(int a,int b){return a/b;}
int subStringCnt(char *mainStr, char *subStr){
        int mainLen=strlen(mainStr);
        int subLen=strlen(subStr);
        if(mainLen<subLen) return 0;
        int res=0;
        int i,j;
        for(  i=0;i<=mainLen-subLen;i++){
            for( j=0;j<subLen;j++){
                if(subStr[j]!=mainStr[j+i]) break;
            }
            if(j==subLen) res++;
        }
        return res;
}
int main()
{
    {//Write C program to count max consecutive 1 in given array.
        int arr[10]={1,0,0,1,1,0,0,1,1,1};
        int start=0,curr=0,max=0;
        while(start<10){
            while(start<10 && arr[start]==0) start++;
            curr=start+1;
            while(curr<10 && arr[curr]==1) curr++;
            max=(max<curr-start)?curr-start:max;
            start=curr;
        }
        printf("Max consecutive 1 in given array is %d\n",max);
    }
    {//Write a c program to print for given pattern
        for (int i=1;i<=3;i++){
            for(int j=1;j<=i;j++)
                printf("%d ", j);
            printf("\n");
        }
    }
    {//Find no. of substrings in main string
        char str[] = "abcdefabcdefabcabcdefdefabcdefabcdef";
        char sub[] = "abcdef";
        printf("Total %d substrings in main string\n",subStringCnt(str,sub));
    }
    {//Wap to nibble swap
        int num=0x12345678;
        #define swapNibbles(x)  (((x>>4)&0x0F0F0F0F)|((x<<4)&0xF0F0F0F0))
        printf("Aftre swaping nibbles 0x%X\n",swapNibbles(num));
    }
    {//Sizeof structure without using sizeof operator
        typedef struct{
        uint8_t a;
        uint16_t b;
        uint32_t c;
        }sData;

        sData numData;
        uint8_t *ptr=(uint8_t*)&numData;
        uint8_t *ptrr=(uint8_t*)(&numData+1);
        printf("Sizeof strucure sData is %lld\n",ptrr-ptr);

            union  {
                uint32_t Data_32;
                uint8_t Data_8[10];
            }Data1;     				//max size is 10
        uint8_t *ptr1=(uint8_t*)&Data1;
        uint8_t *ptr2=(uint8_t*)(&Data1+1);
        printf("sizeof(Data1) is %ld\n",ptr2-ptr1);  //sizeof(Data1) is 12 (due to padding for alignment)
    }
    {//Using function pointer implement something
        int (*funPtr[4])(int ,int)={addition,subtraction,multiplication,division};
        int indexx=-1;
        bool status=true;
        while(status)
        {
        while(indexx<1 || indexx>4){
        printf("Select the arthematic opeartion: 1.+ 2.- 3.* 4./\n");
        scanf("%d",&indexx);
        }
        int num1,num2;
        printf("Enter num1 & num2\n");
        scanf("%d %d",&num1,&num2);
        printf("Answer is %d\n",funPtr[indexx-1](num1,num2));
        printf("1.one more calculation 0. Exit\n");
        scanf("%d",&indexx);
        if(indexx==1)         indexx=-1;
        else
        status=false;
        }
    }
    {//Shift odd and Even bits in a given number
        #define swapbits(data)      data=(((data&0xAAAAAAAA)>>1)|((data&0x55555555)<<1))
        int num=0xAA;
        printf("0x%X\n",swapbits(num));
    }
    {//wam to swap a byte
        #define swapByte(data)      data=((data&0xFF)<<8)|((data>>8)&0xFF)
        int num=0xAA55;
        printf("0x%X\n",swapByte(num));
    }
    {//Function pointers and array of function pointers syntex
        char* (*reverse)(char *s);
        char* (*reverse1[10])(char *s);
    }
    {//Wap for endian swap
        int num=0x82345678;
        printf("Before endian convertion 0x%X\n",num);
         int result =((num>>24)&0xFF)|\
                    ((num&0xFF0000)>>8)|\
                    ((num&0x00FF00)<<8)|\
                    ((num&0xFF)<<24);
 /*       int result= ((num>>24&0xFF));
         result|=   ((num&0xFF0000)>>8);
         result|=   ((num&0x00FF00)<<8);
         result|=   ((num&0xFF)<<24);  */
        printf("After endian convertion 0x%X\n",result);
    }
    {//Wap to change structure variables pass to a function and it should change structure variables
        Struct_data_t var;
        var.a='H';
        var.num=48;
        modifyStruct(&var);
        printf("Modified values %d %c\n",var.num, var.a);
    }
   {//Find second largest element in array in optimized way
    //int a[5]={-2,-3,-5,-33,-11};
     int a[5]={4,4,-8,-2,-5};
    //int a[5]={4,4,4,4,4};
    // int a[5]={-4,-4,-8,-2,-1};
    int max=a[0],sec_max=a[0];
    for(int i=0;i<5;i++)
    {
    if(max<a[i])
    {
        sec_max=max;
        max=a[i];
    }
    else if(sec_max==max)
    {
        sec_max=a[i];
    }
    else if(sec_max<a[i]&&a[i]<max){
                sec_max=a[i];
    }
    }
    if(sec_max==max)
    printf("there is no second max number all elements are same:%d\n",max);
    else
    printf("Second largest number in a Array is %d\n",sec_max);
    }
    {//Find second largest element in array in optimized way
        #define POWER2(n) (1<<n)
        #define INT_MAXX(n) (POWER2(n)-1)
        #define INT_MINN(n) (-POWER2(n))
        #define SIZE 10
       // int nums[SIZE]={4,4,-8,-2,-5,-22,-454,-22,-5,-54};
        int nums[SIZE]={4,4,4,4,4,4,4,4,4,4};
       // int nums[SIZE]={-4,-4,-8,-2,-5,-22,-454,-22,-5,-54};
        int max1=INT_MINN(31),max2=INT_MINN(31);
        for (int i=0;i<SIZE;i++){
            if(nums[i]>max1){
                max2=max1;
                max1=nums[i];
            }else{
            if(nums[i]<max1 && nums[i]>max2) max2=nums[i];
            }
        }
        if(max1==max2)
        printf("There is no Second largest number in a Array\n");
            else
        printf("Second largest number in a Array is %d\n", max2);
    }
    {
    int number=0x7fff; //8 set bits
    int count=0;
    while(number){
        number&=(number-1);
        count++;
    }
    printf("Set bit count %d\n",count);
    }
    {//match pattern
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
