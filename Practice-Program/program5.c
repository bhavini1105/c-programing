#include <stdio.h>

int main() {
    int arr[7] = {5, 12, 7, 3, 10, 8, 11};  
    int max = arr[0];  

    for(int i = 1; i < 7; i++) {
        if(arr[i] > max) {
            max = arr[i];  
        }
    }

    printf("The maximum value in the array is: %d\n", max);
    return 0;
}
