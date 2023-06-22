#include <stdio.h>

void printBits(int num) {
    unsigned int mask = 1 << (sizeof(int) * 8 - 1);

    for (int i = 0; i < sizeof(int) * 8; i++) {
        if (num & mask)
            printf("1");
        else
            printf("0");
        mask >>= 1;
    }

    printf("\n");
}

int main() {
    int num;
    printf("Enter a 32-bit integer: ");
    scanf("%d", &num);

    printf("Binary representation: ");
    printBits(num);

    return 0;
}
