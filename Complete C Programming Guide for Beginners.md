# Complete C Programming Guide for Beginners

## Table of Contents
1. [Introduction to C](#introduction-to-c)
2. [Setting Up Development Environment](#setting-up-development-environment)
3. [Basic Structure of a C Program](#basic-structure-of-a-c-program)
4. [Data Types and Variables](#data-types-and-variables)
5. [Input and Output](#input-and-output)
6. [Operators](#operators)
7. [Control Flow](#control-flow)
8. [Functions](#functions)
9. [Arrays](#arrays)
10. [Strings](#strings)
11. [Pointers](#pointers)
12. [Structures](#structures)
13. [File Handling](#file-handling)
14. [Memory Management](#memory-management)
15. [Common Mistakes and Best Practices](#common-mistakes-and-best-practices)
16. [Practice Exercises](#practice-exercises)

---

## Introduction to C

C is a general-purpose programming language developed by Dennis Ritchie at Bell Labs in 1972. It's known for:
- **Efficiency**: Close to machine language performance
- **Portability**: Code can run on different platforms
- **Flexibility**: Suitable for system programming and applications
- **Foundation**: Many modern languages are based on C

### Why Learn C?
- Understanding computer fundamentals
- Foundation for other languages (C++, Java, C#)
- System programming and embedded systems
- Performance-critical applications

---

## Setting Up Development Environment

### Windows
1. **Install Code::Blocks or Dev-C++** (includes GCC compiler)
2. **Or install MinGW-w64** + text editor like VS Code
3. **Or use online compilers** like repl.it or onlinegdb.com

### Linux/Mac
```bash
# Install GCC compiler
sudo apt install gcc        # Ubuntu/Debian
brew install gcc            # macOS with Homebrew

# Compile and run
gcc program.c -o program
./program
```

---

## Basic Structure of a C Program

```c
#include <stdio.h>    // Preprocessor directive

int main() {          // Main function
    printf("Hello, World!\n");
    return 0;         // Return statement
}
```

### Components Explained:
- `#include <stdio.h>`: Includes standard input/output library
- `int main()`: Entry point of the program
- `{}`: Code block delimiters
- `printf()`: Function to display output
- `return 0;`: Indicates successful program termination
- `;`: Statement terminator

---

## Data Types and Variables

### Basic Data Types

| Type | Size (bytes) | Range | Format Specifier |
|------|--------------|-------|------------------|
| `char` | 1 | -128 to 127 | `%c` |
| `int` | 4 | -2,147,483,648 to 2,147,483,647 | `%d` |
| `float` | 4 | 6 decimal places | `%f` |
| `double` | 8 | 15 decimal places | `%lf` |

### Variable Declaration and Initialization

```c
#include <stdio.h>

int main() {
    // Declaration
    int age;
    float height;
    char grade;
    
    // Initialization
    age = 25;
    height = 5.8;
    grade = 'A';
    
    // Declaration + Initialization
    int score = 95;
    double pi = 3.14159;
    
    printf("Age: %d\n", age);
    printf("Height: %.1f\n", height);
    printf("Grade: %c\n", grade);
    
    return 0;
}
```

### Constants

```c
#define PI 3.14159        // Preprocessor constant
const int MAX_SIZE = 100; // Constant variable
```

---

## Input and Output

### Output Functions

```c
printf("Hello World");           // Basic output
printf("Number: %d\n", 42);      // Formatted output
printf("Float: %.2f\n", 3.14);   // 2 decimal places
putchar('A');                    // Single character
puts("Hello World");             // String with newline
```

### Input Functions

```c
#include <stdio.h>

int main() {
    int num;
    float decimal;
    char ch;
    char name[50];
    
    // Reading different data types
    printf("Enter an integer: ");
    scanf("%d", &num);
    
    printf("Enter a float: ");
    scanf("%f", &decimal);
    
    printf("Enter a character: ");
    scanf(" %c", &ch);  // Space before %c
    
    printf("Enter your name: ");
    scanf("%s", name);  // No & for strings
    
    printf("You entered: %d, %.2f, %c, %s\n", 
           num, decimal, ch, name);
    
    return 0;
}
```

---

## Operators

### Arithmetic Operators

```c
int a = 10, b = 3;

int sum = a + b;        // Addition: 13
int diff = a - b;       // Subtraction: 7
int product = a * b;    // Multiplication: 30
int quotient = a / b;   // Division: 3 (integer division)
int remainder = a % b;  // Modulus: 1
```

### Comparison Operators

```c
a == b    // Equal to
a != b    // Not equal to
a > b     // Greater than
a < b     // Less than
a >= b    // Greater than or equal to
a <= b    // Less than or equal to
```

### Logical Operators

```c
&&    // AND
||    // OR
!     // NOT

// Example
if (age >= 18 && age <= 65) {
    printf("Eligible for work\n");
}
```

### Assignment Operators

```c
int x = 10;
x += 5;    // x = x + 5; (15)
x -= 3;    // x = x - 3; (12)
x *= 2;    // x = x * 2; (24)
x /= 4;    // x = x / 4; (6)
x %= 3;    // x = x % 3; (0)
```

### Increment/Decrement Operators

```c
int i = 5;
i++;       // Post-increment: use then increment
++i;       // Pre-increment: increment then use
i--;       // Post-decrement
--i;       // Pre-decrement
```

---

## Control Flow

### If-Else Statements

```c
#include <stdio.h>

int main() {
    int score;
    printf("Enter your score: ");
    scanf("%d", &score);
    
    if (score >= 90) {
        printf("Grade A\n");
    } else if (score >= 80) {
        printf("Grade B\n");
    } else if (score >= 70) {
        printf("Grade C\n");
    } else if (score >= 60) {
        printf("Grade D\n");
    } else {
        printf("Grade F\n");
    }
    
    return 0;
}
```

### Switch Statement

```c
#include <stdio.h>

int main() {
    char operator;
    float num1, num2;
    
    printf("Enter operator (+, -, *, /): ");
    scanf("%c", &operator);
    
    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);
    
    switch (operator) {
        case '+':
            printf("%.2f + %.2f = %.2f\n", num1, num2, num1 + num2);
            break;
        case '-':
            printf("%.2f - %.2f = %.2f\n", num1, num2, num1 - num2);
            break;
        case '*':
            printf("%.2f * %.2f = %.2f\n", num1, num2, num1 * num2);
            break;
        case '/':
            if (num2 != 0) {
                printf("%.2f / %.2f = %.2f\n", num1, num2, num1 / num2);
            } else {
                printf("Error: Division by zero!\n");
            }
            break;
        default:
            printf("Invalid operator!\n");
    }
    
    return 0;
}
```

### Loops

#### For Loop

```c
#include <stdio.h>

int main() {
    // Print numbers 1 to 10
    for (int i = 1; i <= 10; i++) {
        printf("%d ", i);
    }
    printf("\n");
    
    // Multiplication table
    int num = 5;
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }
    
    return 0;
}
```

#### While Loop

```c
#include <stdio.h>

int main() {
    int num, sum = 0;
    
    printf("Enter numbers (0 to stop): ");
    scanf("%d", &num);
    
    while (num != 0) {
        sum += num;
        scanf("%d", &num);
    }
    
    printf("Sum: %d\n", sum);
    return 0;
}
```

#### Do-While Loop

```c
#include <stdio.h>

int main() {
    int choice;
    
    do {
        printf("\n1. Option 1\n");
        printf("2. Option 2\n");
        printf("3. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                printf("You chose Option 1\n");
                break;
            case 2:
                printf("You chose Option 2\n");
                break;
            case 3:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice!\n");
        }
    } while (choice != 3);
    
    return 0;
}
```

---

## Functions

### Basic Function Structure

```c
#include <stdio.h>

// Function declaration (prototype)
int add(int a, int b);
void greet(void);
float calculateArea(float radius);

int main() {
    int result = add(5, 3);
    printf("5 + 3 = %d\n", result);
    
    greet();
    
    float area = calculateArea(5.0);
    printf("Area of circle: %.2f\n", area);
    
    return 0;
}

// Function definitions
int add(int a, int b) {
    return a + b;
}

void greet(void) {
    printf("Hello from function!\n");
}

float calculateArea(float radius) {
    return 3.14159 * radius * radius;
}
```

### Function Parameters

```c
// Pass by value
void modify(int x) {
    x = 100;  // Original variable unchanged
}

// Pass by reference (using pointers)
void modifyRef(int *x) {
    *x = 100;  // Original variable changed
}

int main() {
    int num = 10;
    
    modify(num);
    printf("After modify(): %d\n", num);      // 10
    
    modifyRef(&num);
    printf("After modifyRef(): %d\n", num);   // 100
    
    return 0;
}
```

### Recursive Functions

```c
#include <stdio.h>

// Factorial using recursion
int factorial(int n) {
    if (n <= 1) {
        return 1;  // Base case
    }
    return n * factorial(n - 1);  // Recursive case
}

// Fibonacci sequence
int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    printf("5! = %d\n", factorial(5));
    printf("Fibonacci(7) = %d\n", fibonacci(7));
    return 0;
}
```

---

## Arrays

### One-Dimensional Arrays

```c
#include <stdio.h>

int main() {
    // Declaration and initialization
    int numbers[5] = {1, 2, 3, 4, 5};
    int scores[3];  // Uninitialized array
    
    // Assigning values
    scores[0] = 85;
    scores[1] = 92;
    scores[2] = 78;
    
    // Printing array elements
    printf("Numbers: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");
    
    // Finding sum and average
    int sum = 0;
    for (int i = 0; i < 3; i++) {
        sum += scores[i];
    }
    printf("Average score: %.2f\n", sum / 3.0);
    
    return 0;
}
```

### Two-Dimensional Arrays

```c
#include <stdio.h>

int main() {
    // 3x3 matrix
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    
    // Print matrix
    printf("Matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    
    // Matrix addition
    int matrix2[3][3] = {
        {9, 8, 7},
        {6, 5, 4},
        {3, 2, 1}
    };
    
    int result[3][3];
    printf("\nSum of matrices:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            result[i][j] = matrix[i][j] + matrix2[i][j];
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
```

---

## Strings

### String Basics

```c
#include <stdio.h>
#include <string.h>

int main() {
    // String declaration and initialization
    char str1[20] = "Hello";
    char str2[] = "World";
    char str3[20];
    
    // String input
    printf("Enter a string: ");
    scanf("%s", str3);  // Doesn't read spaces
    
    // Or use fgets for strings with spaces
    char sentence[100];
    printf("Enter a sentence: ");
    getchar();  // Consume newline
    fgets(sentence, sizeof(sentence), stdin);
    
    // String functions
    printf("Length of str1: %lu\n", strlen(str1));
    
    // String concatenation
    strcat(str1, " ");
    strcat(str1, str2);
    printf("Concatenated: %s\n", str1);
    
    // String comparison
    if (strcmp(str1, "Hello World") == 0) {
        printf("Strings are equal\n");
    }
    
    // String copy
    char copy[20];
    strcpy(copy, str1);
    printf("Copied string: %s\n", copy);
    
    return 0;
}
```

### String Manipulation Examples

```c
#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Function to reverse a string
void reverseString(char str[]) {
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - 1 - i];
        str[len - 1 - i] = temp;
    }
}

// Function to count vowels
int countVowels(char str[]) {
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]);
        if (ch == 'a' || ch == 'e' || ch == 'i' || 
            ch == 'o' || ch == 'u') {
            count++;
        }
    }
    return count;
}

int main() {
    char text[100] = "Programming";
    
    printf("Original: %s\n", text);
    printf("Vowels: %d\n", countVowels(text));
    
    reverseString(text);
    printf("Reversed: %s\n", text);
    
    return 0;
}
```

---

## Pointers

### Pointer Basics

```c
#include <stdio.h>

int main() {
    int num = 42;
    int *ptr;  // Pointer declaration
    
    ptr = &num;  // Assign address of num to ptr
    
    printf("Value of num: %d\n", num);
    printf("Address of num: %p\n", &num);
    printf("Value of ptr: %p\n", ptr);
    printf("Value pointed to by ptr: %d\n", *ptr);
    
    // Modifying value through pointer
    *ptr = 100;
    printf("New value of num: %d\n", num);
    
    return 0;
}
```

### Pointers and Arrays

```c
#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int *p = arr;  // Array name is a pointer
    
    // Accessing array elements using pointers
    for (int i = 0; i < 5; i++) {
        printf("arr[%d] = %d, *(p+%d) = %d\n", 
               i, arr[i], i, *(p + i));
    }
    
    // Pointer arithmetic
    p++;  // Points to arr[1]
    printf("After p++: *p = %d\n", *p);
    
    return 0;
}
```

### Pointers and Functions

```c
#include <stdio.h>

// Swap function using pointers
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Function to find min and max
void findMinMax(int arr[], int size, int *min, int *max) {
    *min = *max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < *min) *min = arr[i];
        if (arr[i] > *max) *max = arr[i];
    }
}

int main() {
    int x = 10, y = 20;
    printf("Before swap: x = %d, y = %d\n", x, y);
    swap(&x, &y);
    printf("After swap: x = %d, y = %d\n", x, y);
    
    int numbers[] = {5, 2, 8, 1, 9};
    int min, max;
    findMinMax(numbers, 5, &min, &max);
    printf("Min: %d, Max: %d\n", min, max);
    
    return 0;
}
```

---

## Structures

### Basic Structure Usage

```c
#include <stdio.h>
#include <string.h>

// Structure definition
struct Student {
    int id;
    char name[50];
    float gpa;
};

int main() {
    // Structure variable declaration
    struct Student student1;
    
    // Assigning values
    student1.id = 101;
    strcpy(student1.name, "John Doe");
    student1.gpa = 3.75;
    
    // Structure initialization
    struct Student student2 = {102, "Jane Smith", 3.90};
    
    printf("Student 1: ID=%d, Name=%s, GPA=%.2f\n",
           student1.id, student1.name, student1.gpa);
    
    printf("Student 2: ID=%d, Name=%s, GPA=%.2f\n",
           student2.id, student2.name, student2.gpa);
    
    return 0;
}
```

### Array of Structures

```c
#include <stdio.h>
#include <string.h>

struct Book {
    int id;
    char title[100];
    char author[50];
    float price;
};

int main() {
    struct Book library[3] = {
        {1, "The C Programming Language", "Kernighan & Ritchie", 45.99},
        {2, "Data Structures", "Weiss", 89.50},
        {3, "Algorithms", "Cormen", 120.00}
    };
    
    printf("Library Books:\n");
    printf("%-3s %-30s %-20s %s\n", "ID", "Title", "Author", "Price");
    printf("------------------------------------------------------------\n");
    
    for (int i = 0; i < 3; i++) {
        printf("%-3d %-30s %-20s $%.2f\n",
               library[i].id, library[i].title,
               library[i].author, library[i].price);
    }
    
    return 0;
}
```

### Pointers to Structures

```c
#include <stdio.h>

struct Point {
    int x, y;
};

void printPoint(struct Point *p) {
    printf("Point: (%d, %d)\n", p->x, p->y);
    // p->x is equivalent to (*p).x
}

int main() {
    struct Point p1 = {10, 20};
    struct Point *ptr = &p1;
    
    printPoint(ptr);
    
    // Modify through pointer
    ptr->x = 30;
    ptr->y = 40;
    
    printPoint(ptr);
    
    return 0;
}
```

---

## File Handling

### Basic File Operations

```c
#include <stdio.h>

int main() {
    FILE *file;
    char filename[] = "sample.txt";
    char buffer[100];
    
    // Writing to file
    file = fopen(filename, "w");
    if (file == NULL) {
        printf("Error opening file for writing!\n");
        return 1;
    }
    
    fprintf(file, "Hello, File!\n");
    fprintf(file, "This is line 2.\n");
    fprintf(file, "Number: %d\n", 42);
    fclose(file);
    
    // Reading from file
    file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error opening file for reading!\n");
        return 1;
    }
    
    printf("File contents:\n");
    while (fgets(buffer, sizeof(buffer), file) != NULL) {
        printf("%s", buffer);
    }
    fclose(file);
    
    return 0;
}
```

### File Modes

```c
/*
File Modes:
"r"  - Read only
"w"  - Write only (creates new file or overwrites)
"a"  - Append (write at end of file)
"r+" - Read and write
"w+" - Read and write (creates new or overwrites)
"a+" - Read and append
*/
```

### Student Record Management Example

```c
#include <stdio.h>
#include <string.h>

struct Student {
    int id;
    char name[50];
    float gpa;
};

void writeStudents() {
    FILE *file = fopen("students.txt", "w");
    struct Student students[3] = {
        {101, "Alice Johnson", 3.85},
        {102, "Bob Smith", 3.62},
        {103, "Carol Davis", 3.91}
    };
    
    for (int i = 0; i < 3; i++) {
        fprintf(file, "%d %s %.2f\n",
                students[i].id, students[i].name, students[i].gpa);
    }
    fclose(file);
}

void readStudents() {
    FILE *file = fopen("students.txt", "r");
    struct Student student;
    
    printf("Student Records:\n");
    printf("%-5s %-15s %s\n", "ID", "Name", "GPA");
    printf("---------------------------\n");
    
    while (fscanf(file, "%d %s %f",
                  &student.id, student.name, &student.gpa) == 3) {
        printf("%-5d %-15s %.2f\n",
               student.id, student.name, student.gpa);
    }
    fclose(file);
}

int main() {
    writeStudents();
    readStudents();
    return 0;
}
```

---

## Memory Management

### Dynamic Memory Allocation

```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Enter number of integers: ");
    scanf("%d", &n);
    
    // Allocate memory for n integers
    int *ptr = (int *)malloc(n * sizeof(int));
    
    if (ptr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }
    
    // Input values
    printf("Enter %d integers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &ptr[i]);
    }
    
    // Calculate sum
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += ptr[i];
    }
    
    printf("Sum: %d\n", sum);
    printf("Average: %.2f\n", (float)sum / n);
    
    // Free allocated memory
    free(ptr);
    ptr = NULL;  // Good practice
    
    return 0;
}
```

### Memory Allocation Functions

```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    // malloc - allocates uninitialized memory
    int *arr1 = (int *)malloc(5 * sizeof(int));
    
    // calloc - allocates zero-initialized memory
    int *arr2 = (int *)calloc(5, sizeof(int));
    
    // realloc - resize allocated memory
    arr1 = (int *)realloc(arr1, 10 * sizeof(int));
    
    if (arr1 && arr2) {
        // Use arrays
        for (int i = 0; i < 5; i++) {
            arr1[i] = i + 1;
            printf("arr1[%d] = %d, arr2[%d] = %d\n",
                   i, arr1[i], i, arr2[i]);
        }
    }
    
    // Free memory
    free(arr1);
    free(arr2);
    
    return 0;
}
```

---

## Common Mistakes and Best Practices

### Common Mistakes to Avoid

```c
// 1. Uninitialized variables
int x;              // Bad: uninitialized
int x = 0;          // Good: initialized

// 2. Array bounds
int arr[5];
arr[5] = 10;        // Bad: out of bounds
arr[4] = 10;        // Good: within bounds

// 3. Infinite loops
for (int i = 0; i < 10; i--) {  // Bad: infinite loop
    // code
}

// 4. Missing break in switch
switch (choice) {
    case 1:
        printf("One");  // Bad: missing break
    case 2:
        printf("Two");
        break;
}

// 5. Memory leaks
int *ptr = malloc(100 * sizeof(int));
// Bad: forgot to call free(ptr)

// 6. Comparing strings with ==
char str1[] = "hello";
char str2[] = "hello";
if (str1 == str2) {         // Bad: compares addresses
    // This won't work
}
if (strcmp(str1, str2) == 0) {  // Good: compares content
    // This works
}
```

### Best Practices

```c
// 1. Use meaningful variable names
int a, b, c;                    // Bad
int length, width, area;        // Good

// 2. Initialize variables
int count = 0;
float average = 0.0;
char *name = NULL;

// 3. Use const for constants
const int MAX_SIZE = 100;
const float PI = 3.14159;

// 4. Check return values
FILE *file = fopen("data.txt", "r");
if (file == NULL) {
    printf("Error opening file\n");
    return 1;
}

// 5. Free dynamically allocated memory
int *ptr = malloc(sizeof(int) * 10);
if (ptr != NULL) {
    // use ptr
    free(ptr);
    ptr = NULL;
}

// 6. Use functions to avoid code repetition
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
```

---

## Practice Exercises

### Beginner Level

1. **Hello World Variations**
   - Print your name and age
   - Create a simple calculator for two numbers
   - Convert temperature (Celsius to Fahrenheit)

2. **Control Flow Practice**
   - Check if a number is even or odd
   - Find the largest of three numbers
   - Print multiplication table for any number

3. **Loop Exercises**
   - Print first N natural numbers
   - Calculate factorial of a number
   - Print patterns (stars, numbers)

### Intermediate Level

4. **Array Problems**
   - Find maximum and minimum in an array
   - Reverse an array
   - Search for an element in an array

5. **String Manipulations**
   - Count characters in a string
   - Check if a string is palindrome
   - Convert string to uppercase/lowercase

6. **Function Practice**
   - Create a function to check prime numbers
   - Implement recursive fibonacci
   - Create functions for array operations

### Advanced Level

7. **Structure Applications**
   - Student management system
   - Library book management
   - Employee database

8. **File Operations**
   - Read numbers from file and find average
   - Copy contents from one file to another
   - Count words and lines in a text file

9. **Pointer Challenges**
   - Implement dynamic arrays
   - Create linked list basics
   - Matrix operations using pointers

### Sample Solutions

#### Prime Number Check
```c
#include <stdio.h>

int isPrime(int num) {
    if (num <= 1) return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0;
    }
    return 1;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    if (isPrime(num)) {
        printf("%d is prime\n", num);
    } else {
        printf("%d is not prime\n", num);
    }
    
    return 0;
}
```

#### Palindrome String Check
```c
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isPalindrome(char str[]) {
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        if (tolower(str[i]) != tolower(str[len - 1 - i])) {
            return 0;
        }
    }
    return 1;
}

int main() {
    char word[100];
    printf("Enter a word: ");
    scanf("%s", word);
    
    if (isPalindrome(word)) {
        printf("'%s' is a palindrome\n", word);
    } else {
        printf("'%s' is not a palindrome\n", word);
    }
    
    return 0;
}
```

#### Simple Student Management System
```c
#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 50

struct Student {
    int id;
    char name[50];
    float gpa;
};

struct Student students[MAX_STUDENTS];
int studentCount = 0;

void addStudent() {
    if (studentCount >= MAX_STUDENTS) {
        printf("Cannot add more students!\n");
        return;
    }
    
    printf("Enter student ID: ");
    scanf("%d", &students[studentCount].id);
    
    printf("Enter student name: ");
    scanf("%s", students[studentCount].name);
    
    printf("Enter student GPA: ");
    scanf("%f", &students[studentCount].gpa);
    
    studentCount++;
    printf("Student added successfully!\n");
}

void displayStudents() {
    if (studentCount == 0) {
        printf("No students found!\n");
        return;
    }
    
    printf("\nStudent List:\n");
    printf("%-5s %-20s %s\n", "ID", "Name", "GPA");
    printf("--------------------------------\n");
    
    for (int i = 0; i < studentCount; i++) {
        printf("%-5d %-20s %.2f\n",
               students[i].id, students[i].name, students[i].gpa);
    }
}

void searchStudent() {
    int searchId;
    printf("Enter student ID to search: ");
    scanf("%d", &searchId);
    
    for (int i = 0; i < studentCount; i++) {
        if (students[i].id == searchId) {
            printf("Student found:\n");
            printf("ID: %d, Name: %s, GPA: %.2f\n",
                   students[i].id, students[i].name, students[i].gpa);
            return;
        }
    }
    printf("Student with ID %d not found!\n", searchId);
}

int main() {
    int choice;
    
    do {
        printf("\n=== Student Management System ===\n");
        printf("1. Add Student\n");
        printf("2. Display All Students\n");
        printf("3. Search Student\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                addStudent();
                break;
            case 2:
                displayStudents();
                break;
            case 3:
                searchStudent();
                break;
            case 4:
                printf("Goodbye!\n");
                break;
            default:
                printf("Invalid choice!\n");
        }
    } while (choice != 4);
    
    return 0;
}
```

---

## Advanced Topics (Brief Overview)

### Preprocessor Directives

```c
// Macro definitions
#define PI 3.14159
#define SQUARE(x) ((x) * (x))
#define MAX(a, b) ((a) > (b) ? (a) : (b))

// Conditional compilation
#ifdef DEBUG
    #define PRINT_DEBUG(x) printf("Debug: %s\n", x)
#else
    #define PRINT_DEBUG(x)
#endif

// Include guards
#ifndef MYHEADER_H
#define MYHEADER_H
// header content
#endif

int main() {
    int radius = 5;
    float area = PI * SQUARE(radius);
    printf("Area: %.2f\n", area);
    
    int max_val = MAX(10, 20);
    printf("Max: %d\n", max_val);
    
    PRINT_DEBUG("This is a debug message");
    
    return 0;
}
```

### Enumerations

```c
#include <stdio.h>

enum Color {
    RED,      // 0
    GREEN,    // 1
    BLUE      // 2
};

enum Status {
    FAILED = -1,
    SUCCESS = 0,
    PENDING = 1
};

int main() {
    enum Color favoriteColor = BLUE;
    enum Status taskStatus = SUCCESS;
    
    printf("Favorite color code: %d\n", favoriteColor);
    printf("Task status: %d\n", taskStatus);
    
    if (taskStatus == SUCCESS) {
        printf("Task completed successfully!\n");
    }
    
    return 0;
}
```

### Typedef

```c
#include <stdio.h>

// Type aliases
typedef unsigned int uint;
typedef char* string;

// Structure typedef
typedef struct {
    int x, y;
} Point;

// Function pointer typedef
typedef int (*Operation)(int, int);

int add(int a, int b) { return a + b; }
int multiply(int a, int b) { return a * b; }

int main() {
    uint age = 25;
    string name = "John";
    Point p1 = {10, 20};
    
    Operation op = add;
    printf("5 + 3 = %d\n", op(5, 3));
    
    op = multiply;
    printf("5 * 3 = %d\n", op(5, 3));
    
    return 0;
}
```

### Command Line Arguments

```c
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    printf("Program name: %s\n", argv[0]);
    printf("Number of arguments: %d\n", argc);
    
    if (argc > 1) {
        printf("Arguments:\n");
        for (int i = 1; i < argc; i++) {
            printf("%d: %s\n", i, argv[i]);
        }
        
        // Example: simple calculator
        if (argc == 4) {
            int num1 = atoi(argv[1]);
            char op = argv[2][0];
            int num2 = atoi(argv[3]);
            
            switch (op) {
                case '+':
                    printf("%d + %d = %d\n", num1, num2, num1 + num2);
                    break;
                case '-':
                    printf("%d - %d = %d\n", num1, num2, num1 - num2);
                    break;
                case '*':
                    printf("%d * %d = %d\n", num1, num2, num1 * num2);
                    break;
                case '/':
                    if (num2 != 0) {
                        printf("%d / %d = %.2f\n", num1, num2, (float)num1 / num2);
                    } else {
                        printf("Division by zero!\n");
                    }
                    break;
                default:
                    printf("Invalid operator\n");
            }
        }
    } else {
        printf("Usage: %s <num1> <operator> <num2>\n", argv[0]);
    }
    
    return 0;
}
```

---

## Debugging Tips

### Common Debugging Techniques

```c
// 1. Printf debugging
printf("Debug: variable x = %d at line %d\n", x, __LINE__);

// 2. Using conditional compilation for debug prints
#define DEBUG 1

#if DEBUG
    #define DBG_PRINT(fmt, ...) printf("DEBUG: " fmt, ##__VA_ARGS__)
#else
    #define DBG_PRINT(fmt, ...)
#endif

int main() {
    int x = 10;
    DBG_PRINT("x = %d\n", x);  // Only prints if DEBUG is 1
    
    return 0;
}
```

### Error Handling Patterns

```c
#include <stdio.h>
#include <stdlib.h>

// Function with error checking
int divideNumbers(int a, int b, float *result) {
    if (b == 0) {
        return -1;  // Error code
    }
    *result = (float)a / b;
    return 0;  // Success
}

int main() {
    float result;
    int status = divideNumbers(10, 3, &result);
    
    if (status == 0) {
        printf("Result: %.2f\n", result);
    } else {
        printf("Error: Division by zero!\n");
    }
    
    // File handling with error checking
    FILE *file = fopen("data.txt", "r");
    if (file == NULL) {
        perror("Error opening file");  // Prints system error message
        return 1;
    }
    
    // Use file...
    fclose(file);
    
    return 0;
}
```

---

## Compilation and Build Process

### Basic Compilation

```bash
# Simple compilation
gcc program.c -o program

# With debugging information
gcc -g program.c -o program

# With warnings
gcc -Wall -Wextra program.c -o program

# Optimized compilation
gcc -O2 program.c -o program

# Multiple files
gcc main.c helper.c -o program
```

### Multi-file Projects

**main.c:**
```c
#include <stdio.h>
#include "helper.h"

int main() {
    printf("Sum: %d\n", add(5, 3));
    greet();
    return 0;
}
```

**helper.c:**
```c
#include <stdio.h>
#include "helper.h"

int add(int a, int b) {
    return a + b;
}

void greet() {
    printf("Hello from helper!\n");
}
```

**helper.h:**
```c
#ifndef HELPER_H
#define HELPER_H

int add(int a, int b);
void greet(void);

#endif
```

**Compilation:**
```bash
gcc main.c helper.c -o program
```

---

## Standard Library Functions Reference

### stdio.h
- `printf()`, `scanf()`: Formatted I/O
- `fopen()`, `fclose()`: File operations
- `fgets()`, `fputs()`: String file I/O
- `fprintf()`, `fscanf()`: Formatted file I/O

### string.h
- `strlen()`: String length
- `strcpy()`, `strncpy()`: String copy
- `strcat()`, `strncat()`: String concatenation
- `strcmp()`, `strncmp()`: String comparison
- `strchr()`, `strstr()`: String search

### stdlib.h
- `malloc()`, `free()`: Dynamic memory allocation
- `calloc()`, `realloc()`: Memory allocation variants
- `atoi()`, `atof()`: String to number conversion
- `rand()`, `srand()`: Random number generation
- `exit()`: Program termination

### math.h
- `pow()`, `sqrt()`: Power and square root
- `sin()`, `cos()`, `tan()`: Trigonometric functions
- `log()`, `exp()`: Logarithmic and exponential
- `ceil()`, `floor()`: Rounding functions

### ctype.h
- `isdigit()`, `isalpha()`: Character classification
- `islower()`, `isupper()`: Case checking
- `tolower()`, `toupper()`: Case conversion

---

## Final Tips for Learning C

### Learning Path Recommendations

1. **Start with Basics**
   - Understand data types and variables
   - Master input/output operations
   - Practice simple calculations

2. **Control Structures**
   - Learn if-else and switch statements
   - Master all three types of loops
   - Practice with nested structures

3. **Functions and Modular Programming**
   - Understand function parameters and return values
   - Learn about scope and lifetime of variables
   - Practice recursive functions

4. **Arrays and Strings**
   - Master array indexing and manipulation
   - Understand string handling in C
   - Practice with multi-dimensional arrays

5. **Pointers and Memory**
   - Understand pointer basics thoroughly
   - Learn pointer arithmetic
   - Master dynamic memory allocation

6. **Advanced Topics**
   - Structures and user-defined types
   - File handling operations
   - Preprocessor directives

### Practice Resources

- **Online Judges**: HackerRank, LeetCode, Codeforces
- **Practice Problems**: Project Euler, CodeChef
- **Books**: "The C Programming Language" by K&R
- **Projects**: Build small applications like calculators, games

### Common Pitfalls to Remember

- Always initialize variables before use
- Check array bounds to avoid buffer overflows
- Match every `malloc()` with `free()`
- Use `strcmp()` for string comparison, not `==`
- Be careful with pointer arithmetic
- Handle file operations with proper error checking

Remember: C programming requires practice and patience. Start with simple programs and gradually work your way up to more complex applications. The key is consistent practice and understanding the fundamental concepts thoroughly.

---

**Happy Coding! 🚀**
