#include<stdio.h>

int main(){

    int n ,count = 0;

    printf("Enter Number :");
    scanf("%d",&n);

   while (n > 0)
   {
     n = n / 10;
     count++;
   }
   printf("\n Total Number of Digit is : %d",count);
   

    return 0;
}