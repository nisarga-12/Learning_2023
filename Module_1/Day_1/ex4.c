#include <stdio.h>

int main() {
    double num1, num2, result;
    char operator;

    printf("Enter Number1: ");
    scanf("%lf", &num1);

    printf("Enter the operator: ");
    scanf(" %c", &operator);

    printf("Enter Number2: ");
    scanf("%lf", &num2);

    switch (operator) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            result = num1 / num2;
            break;
        default:
            printf("Invalid operator\n");
            return 1;
    }

    printf("Result: %.2lf\n", result);

    return 0;
}
