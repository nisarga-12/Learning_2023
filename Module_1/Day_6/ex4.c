#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    int rollno;
    char name[20];
    float marks;
};

void parseAndInitialize(char* inputString, int numInputs, struct Student* students) {
    char* token;
    char* delimiter = " ";

    for (int i = 0; i < numInputs; i++) {
        token = strtok(inputString, delimiter);
        students[i].rollno = atoi(token);

        token = strtok(NULL, delimiter);
        strncpy(students[i].name, token, sizeof(students[i].name));

        token = strtok(NULL, delimiter);
        students[i].marks = atof(token);

        inputString = strtok(NULL, delimiter);
    }
}

int main() {
    char inputString[] = "1001 Aron 100.00";
    int numInputs = 1; // Assuming one input in this example

    struct Student students[numInputs];

    parseAndInitialize(inputString, numInputs, students);
  
    for (int i = 0; i < numInputs; i++) {
        printf("Roll No: %d, Name: %s, Marks: %.2f\n", students[i].rollno, students[i].name, students[i].marks);
    }

    return 0;
}
