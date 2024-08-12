#include<stdio.h>

int main(){

    int num1[3][3],num2[3][3], sum[3][3];

    for (int i = 0; i <= 2; i++)
    {
        for (int j = 0; j <= 2; j++)
        {
            printf("[%d][%d]:",i,j);
            scanf("%d",&num1[i][j]);
        }
        
    }
    
    printf("     ********    \n");

    for (int i = 0; i <= 2; i++)
    {
        for (int j = 0; j <= 2; j++)
        {
            printf("\t %d",num1[i][j]);
        }
        printf("\n");
    }

    printf("     ********    \n");

    for (int i = 0; i <= 2; i++)
    {
        for (int j = 0; j <= 2; j++)
        {
            printf("[%d][%d]:",i,j);
            scanf("%d",&num2[i][j]);
        }
        
    }
    
    for (int i = 0; i <= 2; i++)
    {
        for (int j = 0; j <= 2; j++)
        {
            printf("\t %d",num2[i][j]);
        }
        printf("\n");
    }

    printf("     ********    \n");
    for (int i = 0; i <= 2; i++)
    {
        for (int j = 0; j <= 2; j++)
        {
            sum[i][j] = num1[i][j] + num2[i][j];
        }
    }
    for (int i = 0; i <= 2; i++)
    {
        for (int j = 0; j <= 2; j++)
        {
            printf("\t %d",sum[i][j]);
        }
        printf("\n");
    }
    
}