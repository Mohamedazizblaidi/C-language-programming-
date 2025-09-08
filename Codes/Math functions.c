#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
    // Initialize integer variable x
    int x = 9 ;
    // Initialize integer variable y
    int y = 5 ; 
    // Initialize float variable z
    float z  = 3.14;
    // Initialize float variable c
    float c = 5.75;
    // Initialize float variable f
    float f = 3.99;
    // Initialize integer variable a
    int a = -16;
    // Initialize float variable l
    float l = 3;
    // Initialize float variable si
    float si = 45;
    // Initialize float variable co
    float co = 0;
    // Initialize float variable t
    float t =0;
    
    // Assign square root of x to x
    x = sqrt(x);
    printf("square root is : %d\n" , x);
    
    // Assign y raised to power 2 to y
    y = pow(y,2);
    printf("The power result is : %d\n", y);
    
    // Assign rounded value of x to z
    z = round(x);
    printf("The round result is : %f\n", z);
    
    // Assign ceiling value of c to c
    c = ceil(c);
    printf("Ceil result is : %f\n" , c);
    
    // Assign floor value of f to f
    f = floor(f);
    printf("Floor result is : %f\n" , f);
    
    // Assign absolute value of a to a
    a = abs(a);
    printf("Abs result is : %d\n" , a);
    
    // Assign natural logarithm of l to l
    l= log(l);
    printf("Log result : %f\n" , f);  // Note: Prints f instead of l
    
    // Assign sine of si to si
    si = sin(si);
    printf("Value of sin is : %f\n" , si);
    
    // Assign cosine of co to co
    co = cos(co);
    printf("Value of cos is :  %f\n" , co);
    
    // Assign tangent of t to t
    t = tan(t);
    printf("Value of tan is : %f" , t);
    
    return 0;
}
