#include <stdio.h>
#include <string.h>

int main() {
    // Declare variables for age, GPA, grade, and name
    int age = 0;
    float gpa = 0.0f;
    char grade = '\0';
    char name[30] = "";
    
    // Prompt and read user input for age
    printf("Enter your age : ");
    scanf("%d", &age);
    
    // Prompt and read user input for GPA
    printf("Enter your gpa : ");
    scanf("%f", &gpa);
    
    // Prompt and read user input for grade (space before %c to consume newline)
    printf("Enter your grade : ");
    scanf(" %c", &grade);
    getchar();  // Consume the newline character left in the input buffer
    
    // Prompt and read user input for full name
    printf("Enter your full name :  ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name)-1] = '\0';  // Remove the trailing newline character
    
    // Print the entered values
    printf("%d\n", age);    // Print age
    printf("%f\n", gpa);    // Print GPA
    printf("%c\n", grade);  // Print grade
    printf("%s\n", name);   // Print name
    
    return 0;    // Return 0 to indicate successful completion
}
