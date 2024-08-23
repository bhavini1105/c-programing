#include <stdio.h>

int reverse(int number);

int main() {
    int number, nreverse;

    printf("Enter Number: ");
    scanf("%d", &number);

    nreverse = reverse(number);

    printf("Reversed Number is: %d\n", nreverse);

    return 0;
}

int reverse(int number) {
    int reversed = 0;
    
    while (number != 0) {
        int digit = number % 10;  
        reversed = reversed * 10 + digit;  
        number /= 10;  
    }

    return reversed;
}
