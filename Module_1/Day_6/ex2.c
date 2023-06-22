#include <stdio.h>
#include <stdlib.h>

#define MAX_STUDENTS 100

typedef struct {
    char name[50];
    int marks;
} Student;

void writeStudentsToFile(Student students[], int count, const char* filename) {
    FILE* file = fopen(filename, "w");
    if (file == NULL) {
        printf("Error opening file.\n");
        return;
    }
    
    for (int i = 0; i < count; i++) {
        fprintf(file, "%s %d\n", students[i].name, students[i].marks);
    }
    
    fclose(file);
}

void readStudentsFromFile(Student students[], int* count, const char* filename) {
    FILE* file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error opening file.\n");
        return;
    }
    
    *count = 0;
    while (!feof(file) && *count < MAX_STUDENTS) {
        fscanf(file, "%s %d", students[*count].name, &students[*count].marks);
        (*count)++;
    }
    
    fclose(file);
}

float calculateAverage(Student students[], int count) {
    float sum = 0.0;
    for (int i = 0; i < count; i++) {
        sum += students[i].marks;
    }
    return sum / count;
}

void printStudentsAboveThreshold(Student students[], int count, int threshold) {
    printf("Students scoring above %d:\n", threshold);
    for (int i = 0; i < count; i++) {
        if (students[i].marks > threshold) {
            printf("%s\n", students[i].name);
        }
    }
}

int main() {
    Student students[MAX_STUDENTS];
    int count = 0;
    
    readStudentsFromFile(students, &count, "students.txt");
    writeStudentsToFile(students, count, "students.txt");
    float average = calculateAverage(students, count);
   
    printf("Average marks: %.2f\n", average);
    int threshold = 80;
    printStudentsAboveThreshold(students, count, threshold);
    
    return 0;
}
