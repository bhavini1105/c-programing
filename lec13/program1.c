#include<stdio.h>

void main(){
    int n;
    printf("Enter Size of Array :");
    scanf("%d",&n);

    int a[n], rev[n];

    for (int i = 0; i < n; i++) 
    {
        printf("a[%d]: ", i);
        scanf("%d", &a[i]);
    }

    int *ptr[n];

    
    for (int i = 0; i < n; i++) 
    {
        ptr[n-1-i] = &rev[n-1-i];  
        *ptr[n-1-i] = a[i] * a[i]; 
    }

   
    for (int i = 0; i < n; i++)
    {
        printf("\nrev[%d] = %d", i, *ptr[i]);
    }
}
