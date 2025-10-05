if (grade >= 16) {
    printf("Excellent\n");
} else if (grade >= 10) {
    printf("Good\n");
} else {
    printf("Fail\n");
}


#include <stdio.h>

int main() {
    int grade;
    
    printf("Enter your grade: ");
    scanf("%d", &grade);
    
    if (grade >= 16) {
        printf("Excellent\n");
    } else if (grade >= 10) {
        printf("Good\n");
    } else {
        printf("Fail\n");
    }
    
    return 0;
}
