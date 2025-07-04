#include <stdio.h>
#include <stdlib.h>

#define IF_EVEN(x) if ((x)%2==0) printf("even\n");\
                   else printf("odd\n");
int main()
{
    IF_EVEN(2)
    printf("Hello world!\n");
    return 0;
}

//Problem-1 what is the output and why expain
void fun(int *p)
{
 int q = 10; 0x200
 p = &q;
}
int main()
{
 int r = 20;
 int *p = &r; 0x100
 fun(p);
 printf("%d", *p);
 return 0;
}

//Problem-2 what is the output and why expain
int x = 10;
void func() {
   extern int x;
   x = 20;
   printf("%d ", x);
}
int main() {
   printf("%d ", x);
   func();
   printf("%d ", x);
   return 0;
}

//Problem-3 what is the output and why expain
int x = 10;
int *p = &x;
int **pp = &p;
(*p)++;
printf("%d\n", x);
printf("%d\n", **pp);

//Problem-4
const int a = 10;
const int *p = &a;
int const *ptr;
const int *ptr=NULL;

//Problem-5 expain below code
void func(const int *p) {
    int *q = (int *)p;
    *q = 42;
}

//Problem-6 what is the o/p & correct the below code
#define SQUARE(x) x*x
int a = 3;
int b = SQUARE(a+1)

//Problem-7 Is the below code is correct if not correct it.
#define IF_EVEN(x) if ((x)%2==0)\
                   printf(“even”);\
                   else printf(“odd”);
 //Answer
#define IF_EVEN(x) if ((x)%2==0)printf(“even”);\
                   else printf(“odd”);
//Problem-8 allocate a memory for integer pointers.
    int (*arr)[10]; //This is worng
    int *arr[10];
//Problem-9 allocate a memory for integer pointers dynamically.
    int **ptr=(int**)malloc(10*sizeof(int*));
//Problem-10 write a program to add a element to an array and delete an a element to an array.
int main()
{
    int indexx=3;
    int *a=(int*)malloc(3*sizeof(int));
    a[0]=1;
    a[1]=2;
    a[2]=3;
    addElement(&a,indexx++);
    a[3]=4;
    int node= 2
    if(deleteElement(a,indexx--,node))
        printf("Delete success");
    else
        printf("Delete failuer");
    return 0;
}

void addElement(int **ptr,int indexx){
    *ptr=(int*)relloc(ptr,(indexx+1)*sizeof(int));
}

bool deleteElement(int *a,int indexx,int node){
        if(node>indexx) return false;
        if(node==indexx) return true;
        for (int i=node;i<indexx;i++){
            a[i-1]=a[i];
        }
        return true;
}
//Problem-11 write a program to add node to a linked list and delete a node in the linked list.
// i did't ask the question about where the node need to add either front or back
// and what is the node i need to delete is the first node or last node or any specific node in a linked list
struct listNode {
        int Data;
        struct listNode *next;
};

struct listNode *addLL(struct listNode *head){
        struct listNode *temp=(struct listNode *)malloc(sizeof(struct listNode));
        temp->next=NULL;
        struct listNode *temp1=head;
        while(temp1->next){
            temp1=temp1->next;
        }
        temp1->next=temp;
        return head;
}
//Problem-12 wap to print count of how many times given function is called
void callCount(){
        static int count=0;
        count++;
        printf("callCount count %d",count);
}


