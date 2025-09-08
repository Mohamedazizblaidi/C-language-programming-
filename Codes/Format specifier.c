#include <stdio.h>

int main() {
    // Format specifier = Special tokens that begin with a % symbol,
    // followed by a character that specifies the data type
    // and optional modifiers (width, precision, flags).
    // They control how data is displayed or interpreted.
    
    // width precision flags 
    
    // Declare variables for age, price, pi, currency, and name
    int age = 25;
    float price = 19.99;
    double pi = 3.1415926535;
    char currency = '$';
    char name[] = "Mohamed aziz";
    
    // Print variables with appropriate format specifiers
    printf("Age is %d\n", age);      // Print integer age
    printf("Price is %f\n", price);  // Print float price
    printf("%lf\n", pi);            // Print long float pi
    printf("Currency is %c\n", currency); // Print character currency
    printf("My name is %s\n", name);     // Print string name
    
    printf("\n");
    printf("----- integers -----\n");
    
    // Declare integer variables
    int num1 = 1;
    int num2 = 10;
    int num3 = 100;
    
    // Print integers with default and custom width
    printf("%d\n", num1);           // Print num1
    printf("%d\n", num2);           // Print num2
    printf("%d\n", num3);           // Print num3
    printf("%3d\n", num1);          // Print num1 with width 3
    
    // %-3d: Left-align num1 in width 3.
    // %04d: Right-align num1 in width 4 with zeros.
    // %04d: Right-align num2 in width 4 with zeros.
    
    printf("%-3d\n", num1);         // Left-aligned num1 in width 3
    printf("%04d\n", num1);         // Right-aligned num1 in width 4 with zeros
    printf("%04d\n", num2);         // Right-aligned num2 in width 4 with zeros
    
    printf("\n");
    
    // +%d: Prints num1 with a + sign for positive values.
    // -%d: Prints num2 with a - sign for negative values.
    
    printf("+%d\n", num1);          // Print num1 with + sign
    printf("+%d\n", num2);          // Print num2 with + sign
    printf("+%d\n", num3);          // Print num3 with + sign
    
    printf("\n");
    printf("----- float -----\n");
    
    // Declare float variables
    float price1 = 19.99;
    float price2 = 1.50;
    float price3 = -100.00;
    
    // Print floats with default format
    printf("%f\n", price1);         // Print price1
    printf("%f\n", price2);         // Print price2
    printf("%f\n", price3);         // Print price3
    
    printf("\n");
    
    // Print floats with 2 decimal places
    printf("%.2f\n", price1);       // Print price1 with 2 decimals
    printf("%.2f\n", price2);       // Print price2 with 2 decimals
    printf("%.2f\n", price3);       // Print price3 with 2 decimals
    
    printf("\n");
    
    // Print floats with 1 decimal place
    printf("%.1f\n", price1);       // Print price1 with 1 decimal
    printf("%.1f\n", price2);       // Print price2 with 1 decimal
    printf("%.1f\n", price3);       // Print price3 with 1 decimal
    
    printf("\n");
    
    // %+7.2f: Prints price1 as a float with a + sign, width 7, and 2 decimals.
    printf("%+7.2f\n", price1);     // Print price1 with + sign, width 7, 2 decimals
    printf("%+7.2f\n", price2);     // Print price2 with + sign, width 7, 2 decimals
    printf("%+7.2f\n", price3);     // Print price3 with + sign, width 7, 2 decimals
    
    return 0;                       // Return 0 to indicate successful completion
}
