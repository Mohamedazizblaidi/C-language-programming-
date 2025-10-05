#include <stdio.h>

int main() {
    float grade;
    
    printf("Enter a grade (0-20): ");
    scanf("%f", &grade);
    
    switch((int)(grade/2)) {
        case 10: case 9: case 8: // 20,19,18,17,16
            printf("Mention: A\n"); break;
        case 7: // 15,14
            printf("Mention: B\n"); break;
        case 6: // 13,12
            printf("Mention: C\n"); break;
        case 5: // 11,10
            printf("Mention: D\n"); break;
        default: // less than 10
            printf("Mention: F\n");
    }
    return 0;
}
