#include <stdio.h>
#include <stdlib.h>

int factorial(int num){
		if(num==0) return 1;
		if(num==1) return 1;
		if(num%2!=0) num-1;
		return num*factorial(num-2);
}

void toggel(uint32_t *ptr, int pin){
			ptr^=(1<<pin);
}

180MHZ
60MHZ
PR  600
TC  1
MR0 1000

while(1){
		TC=0;
		toggel(ptr,3);
		while(TC<=MR);
		toggel(ptr,3);
		TC=0;
		while(TC<=MR);
}
int main()
{
    printf("Hello world!\n");
    return 0;
}
