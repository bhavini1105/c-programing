#include<stdio.h>

int main(){

    char c = 'a';
    do
    {
        printf(" %c ",c);
        c = c + 3 ;
    } while (c <= 'z');
    
    return 0;
}