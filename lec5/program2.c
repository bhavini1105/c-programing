#include<stdio.h>
void main(){
    int number;

    printf("Enter the Number:");
    scanf("%d",&number);

    if(number>0){
        printf("The given number is Positive(+)");
    }else if (number<0)
    {
        printf("The given number is negative(-)");
    }else{
        printf("The given number is Neutral(0)");
    }
    
}