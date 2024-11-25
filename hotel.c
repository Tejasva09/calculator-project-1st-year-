#include <stdio.h>
#include <string.h>

#define MAX_ENTRIES 100 // Maximum number of hotel entries

struct hotel {
    char name[40];
    int phone_number;
    int age;
    int days;
    int live;
    int room;
};

// Function to print hotel details
void printhotel(struct hotel entry) {
    printf("\n--- Hotel Entry Details ---\n");
    printf("Name: %s\n", entry.name);
    printf("Phone Number: %d\n", entry.phone_number);
    printf("Room Number: %d\n", entry.room);
    printf("Age: %d\n", entry.age);
    printf("Number of Persons: %d\n", entry.live);
    printf("Days of Stay: %d\n", entry.days);
}

int main() {
    struct hotel entries[MAX_ENTRIES]; // Array to store hotel entries
    int entry_count = 0; // Count of entries
    char c;

    do {
        // Check if we can add more entries
        if (entry_count >= MAX_ENTRIES) {
            printf("Maximum entries reached. Cannot add more.\n");
            break;
        }

        // Input hotel details
        printf("Enter the name: ");
        fgets(entries[entry_count].name, sizeof(entries[entry_count].name), stdin);
        entries[entry_count].name[strcspn(entries[entry_count].name, "\n")] = 0; // Remove newline

        printf("How many persons came with you: ");
        scanf("%d", &entries[entry_count].live);
        printf("How many rooms do you want to issue: ");
        scanf("%d", &entries[entry_count].room);
        printf("Your phone number: ");
        scanf("%d", &entries[entry_count].phone_number);
        printf("How many days do you want to stay: ");
        scanf("%d", &entries[entry_count].days);
        printf("What is your age: ");
        scanf("%d", &entries[entry_count].age);
        
        // Increment entry count
        entry_count++;

        // Ask if the user wants to continue
        printf("Do you want to continue the entry (y/n): ");
        getchar(); // To consume the newline character left by previous scanf
        scanf("%c", &c);
    } while (c == 'y');

    // Print details of all entries
    for (int i = 0; i < entry_count; i++) {
        printf("\n--- Entry %d ---\n", i + 1);
        printhotel(entries[i]);
    }

    return 0;
}