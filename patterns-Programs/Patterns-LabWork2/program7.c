/*
A 
B A 
C B A 
D C B A 
E D C B A 
*/

#include<stdio.h>
void main(){
    char c = 'A';

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%c ", c+i-j);
        }
        printf("\n");
    }
    
}