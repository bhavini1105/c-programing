#include<stdio.h>

int main(){

    int n , temp;

    printf("Enter Elements of Array:");
    scanf("%d",&n);

    int a[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter Element in Float vlaue (%d):",i);
        scanf("%d",&a[i]);
    }

    printf("\n The array is:{");
    for(int i = 0; i < n; i++) 
    {
        printf(" %d  ", a[i]);
    }    
        printf("}");
    
    // int b = n-1;
    
    // printf("\n %d",b);

    for (int i = 0; i < (n-1)-i; i++)
    {
        temp    =    a[i];
        a[i]    =    a[(n-1)-i];
        a[(n-1)-i]  =    temp;
    }

    printf("\n The array is:{");
    for(int i = 0; i < n; i++) 
    {
        printf(" %d  ", a[i]);
    }    
        printf("}");
    

    return 0;
}