#include <stdio.h>
#include <stdlib.h>
/* //TR-1
#define bit 4;
int main()
{
    //Explain it
    const int const *ptr=NULL;
    //Change a nibbles
    uint16_t num=0x1234; //0x1432
    num=(((num&0xF)<<8)|((num&0x0F00)>>8)|(num&0xF0F0));
    //Set a bit
    num|=(1<<bit);
    printf("Hello world!\n");
    return 0;
}
//Linked list 1 2 3 4 .......................x
int search(struct Arr *head,int data){
    if(!head) return -1;
    int index=0;
    while(head){
        if(data==head->val) return index;
    else
        if(data<head->val)  return -1;
        head=head->next;
        index++;
    }
    return -1;
}

#define size 10;
int stack[size];
int index=0;
bool push(int data){
        if(index==size) return false;
        stack[index++]=data;
        return true;
}
int push(){
        if(index==0) return false;
        data =stack[index--];
        return data;
}  */
   //TR-2
int main()
{
    printf("Hellow, World!");
    return 0;
}
// Mearge a two sorted linked lists.
L1 1 3 5 7 8 9 x
L2 2 2 4 5 x
>
<
=
1 2 2
struct data* Mearge(struct data *l1 ,struct data *l2 ){
    struct data* Temp1=L1;
    struct data* Temp2=L2;
        while(Temp1 && Temp2){
            if(Temp1->val<=temp2->val){
                 l1->next=temp1;
                 temp1=Temp1->next;
                }
            else{
                l1->next=temp2;
                temp2=Temp2->next;
                }
              l1=l1->next;
            }
            if(Temp1)
            l1->next=temp1;
            else
            l1->next=temp2;
            return l1;
}




