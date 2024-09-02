#include <stdio.h>
void main()
{
    int n;

    printf("Enter Array size : ");
    scanf("%d", &n);

    int a[n][n],*ptr;

    printf("Enter array elements:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    ptr = &a[0][0];

    printf("Cubes of all elements:");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d  ", *ptr * *ptr * *ptr);
            ptr++;
        }
            
    }
}