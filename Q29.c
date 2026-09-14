// Write a program to calculate the factorial of a number.

#include <stdio.h>

int main() {
    int n, i;
    unsigned long long factorial = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial of a negative number is undefined.\n");
        return 1;
    }

    for (i = 1; i <= n; i++) {
        factorial *= i;
    }

    printf("%llu\n", factorial);

    return 0;
}
