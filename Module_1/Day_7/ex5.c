#include <stdio.h>
#include <stdlib.h>

#define MAX_MEMBERS 100

typedef struct {
    int id;
    char name[50];
} Member;

void deleteMemberAtStart(Member* members, int* numMembers) {
    if (*numMembers == 0) {
        printf("Error: Array is empty. Cannot delete member.\n");
        return;
    }
    
    for (int i = 0; i < (*numMembers) - 1; i++) {
        members[i] = members[i + 1];
    }
    
    (*numMembers)--;
}

int main() {
    Member members[MAX_MEMBERS];
    int numMembers = 3;  // Example: initial number of members
    
    for (int i = 0; i < numMembers; i++) {
        members[i].id = i + 1;
        sprintf(members[i].name, "Member %d", i + 1);
    }
    
    printf("Members before deletion:\n");
    for (int i = 0; i < numMembers; i++) {
        printf("ID: %d, Name: %s\n", members[i].id, members[i].name);
    }
    
    deleteMemberAtStart(members, &numMembers);
    
    printf("\nMembers after deletion:\n");
    for (int i = 0; i < numMembers; i++) {
        printf("ID: %d, Name: %s\n", members[i].id, members[i].name);
    }
    
    return 0;
}
