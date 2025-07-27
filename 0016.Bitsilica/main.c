#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <stdbool.h>

/* //TR-1
//Problem-1 reverse a given string based on the words
//Input:- "Hareesh Sureddy is a Firmware Engineer";
//Output:- "Engineer Firmware a is Sureddy Hareesh";
char *ReverseWord(char *s){
	int end=strlen(s);
	int start=end-1;
	char *res=(char*)malloc((end+1)*sizeof(char));
	int index=0;
	while(start>=0){
		while(start>=0 && s[start]!=' ') start--;
		int indexx=start+1;
		while(indexx<end){
		res[index++]=s[indexx++];
		}
		if(start>0)
		res[index++]=' ';
		end=start;
		start--;
	}
	res[index]='\0';
	return res;
}


//Problem-2 Reverse a bits in a given uint8_t bit value.
//i/p: 10101100=172
//o/p: 00110101=53

uint8_t reverseBits( uint8_t num){
	int index=0;
	while(index<4){
		bool a=((num>>index)&1);
		bool z=(num>>(7-index)&1);
		if(a){
		num|=(1<<(7-index));
		}else{
		num&=~(1<<(7-index));
		}
		if(z){
		num|=(1<<(index));
		}else{
		num&=~(1<<(index));
		}
		index++;
	}
	return num;
}

//Problem-3 (Print the nth node from the last)
//1->2->3->4->5->41->5->67->485->10 x

struct LinkList{
	int data;
	struct LinkList *next;
};

int printNthNode(struct LinkList *head, int n){
		struct LinkList *temp=head;
		while(n-->1)
		temp=temp->next;
		while(temp->next){
		temp=temp->next;
		head=head->next;
		}
		return head->data;
}
int main()
{
   char *string="Hareesh Sureddy is a Firmware Engineer";
   //char *string="BitSilica Embedded postion Role for 4";
   //char *string=(char*)malloc(40*sizeof(char));
   //scanf("%s",string);
   printf("%s\n",ReverseWord(string));
   uint8_t num=1;
   printf("%u",reverseBits(num));
    return 0;
}*/
   //TR-2
int main()
{
    #define SIZE 5
 0 1 2 3 4
int buffer[SIZE];
int fill_index=0;  5  0100
int read_index=0;  1

void write(int data){
	if( read_index>=SIZE)
	{
	read_index-=SIZE;
	fill_index-=SIZE;
	}
	if(fill_index-read_index>=SIZE){
		printf("Buffer is full");
		return;
	}
	buffer[fill_index&(SIZE-1)]=data;
	fill_index++;
}

int read(){
	if(fill_index>read_index){
	return buffer[read_index++];
	}else{
		printf("Buffer is empty");
		return -1;
	}
}
    printf("Hello, World!");
    return 0;
}
