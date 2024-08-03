/*
5 4 3 2 1 
  4 3 2 1 
    3 2 1 
      2 1 
        1 
*/

#include<stdio.h>

void main(){
    int i , j , k , a;

    for( i = 1  ; i <= 5 ; i++)
    {
        for( k = 1 ; k < i ; k++)
        {
            printf("  ");
        }
        for( j = 6-i ; j >= 1 ; j--)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
}