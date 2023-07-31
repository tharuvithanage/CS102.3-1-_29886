#include <stdio.h>

int main() {
    int num1 = 0, num2 = 1, nextTerm;

    printf("First 10 numbers of Fibonacci Sequence: \n");

    for (int i = 0; i < 10; i++) {
        if (i <= 1)
            nextTerm = i;
        else {
            nextTerm = num1 + num2;
            num1 = num2;
            num2 = nextTerm;
        }
        printf("%d ", nextTerm);
    }

    printf("\n");
    return 0;
}

