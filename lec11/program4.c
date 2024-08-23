#include<stdio.h>

int sum(int num);

int main(){
    int num , addition;

    printf("Enter The Number :");
    scanf("%d",&num);
    
    addition = sum(num);
    
    printf("FActotial Of Number Is : %d",addition);

    return 0;
}

int sum(int num){
    
    if (num == 1)
    {
        return 1;
    }
    else{
        return num + sum(num - 1);
    }

}