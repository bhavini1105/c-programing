/*
Enter Number :10
The given number is not divisible by both 3 & 5.
*/

#include<stdio.h>

int main(){

    int a;

    printf("Enter Number :");
    scanf("%d",&a);

    if (a%3 == 0 && a%5 ==0)
    {
        printf("The given number is divisible by both 3 & 5.");
    }

    else{
        printf("The given number is not divisible by both 3 & 5.");
    }

    return 0 ;
}