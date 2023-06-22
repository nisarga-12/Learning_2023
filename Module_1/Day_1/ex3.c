#include <stdio.h>

int main() {
    int rollNo;
    char name[50];
    float physics, math, chemistry, totalMarks, percentage;

    printf("Enter Roll Number: ");
    scanf("%d", &rollNo);

    printf("Enter Name: ");
    scanf(" %[^\n]", name);

    printf("Enter Marks in Physics: ");
    scanf("%f", &physics);

    printf("Enter Marks in Math: ");
    scanf("%f", &math);

    printf("Enter Marks in Chemistry: ");
    scanf("%f", &chemistry);

    // Calculate total marks and percentage
    totalMarks = physics + math + chemistry;
    percentage = (totalMarks / 300) * 100;

    // Print the summary
    printf("\n---------- Summary ----------\n");
    printf("Roll Number: %d\n", rollNo);
    printf("Name: %s\n", name);
    printf("Physics Marks: %.2f\n", physics);
    printf("Math Marks: %.2f\n", math);
    printf("Chemistry Marks: %.2f\n", chemistry);
    printf("Total Marks: %.2f\n", totalMarks);
    printf("Percentage: %.2f%%\n", percentage);

    return 0;
}
