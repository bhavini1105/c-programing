#include<stdio.h>

int fact(int num);

int main(){
    int num , factorial;

    printf("Enter The Number :");
    scanf("%d",&num);
    
    factorial = fact(num);
    
    printf("FActotial Of Number Is : %d",factorial);

    return 0;
}

int fact(int num){
    
    if (num == 1)
    {
        return 1;
    }
    else{
        return num * fact(num - 1);
    }

}