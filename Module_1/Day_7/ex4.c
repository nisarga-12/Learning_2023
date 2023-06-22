#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int id;
    char name[50];
} Member;

void addMember(Member** members, int* count, int id, const char* name) {
    Member* newMember = (Member*)malloc(sizeof(Member));
    if (newMember == NULL) {
        printf("Memory allocation failed. Unable to add member.\n");
        return;
    }
    
    newMember->id = id;
    strncpy(newMember->name, name, sizeof(newMember->name));
    
    *members = (Member*)realloc(*members, (*count + 1) * sizeof(Member));
    if (*members == NULL) {
        printf("Memory reallocation failed. Unable to add member.\n");
        free(newMember);
        return;
    }
    
    (*members)[*count] = *newMember;
    (*count)++;
    free(newMember);
}

int main() {
    Member* members = NULL;
    int count = 0;

    addMember(&members, &count, 1, "John");
    addMember(&members, &count, 2, "Jane");
    addMember(&members, &count, 3, "Alice");

    for (int i = 0; i < count; i++) {
        printf("Member %d: ID=%d, Name=%s\n", i + 1, members[i].id, members[i].name);
    }
    free(members);

    return 0;
}
