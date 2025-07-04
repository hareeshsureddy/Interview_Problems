#include <stdio.h>
#include <stdlib.h>

int main()
{
//0. Out put of the below code
    int i =1;
    switch(i)
    {
        case 0:
             printf("value = 0\n");
        break;
        case 1:
              while(i == 1)
              {
                  printf("value = 1\n");
                  break;
              }
              printf("value = 2\n");
        default:
                break;
    }
//0. Output of the below code
{
    union var
    {
        int a;
		char b;
		0x01 00 00 00
    };
    union var v;
		v.a=10; //20 & 10
		v.b=20; //10 & 257
    printf("%d\n", v.a);
}
//0. Output of the below code
{
        enum days {MON=-1, TUE, WED=6, THU, FRI, SAT};
		printf("%d, %d, %d, %d, %d, %d\n", MON, TUE, WED, THU, FRI, SAT);
		        -1   0   6  7    8    9
}
//0. Explain below terms
1.const int a;
2.int const a;
3.const int *a;
4.int * const a;
5.int const * const a;

1. int *ptr();
2. int (*ptr)();

//0. Output of the below code
{
   unsigned int test[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
   unsigned char *ptr;
 // test 0x01 00 00 00 02 00 00 00 03 00
   ptr = (unsigned char *)test;
   for (int i = 0; i < 10 ; i++)
   {
          printf("%d\n\r", *ptr++);
   }
}
//0. Output of the below code, what are the chance of not printing a garbage value
{
    int* func1()
	{
		int b = 10;
		return (&b);
	}

	void main()
	{
		int *a;

		a = func1();
		printf(" %d" , *a);
	}
}
//
{
How to measure the size of any variable without “sizeof” operator?

int 	a=0x11223344;
uint8_t b=0x55;
int *ptr1=&a;
int *ptr=&a;
	ptr++;
	printf("%d",ptr-ptr1)


0. Using only a Four-minute hourglass and a seven-minute hourglass/sandglass,
How will you measure exactly nine minutes?

Restriction:- Without the process taking longer than nine minutes.
}
//1. Write a code to check its a Little or Big Indian
    int x = 0x2C 00 01 2C;
    uint8_t *ptr=(uint8_t*)x;
    ptr++;
    if(*ptr==0x01)
       printf("Little indian!\n");
       else
       printf("Big indian\n");
    return 0;
//2. Write a program to swap the even and odd nibbles of a 32-bit integer using bitwise operations.
int num = 0xABABABAB;
int result=0;
int i=0;
   while(num){
    int byte=num&0xFF;
    byte=((byte>>4)&0xF)|((byte&0xF)<<4);
    result=byte
   }
   //shifted bytes insted of nibbles
    int lowWord=0;
    int result=0;
    int highWord=0;
    lowWord=(num&0xFFFF);
    highWord= ((num>>16)&0xFFFF);
    highWord=(highWord<<8)|(((highWord)>>8)&0xFF);
       result=(lowWord<<8)|((lowWord)>>8)&0xFF;
       result=(result|(highWord<<16));
    printf("%x",result);

    // actual answer done by my self after interview
    int num=0xABABABAB;
    int result=0,i=0;
    while(i<31){
        int byte=num&0xFF;
        byte=(((byte>>4)&0xF)|((byte&0xF)<<4));
        result|=(byte<<i);
        i=i+8;
        num=(num>>8);
        printf("%X  ",num);
      //  FFABABAB  FFFFABAB  FFFFFFAB  FFFFFFFF
    }
    printf("\n%X",result);
    //BABABABA
        return 0;
/*3. Array has N/2 elements filled . Duplicate each element in array without using additional storage.
Size of array = N
Input = 1,2,3,4
Output= 1,1,2,2,3,3,4,4
*/
 int arr[8]={1,2,3,4,0,0,0,0};
      //     1,1,2,2,3,3,4,4
 int n=8;
 int j=n-1;
  for(int i=3;i>=0;){
    arr[j--]=arr[i];
    arr[j--]=arr[i];
    i--;
 }
 for(int i=0;i<n/2;i++){
    arr[j++]=arr[i];
 }
  j=n/2;
 for(int i=0;i<n;){
    arr[i++]=arr[j];
    arr[i++]=arr[j];
    j++;
 } */
 for( int i=0;i<n;i++){
    printf("%d ",arr[i]);
 }
return 0;

}
