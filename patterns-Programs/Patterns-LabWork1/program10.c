/*
          1 
        1 2 1
      1 2 3 2 1
    1 2 3 4 3 2 1
  1 2 3 4 5 4 3 2 1
*/

#include<stdio.h>

void main(){

for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <=6-i; j++)
        {
            printf("  ");
        }
        for (int  k = 1; k <= i; k++)
        {
            printf("%d ",k);
        }
        for (int  k = i-1; k >= 1; k--)
        {
            printf("%d ",k);
        }
        
        
        printf("\n");
    }
}