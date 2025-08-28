#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stdint.h>
/* TR-1
int *ptr=NULL;
int var=10;
ptr=&var;
*ptr

int **ptr2;
  ptr2=ptr;

void function(int *ptr){
    ptr=(int*)malloc(sizeof(int));
}
int swapBitsofanum(int num,int i, int j){
    bool bit=(num>>(j-1))&1;
    bool bit1=(num>>(i-1))&1;
    if(bit)
        num|=(1<<(i-1));
    else
        num&=~(1<<(i-1));
    if(bit1)
        num|=(1<<(j-1));
    else
        num&=~(1<<(j-1));
        return num;
}
void swapRangeofBitsofNums(int num1,int num2, int r,int l){
        int temp=num1;
        printf("After swap 0x%X 0x%X ",num1,num2);
        for(int i=r-1;i<l;i++){
            if((num2>>i)&1)
                num1|=(1<<i);
                else
                num1&=~(1<<i);
        }
        for(int i=r-1;i<l;i++){
            if((temp>>i)&1)
                num2|=(1<<i);
                else
                num2&=~(1<<i);
        }
        printf("After swap 0x%X  0x%X \n",num1,num2);
}
void swapRangeofBitsofNumsMask(int num1,int num2, int r,int l){
    //method-1
    printf("After swap 0x%X 0x%X ",num1,num2);
    int mask=(((1<<(l-r+1))-1)<<(r-1));
    int temp=num1;
    num1&=~(mask);
    num1|=(mask&num2);
    num2&=~(mask);
    num2|=(mask&temp);
    printf("After swap 0x%X  0x%X \n",num1,num2);
    {
    //method-2
    printf("After swap 0x%X 0x%X ",num1,num2);
    int mask=((1<<l)-1)^((1<<(r-1))-1);
    int temp=num1;
    num1&=~(mask);
    num1|=(mask&num2);
    num2&=~(mask);
    num2|=(mask&temp);
    printf("After swap 0x%X  0x%X \n",num1,num2);
    }
}
int main()
{   // i/p:-101011  O/p:-111001
    int num=43,i=5,j=2;
    printf("before %d Afetr %d\n",num,swapBitsofanum(num,i,j));
    swapRangeofBitsofNums(0x56,0x99,3,7);
    swapRangeofBitsofNumsMask(0x56,0x99,3,7);
    //
    int *ptr=0x1010; 0x2020
    function(ptr);
    //
    int num=0x00000001;
    bool bit=num&1;
    bool bit1=(num>>31)&1;
    if(bit)
        num|=(1<<31);
    else
        num&=~(1<<31);
    if(bit1)
        num|=1;
    else
        num&=~(1);
    printf("0x%X",num);
    return 0;
}
 */
// TR-3

typedef struct {
    int a;
    int b;
}mydata;

mydata var1;
void modifymydata(mydata *ptr){
    uint32_t *ptr1=(uint32_t*)ptr;
        ptr->a=30;
        ptr->b=40;
        ptr->a=(ptr->a<<1); //a*2
        ptr->b=(ptr->b>>1); //b/2
        ptr1[0]=30;
        ptr1[1]=40;
}

int main()
{
    mydata var;
    var.a=10;
    var.b=20;
    printf("%d %d\n",var.a,var.b);
    modifymydata(&var);
    printf("%d %d\n",var.a,var.b);

    #define MASK 2
    int a=8; //1000
    a^=(1<<MASK);
    if(a&(1<<MASK)){
        printf("Its set\n");
    }else
    {
        printf("Its clear\n");
    }
    return 0;
}
