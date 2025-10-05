#include <stdio.h>

int main() {
    int choice, num1, num2;
    
    printf("1. Hello\n");
    printf("2. Addition\n");
    printf("3. Exit\n");
    printf("Your choice: ");
    scanf("%d", &choice);
    
    switch (choice) {
        case 1:
            printf("Hello!\n");
            break;
        case 2:
            printf("Enter two integers: ");
            scanf("%d %d", &num1, &num2);
            printf("Sum = %d\n", num1 + num2);
            break;
        case 3:
            printf("Goodbye.\n");
            break;
        default:
            printf("Invalid choice\n");
    }
    
    return 0;
}
