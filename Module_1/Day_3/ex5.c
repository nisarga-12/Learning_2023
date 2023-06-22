#include <stdio.h>

unsigned char setBit(unsigned char num, unsigned char pos) {
    return num | (1 << pos);
}

unsigned char clearBit(unsigned char num, unsigned char pos) {
    return num & ~(1 << pos);
}

unsigned char toggleBit(unsigned char num, unsigned char pos) {
    return num ^ (1 << pos);
}

int main() {
    unsigned char num = 0x5A; 
    num = setBit(num, 3);
    printf("After setting bit 3: 0x%X\n", num); 

    num = clearBit(num, 5);
    printf("After clearing bit 5: 0x%X\n", num);

    num = toggleBit(num, 2);
    printf("After toggling bit 2: 0x%X\n", num); 

    return 0;
}
