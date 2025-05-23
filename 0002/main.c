#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *link;
};
struct node* addNodeatTheEnd(struct node *ptr,int value){
    //finding end node to add node at the end
    while(ptr->link){
        ptr=ptr->link;
    }
    struct node *temp=(struct node *)malloc(sizeof(struct node));
    temp->data=value;
    temp->link=NULL;
    ptr->link=temp;
    return temp;
}
struct node* reverseLinkedlist(struct node *head){
    struct node* prev=NULL;
    struct node* next=NULL;
    while(head){
        next=head->link;
        head->link=prev;
        prev=head;
        head=next;
    }
    head=prev;
    return head;
}
int main()
{
    //Create a node
    struct node *head=(struct node *)malloc(sizeof(struct node));
    head->data=1;
    head->link=NULL;
    //adding 4 nodes to the single linked list
    struct node *temp=addNodeatTheEnd(head,2);
    temp=addNodeatTheEnd(temp,3);
    temp=addNodeatTheEnd(temp,4);
    head=reverseLinkedlist(head);
    temp=head;
    while(temp){
        printf("%d ",temp->data);
        temp=temp->link;
    }
    return 0;
}
