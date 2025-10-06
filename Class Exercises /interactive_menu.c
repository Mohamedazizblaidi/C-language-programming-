#include <stdio.h>

int main() {
    int choice;
    
    do {
        printf("\n=== Menu ===\n");
        printf("1. Hello\n");
        printf("2. Goodbye\n");
        printf("3. Exit\n");
        printf("Your choice: ");
        scanf("%d", &choice);
        
        switch(choice) {
            case 1: printf("Hello!\n"); break;
            case 2: printf("Goodbye!\n"); break;
            case 3: printf("End of program.\n"); break;
            default: printf("Invalid choice!\n");
        }
    } while(choice != 3);
    
    return 0;
}
