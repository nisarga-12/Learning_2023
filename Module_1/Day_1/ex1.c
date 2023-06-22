#include <stdio.h>

int findMaxUsingIfElse(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

int findMaxUsingTernaryOperator(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    int max1 = findMaxUsingIfElse(num1, num2);
    int max2 = findMaxUsingTernaryOperator(num1, num2);

    printf("Using if-else, the biggest number is: %d\n", max1);
    printf("Using ternary operator, the biggest number is: %d\n", max2);

    return 0;
}
