#include <stdio.h>
#include <stdlib.h>
/* This asked by Chandu
    * * * * * * * * *
      * * * * * * *
        * * * * *
          * * *
            *
 */
int main()
{
    for(int i=0;i<5;i++){
            int k=i;
            while(k--){
                printf("  ");
            }
        for(int j=i;j<9-(i);j++){
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
