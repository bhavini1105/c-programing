#include<stdio.h>

void main(){
    int i = 1 , n;

    printf("Enter Number :");
    scanf("%d",&n);

    do
    {
        if (i%2 ==0)
        {
            printf(" %d ",i);
        }
        i++;
    } while (i <= n);
    
}