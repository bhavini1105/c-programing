#include<stdio.h>

int main(){

    int num[3][3], sum = 0;

    printf("     ********    \n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("[%d][%d]:",i,j);
            scanf("%d",&num[i][j]);
        }
        
    }
    
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("\t %d",num[i][j]);
        }
        printf("\n");
    }

    printf("     ********    \n");

    for (int i = 0 ; i < 3 ; i++)
    {
        for (int j = 0 ; j < 3 ; j++)
        {
            if (i == j)
            {
                sum += num[i][j];
            }
        }
    }
                printf("%d",sum);
    
}