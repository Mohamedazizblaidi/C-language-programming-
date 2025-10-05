#include <stdio.h>

int main() {
    int number, sum = 0;
    
    printf("Enter an integer N: ");
    scanf("%d", &number);
    
    for (int i = 1; i <= number; i++) {
        sum += i;
    }
    
    printf("Sum = %d\n", sum);
    return 0;
}
