#include<stdio.h>

void main(){
    int x,y,z;

    printf("Enetr Number:");
    scanf("%d", &x);

    printf("Enter Number :");
    scanf("%d",&y);

    z = ((x*x*x) + (y*y*y))+ 3*x*x*y + 3*x*y*y;

    printf("Qube of two value is :%d",z);
}