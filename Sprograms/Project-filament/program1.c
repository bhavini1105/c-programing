/*
Enter a string: NAYAN
Original string is: NAYAN
Reversed string is: NAYAN
Is Palindrom
*/

#include <stdio.h>
#include <string.h>

int main() {

    char a[20];
    int i = 0,p=0;

    printf("Enter any string:");
    gets(a);

    while (a[i] != '\0')
    {
        i++;
    }

    for (int j = 0; j < i; j++, i--)
    {
        if (a[j] != a[i - 1])
        {
            printf("is not palindrome");
            p=1;
            break;
        }
    }

    if(p!=1){
        printf("is palindrome");
    }

    return 0;
}