#include<stdio.h>

void main(){
    int a,b;

    printf("Enter Number:");
    scanf("%d",&a);
    
    printf("Enter the Second Number:");
    scanf("%d",&b);

    // a = (a+b)-a;
    // b = (a+b)-b;

    printf("\nValue of a is: %d",(a+b)-a);
    printf("\nValue of b is: %d",(a+b)-b);

}