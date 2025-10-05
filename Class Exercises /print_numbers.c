#include <stdio.h>

int main(void) {
    for (int i = 1; i <= 10; i++) {
        printf("%d", i);
        if (i < 10) printf(" "); /* space between numbers */
    }
    printf("\n"); /* final line break */
    return 0;
}
