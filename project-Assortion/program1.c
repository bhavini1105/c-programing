/*
Enter Array Size :5
**********************************
a[0] :2
a[1] :-4
a[2] :1
a[3] :-3
a[4] :-5
**********************************
 a[1]: -4
 a[3]: -3
 a[4]: -5

*/

#include<stdio.h>

int main(){

    int n; 

    printf("Enter Array Size :");
    scanf("%d",&n);
    
    int a[n];

   printf("**********************************\n");


    for (int i = 0; i < n; i++)
    {
        printf("a[%d] :",i);
        scanf("%d",&a[i]);
    }
   
   printf("**********************************\n");

    for (int i = 0; i < n; i++)
    {
        if (a[i] < 0)
        {
            printf(" a[%d]: %d \n", i , a[i]);
        }
        
    }
    
    return 0;
}