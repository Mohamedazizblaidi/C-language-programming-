#include <stdio.h>

int main() {
    int number, i = 1, sum = 0;
    
    printf("Enter N: ");
    scanf("%d", &number);
    
    while(i <= number) {
        sum += i;
        i++;
    }
    
    printf("Sum = %d\n", sum);
    return 0;
}
