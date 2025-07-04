#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
/* //TR-1

    int *ptr=NULL;
    ptr=(int*)0x80000000;
    *ptr=0x44;
    uint8_t *ptr1=NULL;
    ptr1=(uint8_t*)ptr;
    for(int i=0;i<8;i++){
        *ptr1++=i;
    }

bool push(int data){
    if(inex==10){
        return false;
    }
    stack[index++]=data;
    return true;
}
int pop(){
    if(inex==0){
        return NULL;
    }
   data=stack[index--];
    return data;
}

int index=0;
int stack[10];
#define Mask1 5
#define Mask2 7
int num=1255645;    // Output:- 1277647
int replace(int num){
    int result=0;
    int index=1;
    while(num){
        if(num%10==Mask1){
            result+=(Mask2*index);
        }
        else{
        result+=((num%10)*index);
        }
        num/=10;
        index*=10;
    }
    return result;
}

int main()
{
    int num=1255645;    //1277647
    printf(" After replace %d",replace(num));
    return 0;
} */
volatile int indexx=0;
#define SIZE 256
char stack[SIZE];

bool push(char data) {
	if(indexx==SIZE)
		return false;
	stack[indexx++]=data;
	return true;
}

char pop(){
	if(indexx==0)
		return '\0';
	char data=stack[--indexx];
	return data;
}

char* revers(char *str) {
	if(strlen(str)>256)
		return NULL;
	int i=0;
	 while(str[i]) {
		if(!push(str[i++])) return NULL;
        }
	i=0;
	printf("%d\n",indexx);
     while(indexx) {
		char data=pop();
		if(data!='\0')
        str[i++]=data;
        else
		return NULL;
	}
	str[i]='\0';
	return str;
}

int main()
{
	char *string="HareeshSureddy";
	printf("String before reverse %s\n",string);
    printf("String after reverse %s\n",revers(string));
	return 0;
}
