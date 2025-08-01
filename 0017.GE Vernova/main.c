#include <stdio.h>
#include <stdlib.h>
/* //TR-1
int main()
{
    bool isPowerOf2(int num){
		if(!(num&(num-1))) return true;
		else
		return false;
}

0x2000 0000
uint32_t *ptr=(uint32_t*)0x2000 0000
*ptr|=(1<<7);

struct ListNode{
  int data;
  struct ListNode* next;
};

struct ListNode* head=(struct ListNode*)malloc(sizeof(struct ListNode)*1);
	AA 55 1
	0  1  2

	0x2000 0000 512 RW

	0x2000 0000

	Sart Slave address R/W Ack data
	M1 0 000 0110
	M2 0 000 0010

	server      client
				SYN
	SYN+ACK
				Ack
    printf("Hello world!\n");
    return 0;
} */
/* //TR-1
void bubbleSort(int *ptr,int size){
    for(int i=0;i<size-1;i++){
        for(int j=0;j<size-i-i;j++){
            if(ptr[j]>ptr[j+1]){
                int temp=ptr[j+1];
                ptr[j+1]=ptr[j];
                ptr[j]=temp;
            }
        }
    }
}

void stringRev(char *ptr){
    int cnt=0;
    int k=0;
while(ptr[k++]){
    cnt++;
}
//printf("%d",cnt);
    int i=0,j=cnt-1;
    while(i<j){
        char temp=ptr[i];
        ptr[i]=ptr[j];
        ptr[j]=temp;
        i++;
        j--;
    }
}
int main() {
	// your code goes here

    int arr[]={4,8,3,5,2,4,10};
    int n=sizeof(arr)/sizeof(arr[0]);
    bubbleSort(arr,n);
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    char str[10]="Hareesh";
    //char *str="Hareesh";  //This was the mistake i did initially.
    //char *str=(char*)malloc(sizeof(char)*10);
    //str="Hareesh";   //This was the mistake i did initially.
    //*str="Hareesh";   //This was the mistake i did initially.
    stringRev(str);
    printf("\n%s\n",str);
    typedef struct{
    char data3;
    int  data1;
    float data2;
    }Reg_data;
    printf("%lld", sizeof(Reg_data));
    return 0;
} */
int main(){
    printf("Hello World!");
    return 0;
}
