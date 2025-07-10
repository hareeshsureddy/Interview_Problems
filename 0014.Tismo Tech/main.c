#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array[] = {4, -1, -2, 6, 8};
    int max=0;
    for (int i=0;i<5;i++){
    if(max==0 && array[i]<0 ){
        max=array[i];
    }
    if(array[i]<0 && max<0){
    max=(max<array[i])?array[i]:max;
    }
}
    printf("Hello world! %d \n",max);
    return 0;
}
/*
Candidate Name:
Hareesh Sureddy
Candidate Email ID:
hareeshsureddy@gmail.com
Contact Number:
7995416231
Post applied:
Sr.F/W Engineer/Module Lead
Current Organization:
Efftronics System Pvt Ltd.
Current Designation:
Firmware Engineer


Interview - Round 1 (Remote online)
Date & Time: 10th July 2025 7:00pm


M→s
M->Start
M->Slave address
M->W
S->A
M->s
M->Slave address
M->R
M->0x0A
S->A
S-

#define BIT_SE(Data,Bit)   Data|=(1<<(7-Bit));

Data|(1<<Bit);
0->7  0x80  1000 000
1->6
2->5
3->4
4->3
5->2
6->1
7->0


7  6 5 4 3 2 1 0
0  1 2 3 4 5 6 7
*/






