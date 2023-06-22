#include <stdio.h>

void encode(char *str) {
    int i = 0;
    while (str[i] != '\0') {
        str[i] += 1;
        i++;
    }
}

void decode(char *str) {
    int i = 0;
    while (str[i] != '\0') {
        str[i] -= 1;
        i++;
    }
}

int main() {
    char str[100];

    printf("Enter a string to encode: ");
    scanf("%s", str);

    encode(str);
    printf("Encoded string: %s\n", str);

    decode(str);
    printf("Decoded string: %s", str);

    return 0;
}
