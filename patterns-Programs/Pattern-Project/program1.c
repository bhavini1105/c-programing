/*
41 
41 42
41 42 43
41 42 43 44
41 42 43 44 45
*/

#include<stdio.h>

void main(){
    int n=41;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("%d ",n+j);
            // n++;
        }
        printf("\n");
    }
    
}