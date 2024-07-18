#include<stdio.h>

void main(){
    float t , f;

    printf("\n Enetr The Temprature in Celsius:");
    scanf(" %f",&t);

    f= ((9.0/5.0) * t) + 32;

    printf("\nThe temprature in Fehrenhit is %.2f",f);
    
}