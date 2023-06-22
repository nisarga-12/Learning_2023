#include <stdio.h>
#include <stdlib.h>

#define ARRAY_SIZE 10 // Define the size of the array

typedef struct {
    int id;
    char name[50];
    float salary;
} Employee;

void initializeEmployees(Employee employees[], int size) {
    for (int i = 0; i < size; i++) {
        employees[i].id = i + 1;
        sprintf(employees[i].name, "Employee%d", i + 1);
        employees[i].salary = 0.0;
    }
}

int main() {
    Employee employees[ARRAY_SIZE];
    
    initializeEmployees(employees, ARRAY_SIZE);
    
    for (int i = 0; i < ARRAY_SIZE; i++) {
        printf("Employee ID: %d\n", employees[i].id);
        printf("Employee Name: %s\n", employees[i].name);
        printf("Employee Salary: %.2f\n", employees[i].salary);
        printf("\n");
    }
    
    return 0;
}
