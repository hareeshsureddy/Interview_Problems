#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    return 0;
}

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
