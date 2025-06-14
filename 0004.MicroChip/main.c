#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    return 0;
}
//len 5 ones=2
int* sort(int *arr, int len){
    int cnt=0;
    for (int i=0;i<len;i++){
        if(arr[i])
            cnt++;
    }
    for (int i=0;i<len;i++){
        if(i>=len-cnt)
        arr[i]=1;
        else
        arr[i]=0;
    }
    return arr;
}

int* sort(int *arr, int len){
    int cnt=0;
    for (int i=0;i<len;i++){
        if(arr[i])
            cnt++;
        arr[i]=0;
    }
    for (int i=len-cnt;i<len;i++){
        arr[i]=1;
    }
    return arr;
}
{0 , 0 , 1 , 0 , 1, 0} - input

output - { 0 , 0 , 0 , 0 , 1 , 1}

//len 5 ones=2
int* sort(int *arr, int len){
    int cnt=0;
    int i=0,j=len-1;
    while(i<j){
        if(!arr[i]) i++;
        if(arr[j]) j--;
        if( i<len && j>=0 && arr[i] && !arr[j]){
            arr[i]=0;
            arr[j]=1;
        }
    }
    return arr;
}
