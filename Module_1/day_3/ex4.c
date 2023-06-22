#include <stdio.h>

void findSmallestAndLargestDigits(int n, int numbers[]) {
    int smallest = 9;
    int largest = 0;
    int isValid = 1;
    
    for (int i = 0; i < n; i++) {
        int num = numbers[i];
        
        while (num > 0) {
            int digit = num % 10;
            
            if (digit < smallest) {
                smallest = digit;
            }
            
            if (digit > largest) {
                largest = digit;
            }
            
            num /= 10;
        }
    }
    
    if (smallest == largest) {
        isValid = 0;
    }
    
    printf("Smallest Digit: %d\n", smallest);
    printf("Largest Digit: %d\n", largest);
    
    if (isValid) {
        printf("Valid\n");
    } else {
        printf("Not Valid\n");
    }
}

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    
    int numbers[n];
    
    printf("Enter the numbers:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }
    
    findSmallestAndLargestDigits(n, numbers);
    
    return 0;
}
