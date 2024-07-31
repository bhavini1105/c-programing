#include<stdio.h>

void main(){
    int sum = 0 , n;

    printf("Enter Number :");
    scanf("%d",&n);

    for ( int i = 1; i <= n; i++)
    {
        sum += i;
        printf(" %d ",i);
    }
        printf("\n Sum of Number is :%d ",sum);
    
}