#include<stdio.h>

int main(){

    int n ;

    printf("Enter The Size of Array: ");
    scanf("%d", &n);
    int a[n];

    for (int i = 0 ; i < n ; i++)
    {
        printf("Enter the Value of Element :");
        scanf("%d", &a[i]);
    }
    
    printf("Length of array is %d",n);
    
    return 0;       
}