#include<stdio.h>

int main(){

    int n ;
    float sum , avg;

    printf("Enter The Size of Array: ");
    scanf("%d", &n);
    int a[n];

    for (int i = 0 ; i < n ; i++)
    {
        printf("Enter the Value of Element :");
        scanf("%d", &a[i]);
    }
    
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
    }
    printf("\n Sum of Array Elements : %.2f",sum);

    avg = sum / n ;
    printf("\n Avg OF Array Elements is :%.2f", avg);
    
    printf("\nLength of array is %d",n);
    
    return 0;       
}