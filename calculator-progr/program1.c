/*
Press 1 for +(Addition)
Press 2 for -(Substraction)
Press 3 for *(Multipication)
Press 4 for /(Division)
Press 5 for %(Modulo)
Press 0 for if you want to Exit..
Enter your choice:3
Enter the first number:5
Enter the second number:15
Multiplication of 5 and 15 is 75:

 Do you want to contionue (yes(y)/no(n))?n
*/

#include <stdio.h>

int add(int x, int y);
int sub(int x, int y);
int multi(int x, int y);
float divide(int x, int y);
int module(int x, int y);

int main()
{
    int ch, num1, num2, ans;
    char c = 'y';

    while (c == 'y')
    {
        printf("\nPress 1 for +(Addition)");
        printf("\nPress 2 for -(Substraction)");
        printf("\nPress 3 for *(Multipication)");
        printf("\nPress 4 for /(Division)");
        printf("\nPress 5 for %%(Modulo)");
        printf("\nPress 0 for if you want to Exit..");
        printf("\nEnter your choice:");
        scanf("%d", &ch);

        if (ch == 0)
        {
            printf("Extiting the program.\n");
            break;
        }
        if (ch >= 1 && ch <= 5)
        {
            printf("Enter the first number:");
            scanf("%d", &num1);
            printf("Enter the second number:");
            scanf("%d", &num2);
        }
        switch (ch)
        {
        case 1:
            ans = add(num1, num2);
            printf("Addition of %d and %d is %d:\n", num1, num2, ans);
            break;

        case 2:
            ans = sub(num1, num2);
            printf("Subtraction of %d and %d is %d:\n", num1, num2, ans);
            break;

        case 3:
            ans = multi(num1, num2);
            printf("Multiplication of %d and %d is %d:\n", num1, num2, ans);
            break;

        case 4:
            if (num2 != 0)
            {
                ans = divide(num1, num2);
                printf("divide of %d and %d is %d:\n", num1, num2, ans);
            }
            else
            {
                printf("\n Error...... or Second Number is Zero");
            }
            break;
        case 5:

            if (num2 != 0)
            {
                ans = add(num1, num2);
                printf("Addition of %d and %d is %d:\n", num1, num2, ans);
            }
            else
            {
                printf("\n Error...... or Second Number is Zero");
            }
            break;
        default:
            printf("\n Invalid choice! please try agin.");
        }
        
        printf("\n Do you want to contionue (yes(y)/no(n))?");
        scanf(" %c", &c);
    }
    return 0;
}
int add(int x, int y)
{
    return x + y;
}
int sub(int x, int y)
{
    return x - y;
}
int multi(int x, int y)
{
    return x * y;
}
float divide(int x, int y)
{
    return x / y;
}
int module(int x, int y)
{
    return x % y;
}