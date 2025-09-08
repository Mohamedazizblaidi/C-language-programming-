#include <stdio.h>

int main() {
    // arithmetic operators = + - * / % ++ -- 
    // relational operators = == != > < >= <=
    // logical operators = && || !
    // assignment operators = = += -= *= /= %=

    // Initialize integer variable x
    int x = 2;
    // Initialize float variable y (changed from int to float for division compatibility)
    float y = 3;
    // Initialize result variables
    int z = 0;
    int M = 0;
    int S = 0;
    int F = 0;
    // Initialize float variable D (changed from int to float for decimal result)
    float D = 0;
    int P = 0;
    
    // Perform arithmetic operations
    S = x + y;  // Addition of x and y
    M = x - y;  // Subtraction of y from x
    F = x * y;  // Multiplication of x and y
    D = x / y;  // Division of x by y
    P = x % x;  // Modulus of x by x (remainder)
    
    // Print results of arithmetic operations
    printf("S = %d\n", S);  // Print sum
    printf("M = %d\n", M);  // Print difference
    printf("F = %d\n", F);  // Print product
    printf("D = %f\n", D);  // Print quotient
    printf("P = %d\n", P);  // Print remainder
    
    // Demonstrate increment and compound assignment operators
    x++;         // Increment x by 1
    printf("x = %d\n", x);  // Print incremented x
    x--;         // Decrement x by 1
    printf("x = %d\n", x);  // Print decremented x
    x += 2;      // Add 2 to x
    printf("x = %d\n", x);  // Print x after addition
    x -= 2;      // Subtract 2 from x
    printf("x = %d\n", x);  // Print x after subtraction
    x *= 2;      // Multiply x by 2
    printf("x = %d\n", x);  // Print x after multiplication
    x /= 2;      // Divide x by 2
    printf("x = %d\n", x);  // Print x after division
    x %= 2;      // Modulus x by 2
    printf("x = %d\n", x);  // Print x after modulus
    
    // Declare additional variables for relational and logical operations
    int a = 5;
    int b = 3;
    int result = 0;
    
    // Perform relational operations
    result = (a == b);  // Check if a equals b
    printf("a == b: %d\n", result);  // Print result of equality
    result = (a != b);  // Check if a is not equal to b
    printf("a != b: %d\n", result);  // Print result of inequality
    result = (a > b);   // Check if a is greater than b
    printf("a > b: %d\n", result);   // Print result of greater than
    result = (a < b);   // Check if a is less than b
    printf("a < b: %d\n", result);   // Print result of less than
    result = (a >= b);  // Check if a is greater than or equal to b
    printf("a >= b: %d\n", result);  // Print result of greater than or equal
    result = (a <= b);  // Check if a is less than or equal to b
    printf("a <= b: %d\n", result);  // Print result of less than or equal
    
    // Perform logical operations
    result = (a > 0 && b > 0);  // Logical AND: true if both a and b are positive
    printf("a > 0 && b > 0: %d\n", result);  // Print result of AND
    result = (a > 0 || b < 0);  // Logical OR: true if either a or b condition is true
    printf("a > 0 || b < 0: %d\n", result);  // Print result of OR
    result = !(a > b);          // Logical NOT: negates the condition a > b
    printf("!(a > b): %d\n", result);        // Print result of NOT
    
    return 0;    // Return 0 to indicate successful completion
}
