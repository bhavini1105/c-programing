#include<stdio.h>

int main(){
    int i , j , a;

    for ( i = 1; i <= 5; i++)
    {
        int  n = 1;
        printf(" %d ",n);
        for ( j = 1; j < i; j++)
        {
            n += i - j ;
            printf(" %d ",n);
        }
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