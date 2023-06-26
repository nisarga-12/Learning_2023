#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINE_SIZE 100

int main() {
    FILE *inputFile, *tempFile;
    char line[MAX_LINE_SIZE], entryNo[MAX_LINE_SIZE];
    const char* filename = "data.csv";
    
    printf("Enter the EntryNo to be deleted: ");
    fgets(entryNo, sizeof(entryNo), stdin);
    entryNo[strlen(entryNo) - 1] = '\0';
    
    inputFile = fopen(filename, "r");
    if (inputFile == NULL) {
        printf("Error opening the file.\n");
        return 1;
    }
    
    tempFile = fopen("temp.csv", "w");
    if (tempFile == NULL) {
        printf("Error creating temporary file.\n");
        fclose(inputFile);
        return 1;
    }
    
    while (fgets(line, sizeof(line), inputFile) != NULL) {
        if (strstr(line, entryNo) == NULL) {
            fputs(line, tempFile);
        }
    }
    
    fclose(inputFile);
    fclose(tempFile);
    
    if (remove(filename) != 0) {
        printf("Error deleting the file.\n");
        return 1;
    }
    
    if (rename("temp.csv", filename) != 0) {
        printf("Error renaming the file.\n");
        return 1;
    }
    
    printf("Entry deleted successfully.\n");
    
    return 0;
}
