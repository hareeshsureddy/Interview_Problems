#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    return 0;
}

//TR-1

int main(){
	int *ptr=malloc(sizeof(*ptr)*10);
	//using ptr
	free(ptr);
}

1 2 3 3 4 4 5 5
0001
0010
0011
0100
0101

Txor=3 =001 1

if(0th bitt set)
x1^=1 3  3 5 5

x2^=2 4  4


typedef struct{
    int data;
    struct L_List *node;
}L_List;

int main(){
    struct L_List *head,*temp;
    int size=4;
    head=(struct L_List*)malloc(sizeof(struct L_List));
    temp=head;
    for(int i=0;i<size-1;i++){
        temp->data=i+1;
        temp->next=(struct L_List*)malloc(sizeof(struct L_List));
        temp=temp->next;
    }
    temp->data=Size;
    temp->next=NULL;

}
deleteNode()
1->2->3->4->X  //3

1->2->3->4->X
      temp=3
      temp2=temp->next =4
      temp->data
      temp->next->data;
      temp2=temp->next->next;
      free(temp->next);
      temp->next=temp2;



