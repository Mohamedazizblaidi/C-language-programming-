#include <stdio.h>

/*
    Program to convert temperature from Fahrenheit to Celsius.
    Scientific formula for conversion:
        C = (F - 32) × (5/9)

    Background:
    - The Fahrenheit scale was introduced by Daniel Gabriel Fahrenheit (18th century).
    - The Celsius scale was introduced by Anders Celsius.
    - Water freezing and boiling points:
        * In Fahrenheit: freezing = 32°F, boiling = 212°F
        * In Celsius: freezing = 0°C, boiling = 100°C
    - Interval between freezing and boiling:
        * Fahrenheit: 212 - 32 = 180 degrees
        * Celsius: 100 - 0 = 100 degrees
    - Therefore:
        * 1°C = 180/100 = 1.8°F
        * 1°F = 5/9°C
*/

int main() {
    double fahrenheit, celsius;

    // Ask the user to input a temperature in Fahrenheit
    printf("Enter temperature in Fahrenheit: ");
    scanf("%lf", &fahrenheit);

    /*
        Conversion formula explanation:
        - Subtract 32 because 32°F = 0°C (freezing point of water).
        - Multiply by 5/9 because each degree Fahrenheit is equal to 5/9 of a Celsius degree.
    */
    celsius = (fahrenheit - 32) * 5.0 / 9.0;

    // Display the result of the conversion
    printf("%.2lf Fahrenheit = %.2lf Celsius\n", fahrenheit, celsius);

    return 0;
}
