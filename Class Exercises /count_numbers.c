#include <stdio.h>

int main(void) {
    int x;
    int positive = 0, negative = 0, zero = 0;
    
    printf("Enter 10 integers (separated by spaces or returns):\n");
    for (int i = 0; i < 10; ++i) {
        scanf("%d", &x);
        
        if (x > 0) positive++;
        else if (x < 0) negative++;
        else zero++;
    }
    
    printf("Positive: %d\n", positive);
    printf("Negative: %d\n", negative);
    printf("Zeros: %d\n", zero);
    return 0;
}
