#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
/*
Implemnet a C programming array of function pointers task1 ,task2 and task3
and i want to excucute a task2  if the task 1 is successfully excucuted.
*/
//Code i write during the interview
/*
int index=-1;
void task1(){
    index=1;
    printf("Task 1 completed\n");
}
void task2(){
    index=2;
    printf("Task 2 completed\n");
}

void task3(){
    index=-2;
    printf("Task 3 completed\n");
}
void  (*array[3])()={task1,task2,task3};

int main()
{
    void *fun=NULL;
while(1){
    if(index==0)
     scanf("%d",&index);
     if(index==0){
    switch(index){
    case 0:
        fun=array[index];
        fun();
        break;
    case 1:
        fun=array[index];
        fun();
        break;
    case 2:
        fun=array[index];
        fun();
        return 0;
    default;
        }
    }
    }
}      */
//Code i write after the interview without refering anything
int task_index=-1;
bool validData=false,task_cmpleted=false;
void task1(){
    printf("task-1 completed\n");
    task_index=1;
}
void task2(){
    printf("task-2 completed\n");
    task_index=2;
}
void task3(){
    printf("task-3 completed\n");
    task_cmpleted=true;
    task_index=3;
    printf("Programming is runing in while(1)\n");
}
void (*funptr[3])(void)={task1,task2,task3};
int main(){
    while(1){
    if(!validData){
    printf("Enter a valid number to be execute a given tasks\n");
    scanf("%d",&task_index);
    if(task_index==0) validData=true;
    }
    if(validData && !task_cmpleted)
    funptr[task_index]();
    }
}
