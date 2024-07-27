#include<stdio.h>

void main(){
    int a , b , c ;

    printf("Enter First Number :");
    scanf("%d",&a);
    
    printf("Enter Second Number :");
    scanf("%d",&b);
    
    printf("Enter Third Number :");
    scanf("%d",&c);

    a <= b ?
        a <= c ? printf("a is Minimum") : printf("c is Minimum")
        :
        b <= c ? printf(" b is Minimum") : printf("c is Minimum");
}