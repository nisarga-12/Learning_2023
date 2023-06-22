#include <stdio.h>
#include <string.h>

#define MAX_NAME_LENGTH 50
#define MAX_STUDENTS 100

struct Student {
    char name[MAX_NAME_LENGTH];
    int age;
    // Add more fields as needed
};

struct Student searchByName(struct Student students[], int numStudents, const char *name) {
    struct Student notFound;
    strcpy(notFound.name, "Not found");
    notFound.age = -1;

    for (int i = 0; i < numStudents; i++) {
        if (strcmp(students[i].name, name) == 0) {
            return students[i];
        }
    }

    return notFound;
}

int main() {
    struct Student students[MAX_STUDENTS] = {
        {"Alice", 18},
        {"Bob", 19},
        {"Charlie", 20},
      
    };

    int numStudents = 3;

    const char *searchName = "Bob";
    struct Student foundStudent = searchByName(students, numStudents, searchName);

    if (strcmp(foundStudent.name, "Not found") == 0) {
        printf("Student not found.\n");
    } else {
        printf("Name: %s\n", foundStudent.name);
        printf("Age: %d\n", foundStudent.age);
    }

    return 0;
}
