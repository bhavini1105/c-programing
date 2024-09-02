#include<stdio.h>

int main(){

    int a , b;
    printf("Enetr First Number :");
    scanf("%d",&a);

    printf("Enter Second Number: ");
    scanf("%d",&b);

    int *ptr , *ptr1 , temp ;

    ptr = &a ;
    ptr1 = &b ;

    printf("\nBefore swapping:");
    printf("\n%d",*ptr);
    printf("\n%d",*ptr1);

    ptr1 = &a;
    ptr = &b;

    printf("\nAfter swapping:");
    printf("\n%d",*ptr);
    printf("\n%d",*ptr1);


    return 0;
}