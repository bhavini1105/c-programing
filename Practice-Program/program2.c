#include<stdio.h>

int main(){

    int n ;
    float sum ;

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
    
    return 0;       
}