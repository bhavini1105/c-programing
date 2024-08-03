/*
1 0 1 0 1 
1 0 1 0
1 0 1
1 0
1
*/

#include<stdio.h>

void main(){
    int n;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 5; j >= i; j--)
        {
            n = j % 2;
            printf("%d ",n);
        }
        printf("\n");
    }
    
}