#include <stdio.h>

#define MAX_SIZE 100
typedef struct {
    int id;
    char name[50];
} Student;

void swapMembers(Student arr[], int index1, int index2) {
    Student temp = arr[index1];
    arr[index1] = arr[index2];
    arr[index2] = temp;
}

int main() {
    Student students[MAX_SIZE];
    int numStudents;
    
    printf("Enter the number of students: ");
    scanf("%d", &numStudents);
    
    for (int i = 0; i < numStudents; i++) {
        printf("Enter details for student %d:\n", i + 1);
        printf("ID: ");
        scanf("%d", &students[i].id);
        printf("Name: ");
        scanf("%s", students[i].name);
    }
    
    printf("\nOriginal array of students:\n");
    for (int i = 0; i < numStudents; i++) {
        printf("Student %d: ID = %d, Name = %s\n", i + 1, students[i].id, students[i].name);
        
    }
    
    int index1, index2;
    printf("\nEnter the indices (1-%d) of the students to swap: ", numStudents);
    scanf("%d %d", &index1, &index2);
    
    if (index1 < 1 || index1 > numStudents || index2 < 1 || index2 > numStudents) {
        printf("Invalid indices!\n");
        return 0;
    }
    
    swapMembers(students, index1 - 1, index2 - 1);
    
    printf("\nUpdated array of students:\n");
    for (int i = 0; i < numStudents; i++) {
        printf("Student %d: ID = %d, Name = %s\n", i + 1, students[i].id, students[i].name);
      
    }
    
    return 0;
}
