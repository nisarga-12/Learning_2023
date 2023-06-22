#include <stdio.h>

int bit_operations(int num, int oper_type) {
    if (oper_type == 1) {
        num |= 1; 
    } else if (oper_type == 2) {
        num &= ~(1 << 31); 
    } else if (oper_type == 3) {
        num ^= (1 << 16); 
    }
    
    return num;
}

int main() {
    int num = 0;  
    int oper_type = 1; 
  
    int result = bit_operations(num, oper_type);
    printf("Result: %d\n", result);
    
    return 0;
}
