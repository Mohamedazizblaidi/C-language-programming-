#include <stdio.h>

int main(){
    // Format specifier = Special tokens that begin with a % symbol,
    // followed by a character that specifies the data type
    // and optional modifiers (width, precision, flags).
    // They control how data is displayed or interpreted.
    
    // width precision flags 
    
    int age = 25;
    float price = 19.99;
    double pi = 3.1415926535;
    char currency ='$';
    char name[] = "Mohamed aziz";
    
    printf("Age is %d\n" , age);  // int
    printf("Price is %f\n" , price); // float
    printf("%lf\n" , pi); // long float 
    printf("Currency is %c\n" , currency); // Character
    printf("My name is %s\n" , name ); // String
    
    printf("\n");
    printf("----- integers -----\n");
    int num1 = 1;
    int num2 = 10;
    int num3 = 100;
    
    printf("%d\n" , num1);
    printf("%d\n" , num2);
    printf("%d\n" , num3);
    printf("%3d\n", num1); // 3 char
    
    // %-3d: Left-align num1 in width 3.
    // %04d: Right-align num1 in width 4 with zeros.
    // %04d: Right-align num2 in width 4 with zeros.
    
    printf("%-3d\n" , num1); 
    printf("%04d\n" , num1);
    printf("%04d\n" , num2);
    
    printf("\n");
    
    // +%d: Prints num1 with a + sign for positive values.
    // -%d: Prints num2 with a - sign for negative values.
    
    printf("+%d\n" , num1);
    printf("+%d\n" , num2);
    printf("+%d\n" , num3);
    
    printf("\n");
    printf("----- float -----\n");
    float price1 = 19.99;
    float price2 = 1.50;
    float price3 = -100.00;
    
    printf("%f\n" , price1);
    printf("%f\n" , price2);
    printf("%f\n" , price3);
    
    printf("\n");
    
    printf("%.2f\n" , price1);
    printf("%.2f\n" , price2);
    printf("%.2f\n" , price3);
    
    printf("\n");
    
    printf("%.1f\n" , price1);
    printf("%.1f\n" , price2);
    printf("%.1f\n" , price3);
    
    printf("\n");
    
    printf("%+7.2f\n", price1);
    printf("%+7.2f\n", price2);
    printf("%+7.2f\n", price3);
    
    return 0;
}
