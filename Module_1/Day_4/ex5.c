#include <stdio.h>

int compareBoxes(int A[], int B[], int size) {
    int countA[size], countB[size];
    int i, j;
  
    for (i = 0; i < size; i++) {
        countA[i] = 0;
        countB[i] = 0;
    }
  
    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            if (A[i] == B[j]) {
                countA[i]++;
                countB[j]++;
                break; 
            }
        }
    }

    for (i = 0; i < size; i++) {
        if (countA[i] != 1 || countB[i] != 1) {
            return 0; 
        }
    }

    return 1; 
}

int main() {
    int A[] = {200, 10, -90};
    int B[] = {-90, 200, 10};
    int size = sizeof(A) / sizeof(A[0]);

    int result = compareBoxes(A, B, size);
    printf("Result: %d\n", result);

    return 0;
}
