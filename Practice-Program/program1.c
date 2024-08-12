#include<stdio.h>

int main(){

    int n;

    printf("Enter Elements of Array:");
    scanf("%d",&n);

    float a[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter Element in Float vlaue (%d):",i);
        scanf("%f",&a[i]);
    }

    printf("\n The array is:{");
    for(int i = 0; i < n; i++) 
    {
        printf(" %.2f  ", a[i]);
    }    
        printf("}");

    for (int i = 0; i < n; i++)
    { 
        printf("\n%.2f", a[i]); 
    } 

    return 0;
}