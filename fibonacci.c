#include <stdio.h>

int main() {
    int i;
    int first = 0, second = 1, next;

    printf("Fibonacci series up to 7 terms:\n");

    for (i = 0; i < 7; i++) {
        if (i <= 1)
            next = i;
        else {
            next = first + second;
            first = second;
            second = next;
        }
        printf("%d ", next);
    }

    return 0;
}
