#include <stdio.h>

struct MyStruct {
    int data;
};

void rotateArray(struct MyStruct arr[], int size, int K) {
    struct MyStruct temp[size];
  
    for (int i = 0; i < size; i++) {
        temp[i] = arr[i];
    }

    for (int i = 0; i < size; i++) {
        int newIndex = (i + K) % size;
        arr[newIndex] = temp[i];
    }
}

int main() {
    struct MyStruct arr[5] = {
        {1}, {2}, {3}, {4}, {5}
    };
    int size = sizeof(arr) / sizeof(arr[0]);
    int K = 2;

    printf("Original array:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i].data);
    }

    rotateArray(arr, size, K);

    printf("\nRotated array:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i].data);
    }

    return 0;
}
