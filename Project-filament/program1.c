/*
Enter a string: NAYAN
Original string is: NAYAN
Reversed string is: NAYAN
Is Palindrom
*/

#include <stdio.h>
#include <string.h>

int main() {
    char a[100]; 
    char reversed[100]; 
    int n;

    printf("Enter a string: ");
    gets(a);

    n = strlen(a); 

    for (int i = 0; i < n; i++) {
        reversed[i] = a[(n - 1) - i];
    }

    reversed[n] = '\0'; 

    printf("Original string is: %s\n", a);
    printf("Reversed string is: %s\n", reversed);

    if( strcmp(a, reversed)  == 0)
    {
        printf("Is Palindrom");
    }
    else{
        printf("Not Palindrom");

    }

    return 0;
}