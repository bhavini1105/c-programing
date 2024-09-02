#include <stdio.h>

int main() {
    FILE *ptr, *ptr1;
    int i;


    ptr = fopen("even_file.txt", "w");
    ptr1 = fopen("odd_file.txt", "w");

    if (ptr == NULL || ptr1 == NULL) {
        printf("Error opening file(s)!\n");
        return 1;
    }

    for (i = 50; i <= 70; i =i + 2) {
        if (i > 50) {
            fprintf(ptr, ", ");
        }
        fprintf(ptr, "%d", i);
    }

    for (i = 51; i < 70; i = i + 2) {
        if (i > 51) {
            fprintf(ptr1, ", ");
        }
        fprintf(ptr1, "%d", i);
    }

    fclose(ptr);
    fclose(ptr1);

    printf("Numbers have been written to even_file.txt and odd_file.txt.\n");

    return 0;
}