#include<stdio.h>

int main(){

    int n , i , a;

    printf("Enter Number :");
    scanf("%d",&n);

    for ( i = 1; i <=10  ; i++)
    {
        a = n * i;
        printf(" %d X %d = %d \n", n,i,a);
    }

    return 0;
}