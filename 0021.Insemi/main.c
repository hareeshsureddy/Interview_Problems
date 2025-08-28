#include <stdio.h>
#include <stdlib.h>

void manipulater(int *num, int l, int r){ //3 0
        int mask=((1<<(l-r+1)-1)<<r); //0001 0000 //0000 1111
        *num^=mask;
}
int stack[5];
int index=0;


typedef struct Node{
    int data;
    struct Node* next;
}List_node;

List_node* addNode(List_node*  head, int data){

    if(!head){
        head=(List_node*)malloc(sizeof(List_node));
        head->data=data;
        head->next=NULL;
    }else{
         List_node* temp=head;
        while(temp->next){
            temp=temp->next;
        }
     List_node* temp1=(List_node*)malloc(sizeof(List_node));
     temp1->data=data;
     temp1->next=NULL;
     temp->next=temp1;
    }
    return head;
}

bool push(int data){
    if(index==5){
        return false;
    }
    stack[index++]=data;
    return true;
}

bool pop(int *data){
    if(index==0){
        return false;
    }
    *data=stack[index--];
    return true;
}

int main()
{
    printf("Hello world!\n");
    return 0;
}
