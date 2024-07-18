#include<stdio.h>

void main(){
    int number1 , number2;

    printf("Enter First Number:");
    scanf("%d", &number1);
   
    printf("Enter Second Number:");
    scanf("%d", &number2);

    if(number1>number2){
        printf("Minimum Number is:%d",number2);
    }else{
        printf("Minimum Number is:%d",number1);
    }
}