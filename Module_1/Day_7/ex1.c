#include <stdio.h>

#define MAX_SIZE 100

struct Person {
    char name[50];
    int age;
    float height;
};

void displayMembers(struct Person persons[], int numPersons) {
    int i;

    for (i = 0; i < numPersons; i++) {
        printf("Person %d:\n", i + 1);
        printf("Name: %s\n", persons[i].name);
        printf("Age: %d\n", persons[i].age);
        printf("Height: %.2f\n", persons[i].height);
        printf("\n");
    }
}

int main() {
    struct Person persons[MAX_SIZE];
    int numPersons;
    numPersons = 5;

    displayMembers(persons, numPersons);

    return 0;
}
