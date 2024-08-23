#include<stdio.h>

int square(int x){
    return x*x;
}
int sum(int x , int y){
    return 2*x*y;
}
void main(){

    int a , b, ans;
    printf("Enetr Numbers :");
    scanf("%d %d",&a,&b);

    ans = square(a)+sum(a,b)+square(b);
    
    printf("Anser is : %d",ans);
}