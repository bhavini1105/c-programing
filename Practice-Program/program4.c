#include<stdio.h>

void main(){

    int n , n1;
    printf("Enter Size of First Array :");
    scanf("%d", &n);
    int a[n];
    
    printf("Enter Size of second Array :");
    scanf("%d", &n1);
    int b[n1];

     for (int i = 0; i < n; i++)
    {
        printf("Enter Element  vlaue (%d):",i);
        scanf("%d",&a[i]);
    }

    printf("\n The array is:{");
    for(int i = 0; i < n; i++) 
    {
        printf(" %d  ", a[i]);
    }    
        printf("}\n");

     for (int i = 0; i < n1; i++)
    {
        printf("Enter Element  vlaue (%d):",i);
        scanf("%d",&b[i]);
    }

    printf("\n The array is:{");
    for(int i = 0; i < n1; i++) 
    {
        printf(" %d  ", b[i]);
    }    
        printf("}\n");

    int m;
    printf("Enter Index Number");
    scanf("%d",&m);

    printf("\n The array is:{");
    for(int i = 0; i < m; i++) 
    {
         printf(" %d  ", a[i]);
    }    
        printf("}\n");
}