/*
Enter String :development
d <=> 1
e <=> 3
l <=> 1
m <=> 1
n <=> 1
o <=> 1
p <=> 1
t <=> 1
v <=> 1
*/

#include<stdio.h>
#include<string.h>

int main(){

    char a[20] , c;
    int n , ct , i;

    printf("Enter String :");
    gets(a);

    n = strlen(a);

    for (c = 65; c <= 122; c++)
    {
        ct = 0;
        i = 0;
        while (a[i] != '\0')
        {

            if (c == a[i])
            {
                ct++;
            }

            i++;
        }

        if (ct != 0)
        {
            printf("%c <=> %d\n", c, ct);
        }
    }

    return 0;
}