#include <stdio.h>

int findLargestNumber(int num) {
    int largest = 0;
    char str[5];
    sprintf(str, "%d", num);

    for (int i = 0; i < 4; i++) {
        int newNum = 0;
        for (int j = 0; j < 4; j++) {
            if (j != i) {
                newNum = newNum * 10 + (str[j] - '0');
            }
        }

        if (newNum > largest) {
            largest = newNum;
        }
    }

    return largest;
}

int main() {
    int num;

    printf("Enter a 4-digit number: ");
    scanf("%d", &num);

    int largest = findLargestNumber(num);
    printf("The largest number by deleting a single digit: %d\n", largest);

    return 0;
}
