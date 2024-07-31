#include<stdio.h>

int main(){

    int n ,sum = 0 ,fy,ly;

    printf("Enter The Number :");
    scanf("%d",&n);

    ly=n%10;
    printf("\nLast number is :%d",ly);

    fy=n;
    while (n>=10)
    {
        n = n / 10;
    }
    fy = n;
    printf("\nFirst number is :%d",fy);

    sum = fy + ly;
    printf("\nFirst and Last digit sum of : %d",sum);
    


    return 0;
}