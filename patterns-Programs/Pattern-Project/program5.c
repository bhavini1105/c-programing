//           5 
//         4 5 4 
//       3 4 5 4 3 
//     2 3 4 5 4 3 2 
//   1 2 3 4 5 4 3 2 1 

#include<stdio.h>

void main(){
    int i , j , k ;

    for( i = 0  ; i < 5 ; i++)
    {
        for( k = 0 ; k < 5-i ; k++)
        {
            printf("  ");
        }
        for( j = 5 - i ; j <= 5 ; j++)
        {
            printf("%d ",j);
        }
        for( j = 4 ; j >= 5 - i ; j--)
        {   
            printf("%d ",j);
        }
        
        
        printf("\n");
    }
}
