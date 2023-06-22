#include <stdio.h>

int findGreatest(int num1, int num2, int num3) {
    int greatest = num1;

    if (num2 > greatest) {
        greatest = num2;
    }
    if (num3 > greatest) {
        greatest = num3;
    }
    return greatest;
}

int main() {
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    int result = findGreatest(a, b, c);
    printf("The greatest number is: %d\n", result);

    return 0;
}
