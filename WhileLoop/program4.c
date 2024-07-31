#include<stdio.h>

int main(){
    int n , i=1;

    printf("Enter The Number :");
    scanf(" %d",&n);

    while (i <= n)
    {
        if ( n % 2 != 0)
        {
            printf(" %d ",n);
        }
        n--;
    }
    return 0;
}