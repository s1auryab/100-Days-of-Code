// Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

#include <stdio.h>

int main() {
    int num1, num2, result;
    char op;

    printf("Enter two numbers and an operator (+, -, *, /, %%): ");
    if (scanf("%d %d %c", &num1, &num2, &op) != 3) {
        return 1;
    }

    switch (op) {
        case '+':
            result = num1 + num2;
            printf("%d\n", result);
            break;
        case '-':
            result = num1 - num2;
            printf("%d\n", result);
            break;
        case '*':
            result = num1 * num2;
            printf("%d\n", result);
            break;
        case '/':
            if (num2 == 0) {
                printf("Error: Division by zero\n");
            } else {
                result = num1 / num2;
                printf("%d\n", result);
            }
            break;
        case '%':
            if (num2 == 0) {
                printf("Error: Modulo by zero\n");
            } else {
                result = num1 % num2;
                printf("%d\n", result);
            }
            break;
        default:
            printf("Invalid operator\n");
            break;
    }

    return 0;
}