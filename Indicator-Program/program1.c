#include <stdio.h>
void main()
{
    char str[20], *ptr;
    int ct = 0;

    printf("Enter any string : ");
    gets(str);

    ptr = &str[0];

    while (*ptr!= '\0')
    {
        ptr++;
        ct++;
    }

    printf("Length is =  %d", ct);
}
