#include<stdio.h>

int main(){

    int num[3][3], sum=0;
    float avg;

    for (int i = 0; i <= 2; i++)
    {
        for (int j = 0; j <= 2; j++)
        {
            printf("[%d][%d]:",i,j);
            scanf("%d",&num[i][j]);
        }
        
    }
    
    for (int i = 0; i <= 2; i++)
    {
        for (int j = 0; j <= 2; j++)
        {
            printf("\t %d",num[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i <= 2; i++)
    {
        for (int j = 0; j <= 2; j++)
        {
            sum += num[i][j];
        }
    }
    
    printf("%d",sum);

    avg = sum / 9;
    printf("%.2f",avg);
    

    return 0;
}