#include<stdio.h>

int main(){

    int n ;
    printf("Enter Size of Array :");
    scanf("%d",&n);

    int a[n] , b[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter Element of 1st Array :");
        scanf("%d",&a[i]);
    }
    printf("\n");
        
    for (int i = 0; i < n; i++)
    {
        printf("Enter Element of 2nd Array :");
        scanf("%d",&b[i]);
    }
        
    for (int i = 0; i < n; i++)
    {
        printf("\n Element of 3rd Array : %d",a[i]+b[i]);
    }
    
    
    return 0;       
}