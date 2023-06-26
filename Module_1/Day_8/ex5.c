#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINE_LENGTH 100

int main() {
    FILE *inputFile, *tempFile;
    char line[MAX_LINE_LENGTH];
    int entryNo, targetEntryNo;
    char updatedLine[MAX_LINE_LENGTH];

    printf("Enter the EntryNo to update: ");
    scanf("%d", &targetEntryNo);

    inputFile = fopen("data.csv", "r");
    if (inputFile == NULL) {
        printf("Error opening input file.\n");
        return 1;
    }

    tempFile = fopen("temp.csv", "w");
    if (tempFile == NULL) {
        printf("Error creating temporary file.\n");
        fclose(inputFile);
        return 1;
    }

    while (fgets(line, MAX_LINE_LENGTH, inputFile) != NULL) {
        sscanf(line, "%d,", &entryNo);

        if (entryNo == targetEntryNo) {
            printf("Enter the updated line: ");
            fflush(stdin);
            fgets(updatedLine, MAX_LINE_LENGTH, stdin);

            fputs(updatedLine, tempFile);
        } else {
            fputs(line, tempFile);
        }
    }

    fclose(inputFile);
    fclose(tempFile);

    remove("data.csv");

    rename("temp.csv", "data.csv");

    printf("Entry updated successfully.\n");

    return 0;
}
