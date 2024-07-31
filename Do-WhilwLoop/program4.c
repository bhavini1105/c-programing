#include<stdio.h>

void main(){

    int n , i , a=0 ,b = 1 , c ;

    printf("Enter Number :");
    scanf("%d",&n);

    for ( i = 0; i < n; i++)
    {
        c = a;
        a = c+b;
        b = c;
        printf(" %d ",c);
    }
    
}