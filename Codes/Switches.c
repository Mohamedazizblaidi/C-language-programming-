#include <stdio.h>

int main() {
    // --- Example 1: Using integer for day of the week ---
    int dayofweek = 0;  // Variable to store the day of the week (1–7)

    // Ask the user to input a number representing the day of the week
    printf("Enter a day of the week (1-7): ");
    scanf("%d", &dayofweek);

    // Switch-case to match the number to a day name
    switch (dayofweek) {
        case 1:
            printf("Monday (M)\n");
            break;
        case 2:
            printf("Tuesday (T)\n");
            break;
        case 3:
            printf("Wednesday (W)\n");
            break;
        case 4:
            printf("Thursday (H)\n");
            break;
        case 5:
            printf("Friday (F)\n");
            break;
        case 6:
            printf("Saturday (S)\n");
            break;
        case 7:
            printf("Sunday (U)\n");
            break;
        default:
            printf("Invalid day of the week. Please enter a number between 1 and 7.\n");
            break;
    }

    // Clear input buffer before reading character
    while (getchar() != '\n'); // Remove leftover newline from previous scanf

    // --- Example 2: Using character for day of the week ---
    char day;  // Variable to store a single character

    printf("\nEnter a character for the day of the week (M,T,W,H,F,S,U): ");
    scanf("%c", &day);

    // Switch-case to match the character to a day name
    switch (day) {
        case 'M': case 'm':
            printf("Monday (M)\n");
            break;
        case 'T': case 't':
            printf("Tuesday (T)\n");
            break;
        case 'W': case 'w':
            printf("Wednesday (W)\n");
            break;
        case 'H': case 'h':
            printf("Thursday (H)\n");
            break;
        case 'F': case 'f':
            printf("Friday (F)\n");
            break;
        case 'S': case 's':
            printf("Saturday (S)\n");
            break;
        case 'U': case 'u':
            printf("Sunday (U)\n");
            break;
        default:
            printf("Invalid day character. Please use M,T,W,H,F,S,U.\n");
            break;
    }

    return 0; // Successful program execution
}
