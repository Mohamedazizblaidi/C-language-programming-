#include <stdio.h>

int main(void) {
    double length, width;
    
    printf("Enter length and width (ex: 3.5 2.0): ");
    scanf("%lf %lf", &length, &width);
    
    double area = length * width;
    printf("Area = %.2f\n", area);
    
    return 0;
}
