#include<stdio.h>

int main(){

    int syear , eyear ;

    printf("Enter Starting Year :");
    scanf("%d",&syear);

    printf("Enter Ending Year:");
    scanf("%d",&eyear);

    while (syear >= eyear)
    {
            printf(" %d ", syear);
    
    }
    

    return 0 ;
}