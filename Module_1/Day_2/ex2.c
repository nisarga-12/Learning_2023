#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void swap(void* a, void* b, size_t size) {
    void* temp = malloc(size);
    memcpy(temp, a, size);
    memcpy(a, b, size);
    memcpy(b, temp, size);

    free(temp);
}

int main() {
    int int1 = 10, int2 = 20;
    printf("Before swap: int1 = %d, int2 = %d\n", int1, int2);
    swap(&int1, &int2, sizeof(int));
    printf("After swap: int1 = %d, int2 = %d\n", int1, int2);
    
    return 0;
  }
