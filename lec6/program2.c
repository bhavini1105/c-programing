#include <stdio.h>

int main() {
    int a, b, c, d, e;

    printf("Enter Five Numbers: ");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);  
    
    if (a > b) {
        if (a > c) {
            if (a > d) {
                if (a > e) {
                    printf("a is max\n");
                } else {
                    printf("e is max\n");
                }
            } else {
                if (d > e) {
                    printf("d is max\n");
                } else {
                    printf("e is max\n");
                }
            }
        } else {
            if (c > d) {
                if (c > e) {
                    printf("c is max\n");
                } else {
                    printf("e is max\n");
                }
            } else {
                if (d > e) {
                    printf("d is max\n");
                } else {
                    printf("e is max\n");
                }
            }
        }
    } else {
        if (b > c) {
            if (b > d) {
                if (b > e) {
                    printf("b is max\n");
                } else {
                    printf("e is max\n");
                }
            } else {
                if (d > e) {
                    printf("d is max\n");
                } else {
                    printf("e is max\n");
                }
            }
        } else {
            if (c > d) {
                if (c > e) {
                    printf("c is max\n");
                } else {
                    printf("e is max\n");
                }
            } else {
                if (d > e) {
                    printf("d is max\n");
                } else {
                    printf("e is max\n");
                }
            }
        }
    }
}
