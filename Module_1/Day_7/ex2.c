#include <stdio.h>

struct Student {
    char name[50];
    int marks;
};

void swap(struct Student* a, struct Student* b) {
    struct Student temp = *a;
    *a = *b;
    *b = temp;
}

void sortStudents(struct Student students[], int n) {
    int i, j;

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (students[j].marks < students[j + 1].marks) {
                swap(&students[j], &students[j + 1]);
            }
        }
    }
}

void printStudents(struct Student students[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("Name: %s, Marks: %d\n", students[i].name, students[i].marks);
    }
}

int main() {
    struct Student students[5] = {
        {"Alice", 75},
        {"Bob", 90},
        {"Charlie", 82},
        {"David", 95},
        {"Eve", 88}
    };
    int n = 5;

    printf("Before sorting:\n");
    printStudents(students, n);

    sortStudents(students, n);

    printf("\nAfter sorting:\n");
    printStudents(students, n);

    return 0;
}
