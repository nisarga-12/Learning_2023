#include <stdio.h>
#include <stdlib.h>

struct MyStruct {
    int value1;
    int value2;
};

struct MyStruct* modifyStructure(struct MyStruct* myStructPtr) {
    myStructPtr->value1 = 10;
    myStructPtr->value2 = 20;
    
    return myStructPtr;
}

int main() {
    struct MyStruct myStruct;
    myStruct.value1 = 0;
    myStruct.value2 = 0;
    
    struct MyStruct* modifiedStructPtr = modifyStructure(&myStruct);
    
    printf("Modified Structure: value1 = %d, value2 = %d\n", modifiedStructPtr->value1, modifiedStructPtr->value2);
    
    return 0;
}
