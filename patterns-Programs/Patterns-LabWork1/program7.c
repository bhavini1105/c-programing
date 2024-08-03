/*
1 2 3 4 5 5 4 3 2 1 
1 2 3 4     4 3 2 1 
1 2 3         3 2 1
1 2             2 1
1                 1 
*/

#include<stdio.h>

void main(){
    for (int i = 1; i <=5 ; i++)
    {
        for (int j = 1; j <=6-i; j++)
        {
            printf("%d ",j);
        }
        for (int k = 1; k < i; k++)
        {
            printf("  ");
        }
        for (int k = 1; k < i; k++)
        {
            printf("  ");
        }
        for (int j = 6-i; j >=1; j--)
        {
            printf("%d ",j);
        }
        
        printf("\n");
    }
    
}