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
The maximum element in the array is: 9
*/

#include <stdio.h> 

int main() { 

    int m , n ;
    
    printf("Enter Row Size :");
    scanf("%d",&m);

    printf("Enter Column Size :");
    scanf("%d",&n);

    int a[m][n] , max = a[0][0];

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

    for (int i = 1; i < m; i++) { 
        for (int j = 0; j < n; j++)
        {
            if (a[i][j] > max)
             { 
                max = a[i][j]; 
            }
        }
        
    }

    printf("The maximum element in the array is: %d\n", max);
    
    return 0; 
} 