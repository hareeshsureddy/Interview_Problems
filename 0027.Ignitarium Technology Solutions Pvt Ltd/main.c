#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* TR-1

Write a program with 2 variables, One should be local and the other a global variable
Initialise some values into them and then print both in the main function.
int G_var=10;	//Data
int main(){
	int L_var=20; //stack
	printf("G_var=%d L_var=%d",G_var,L_var);
	retrun 0;
}

int a;	4
char b;	1
float c;	4

int *a;	 4
char *b; 4
void *c; 4

int *a = 0x01;
char *b = 0x01;

a++; b++;
printf("%x %x", a, b); 5 2

What is the output of the following

int a = 257; 0x00 00 02 01
char b = a;
printf("%d", b); 1

what is the output of the following

int i = -1;
unsigned int j = 10;

if(i > j) {
	print ("Yay");
}
print ("boo");
*/
// TR-2
typedef struct {
    char Name[20];
    int RollNo;
    void (*fun)(void*);
}myStruct;

void myPrintf(void *ptr){
       myStruct *dataptr=(myStruct*)ptr;
       printf("Name %s\n",dataptr->Name);
       printf("RollNo %d\n",dataptr->RollNo);
}
int main()
{
    myStruct *ptr=(myStruct*)malloc(sizeof(myStruct));
    strcpy(ptr->Name,"hareesh");
    ptr->RollNo=49;
    ptr->fun=myPrintf;
    ptr->fun(ptr);
    free(ptr);
    return 0;
}
