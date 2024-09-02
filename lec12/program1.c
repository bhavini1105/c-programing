#include<stdio.h>

void main(){
    int n;
    printf("Enter Size of Array :");
    scanf("%d",&n);

    int a[n], *ptr[n];

    for (int i = 0; i < n; i++) 
    {
        printf("a[%d]: ", i);
        scanf("%d", &a[i]);
         ptr[i] = &a[i];
    }
 
    for (int i = 0; i < n; i++)
    {
        printf(" \n a[%d]: %d ",i,((*ptr[i])*(*ptr[i])));
    }
    
}