#include <stdio.h>
#include <stdlib.h>
 typedef struct {
    int num;
    char a;
 }Struct_data_t;
 void modifyStruct(Struct_data_t *ptr){
     ptr->num=44;
     ptr->a='S';
 }
int main()
{
    {//Function pointers and array of function pointers syntex
        char* (*reverse)(char *s);
        char* (*reverse[10])(char *s);
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
