#include<stdio.h>

int main(){

    int a[5][5] , sum = 0;

    printf("***********************************\n");
    
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("[%d][%d]:",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    
    printf("***********************************\n");

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("\t %d",a[i][j]);
        }
        printf("\n");
    }
    
    printf("***********************************\n");

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (i==0 || j == 0 || i == 4 || j == 4)
            {
                printf(" %d",a[i][j]);
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
    
    
    printf("***********************************\n");

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (i==0 || j == 0 || i == 4 || j == 4)
            {
                sum += a[i][j];
            }
        }
    }
        printf("\n Sum is : %d" , sum);
    

    return 0;
}