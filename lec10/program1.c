#include<stdio.h>

    int cube(){

        int a ;
        printf("Enter Number :");
        scanf("%d",&a);

        return a*a*a;
    }

int main(){
    
    printf("Cube of number is : %d", cube());

    return 0;
}