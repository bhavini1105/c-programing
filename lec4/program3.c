#include<stdio.h>

void main(){
    int x,y,z;

    printf("Enetr Number:");
    scanf("%d", &x);

    printf("Enter Number :");
    scanf("%d",&y);

    z = ((x*x) - (y*y))+ 2*x*y;

    printf("Squer of two value is :%d",z);
}