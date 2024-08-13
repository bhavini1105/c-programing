/*
Enter Row Size :3
Enter Column Size :3
[0] [0] :2
[0] [1] :7
[0] [2] :1
[1] [0] :3
[1] [1] :5
[1] [2] :4
[2] [0] :8
[2] [1] :9
[2] [2] :6
The matrix of an array:
         2       7       1
         3       5       4
         8       9       6
Enter Row Number:0
[0][0] :  2
[0][1] :  7
[0][2] :  1
The Sum of Row is :10
Enter Column Number:2
[0][2] :  1
[1][2] :  4
[2][2] :  6
The Sum of Column is :11
*/

#include<stdio.h>

int main(){

    int m , n , r , c;
    int rsum = 0 , csum = 0;
    
    printf("Enter Row Size :");
    scanf("%d",&m);

    printf("Enter Column Size :");
    scanf("%d",&n);

    int a[m][n];

    for (int  i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("[%d] [%d] :",i,j);
            scanf("%d",&a[i][j]);
        }
        // printf("\n");
    }

    printf("The matrix of an array:\n");

    for (int  i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("\t %d ",a[i][j]);
        }
        printf("\n");
    }

    printf("Enter Row Number:");
    scanf("%d",&r);

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == r)
            {
                printf("[%d][%d] :  %d\n" ,i,j,a[i][j]);
            }
            
        }
    }
    
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == r)
            {
                rsum += a[i][j];
            }
            
        }
    }
    
    printf("The Sum of Row is :%d \n",rsum);
    
    printf("Enter Column Number:");
    scanf("%d",&c);

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j == c)
            {
                printf("[%d][%d] :  %d\n" ,i,j,a[i][j]);
            }
            
        }
        
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j == c)
            {
                csum += a[i][j];
            }
            
        }
        
    }
    
    printf("The Sum of Column is :%d \n",csum);

    return 0;
}