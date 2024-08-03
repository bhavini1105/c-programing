// 1 0 1 0 1 
//   1 0 1 0 
//     1 0 1 
//       1 0 
//         1 

#include<stdio.h>

void main(){

    int a;
    for (int i = 1; i <= 5; i++)
    {
        for (int k = 1; k < i; k++)
        {
            printf("  ");
        }
        
        for (int j = 5; j >= i; j--)
        {
         a = j%2;
         printf("%d ",a);   
        }
        printf("\n");
    }
    
}