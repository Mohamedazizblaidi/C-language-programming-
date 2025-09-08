#include <stdio.h>
#include <stdbool.h>   // For bool, true, false
#include <string.h>    // For strlen()

int main() {
    int age = 0;                    // Variable to store user's age
    bool isStudent = true;          // Example variable for student status
    char name[50] = "";             // Array to store user's name

    // --- AGE EXAMPLE ---
    printf("---- Age example ----\n");
    printf("Enter your age: ");
    scanf("%d", &age);              // Read age as integer

    // Consume the leftover newline from scanf before using fgets
    getchar();

    // Check the age category
    if (age >= 65) {
        printf("You are a senior.\n");
    } else if (age >= 18) {
        printf("You are an adult.\n");
    } else if (age < 0) {
        printf("You haven't been born yet.\n");
    } else if (age == 0) {
        printf("You are a newborn.\n");
    } else {
        printf("You are a child.\n");
    }

    // --- STUDENT EXAMPLE ---
    printf("---- Student example ----\n");
    if (isStudent == true) {
        printf("You are a student.\n");
    } else {
        printf("You are not a student.\n");
    }

    // --- NAME EXAMPLE ---
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);      // Read a line of input into name

    // Remove newline character left by fgets if it exists
    size_t len = strlen(name);
    if (len > 0 && name[len - 1] == '\n') {
        name[len - 1] = '\0';
    }

    // Check if name is empty
    if (strlen(name) == 0) {
        printf("You did not enter your name.\n");
    } else {
        printf("Hello %s!\n", name);
    }

    return 0;
}
