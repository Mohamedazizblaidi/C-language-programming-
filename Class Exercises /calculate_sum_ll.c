#include <stdio.h>

int main(void) {
    long long number;
    
    printf("Enter N (>= 0): ");
    if (scanf("%lld", &number) != 1) {
        printf("Error: Invalid input\n");
        return 1;
    }
    
    if (number < 0) {
        printf("Error: N must be >= 0\n");
        return 1;
    }
    
    long long sum = 0;
    for (long long i = 1; i <= number; ++i) {
        sum += i;
    }
    
    printf("Sum = %lld\n", sum);
    return 0;
}
