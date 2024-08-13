/*
Enter Row Size :3
Enter Column Size :3
[0] [0] :2
[0] [1] :4
[0] [2] :1
[1] [0] :3
[1] [1] :5
[1] [2] :4
[2] [0] :8
[2] [1] :2
[2] [2] :6
The matrix of an array:
         2       4       1 
         3       5       4 
         8       2       6
The transpose matrix of an array:
         2       3       8
         4       5       2
         1       4       6
*/

#include<stdio.h>

int main(){

    int m , n ;
    
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
    
    printf("The transpose matrix of an array:\n");

    for (int  i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("\t %d ",a[j][i]);
        }
        printf("\n");
    }

    return 0;
}