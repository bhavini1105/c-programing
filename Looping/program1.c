#include<stdio.h>

int main(){
    int i , j , a , b , c = 0;

    for ( i = 1; i <= 5; i++)
    {
       a=1;
        for ( j = 1; j <= i; j++)
        {
            printf(" %d ",a);
            b = a;
            a = c + a; 
        }
        c = b;
        printf("\n");
    }
    return 0 ;
}

/*
1
1 2
1 3 5
1 6 11 16
1 17 33 49 65
*/