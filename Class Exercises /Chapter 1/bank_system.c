#include <stdio.h>

int main() {
    int choice;
    float balance = 1000, amount;
    
    do {
        printf("\n=== Bank Menu ===\n");
        printf("1. Check balance\n");
        printf("2. Deposit\n");
        printf("3. Withdrawal\n");
        printf("4. Quit\n");
        printf("Your choice: ");
        scanf("%d", &choice);
        
        switch(choice) {
            case 1:
                printf("Your balance is: %.2f\n", balance);
                break;
            case 2:
                printf("Amount to deposit: ");
                scanf("%f", &amount);
                balance += amount;
                printf("New balance: %.2f\n", balance);
                break;
            case 3:
                printf("Amount to withdraw: ");
                scanf("%f", &amount);
                if(amount <= balance) {
                    balance -= amount;
                    printf("New balance: %.2f\n", balance);
                } else {
                    printf("Insufficient balance!\n");
                }
                break;
            case 4:
                printf("Goodbye!\n");
                break;
            default:
                printf("Invalid choice!\n");
        }
    } while(choice != 4);
    
    return 0;
}
