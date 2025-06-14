#include <stdio.h>
#include <stdlib.h>

/* Define a structure bit fields*/
typedef struct{
    int a:1
    int b:1
}reg;

/* reverse a number*/
int revers(int num){
    int result=0;
    while(num){
        result*=10;
        result+=num%10;
        num/=10;
    }
}
/* find a^b in T.C = O(log n) */
int multimap(int a,int b){
    int result=1;
    while(b){
        result*=a;
        b--;
    }
    return result;
}
/* check the given number is power of 2 are not*/
bool checkpow2( int a){
    if(!(a&(a-1))) return true;
    return false;
}
/* set a given bit postion set*/
int setbit( int num, int bit){
    num|=(1<<bit);
    return num;
}
/* Reverse a single likked list*/
struct node{
    int data;
    struct node *Link;
};

struct node* revers(struct node *head){
        struct node *prev=NULL;
        struct node *next=NULL;
        while(head){
            next=head->Link;
            head->Link=prev;
            prev=head;
            head=next;
        }
        head->link=prev;
        return head;
}

int main()
{
    int m=10,n=2;
    int num=123; //321
    printf("Hello world!\n");
    return 0;
}

/* TR-2*/
#define Size    256
int array[Size]={0};
uint16_t fill=0;
uint16_t read=0;
void fill( ){
    if( fill-read=Size){
        printf("Buff full");
    }else{
        array[fill&(Size-1)]=0xAA;
        fill++;
    }
}
 1 2 3 4 5
 5 0101
 4 0100

void read( ){
    if(read>=Size){
        read-=Size;
        fill-=Size;
    }
    if(fill>read){
        int data= array[read];
    read++;
    } else{
        printf("Buffer is empty;
    }
}


uint32_t 0xAA 1010 1010
              0101 0101

          0x7 0000 0111 1110 0000
/* Reverse a bits in a uint32_t variable each byte*/
uint32_t reversbits( int num){
    uint8_t offset=0;
    uint32_t result32=0;
    while(num){
    uint8_t byte=(num&0xFF);
    int index=7;
    uint8_t result=0;
    while(byte){
        bool bit=(byte&1)
        if(bit)
        result|=(1<<index);
        index--;
        byte>>=1;
    }
        result32|=(result<<offset)
        offset+=8;
        num>>=8;
    }
    return result32;
    00 00 01 00

    0000 0001
    1000 0000<<8
}





