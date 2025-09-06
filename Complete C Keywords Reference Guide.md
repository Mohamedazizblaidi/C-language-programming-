# Complete C Keywords Reference Guide

## Table of Contents
1. [Introduction](#introduction)
2. [C89/C90 Keywords (32)](#c89c90-keywords-32)
3. [C99 Keywords (5 additional)](#c99-keywords-5-additional)
4. [C11 Keywords (7 additional)](#c11-keywords-7-additional)
5. [Keywords by Category](#keywords-by-category)
6. [Detailed Explanations with Examples](#detailed-explanations-with-examples)
7. [Reserved Identifiers](#reserved-identifiers)
8. [Best Practices](#best-practices)

---

## Introduction

Keywords in C are reserved words that have special meaning to the compiler. They cannot be used as variable names, function names, or any other identifiers. C has evolved over time, adding new keywords with each standard revision.

### Total Keywords by Standard:
- **C89/C90**: 32 keywords
- **C99**: 37 keywords (added 5)
- **C11**: 44 keywords (added 7)

---

## C89/C90 Keywords (32)

### Complete List
```
auto      break     case      char      const     continue
default   do        double    else      enum      extern
float     for       goto      if        int       long
register  return    short     signed    sizeof    static
struct    switch    typedef   union     unsigned  void
volatile  while
```

---

## C99 Keywords (5 additional)

```
inline    restrict  _Bool     _Complex  _Imaginary
```

---

## C11 Keywords (7 additional)

```
_Alignas    _Alignof    _Atomic     _Static_assert
_Noreturn   _Thread_local   _Generic
```

---

## Keywords by Category

### 1. Data Types
- **Basic Types**: `char`, `int`, `float`, `double`, `void`
- **Type Modifiers**: `short`, `long`, `signed`, `unsigned`
- **C99 Types**: `_Bool`, `_Complex`, `_Imaginary`

### 2. Storage Classes
- `auto`, `register`, `static`, `extern`
- **C11**: `_Thread_local`

### 3. Type Qualifiers
- `const`, `volatile`, `restrict` (C99)
- **C11**: `_Atomic`

### 4. Control Flow
- **Conditionals**: `if`, `else`, `switch`, `case`, `default`
- **Loops**: `for`, `while`, `do`
- **Jump**: `break`, `continue`, `goto`, `return`

### 5. User-Defined Types
- `struct`, `union`, `enum`, `typedef`

### 6. Operators/Functions
- `sizeof`
- **C11**: `_Alignof`, `_Generic`

### 7. Function/Code Properties
- **C99**: `inline`
- **C11**: `_Noreturn`, `_Static_assert`, `_Alignas`

---

## Detailed Explanations with Examples

### Data Type Keywords

#### `char`
Single character data type (1 byte).

```c
#include <stdio.h>

int main() {
    char letter = 'A';
    char digit = '5';
    
    printf("Character: %c\n", letter);
    printf("ASCII value: %d\n", letter);
    printf("Digit character: %c\n", digit);
    
    return 0;
}
```

#### `int`
Integer data type (typically 4 bytes).

```c
#include <stdio.h>

int main() {
    int positive = 42;
    int negative = -100;
    int zero = 0;
    
    printf("Positive: %d\n", positive);
    printf("Negative: %d\n", negative);
    printf("Zero: %d\n", zero);
    printf("Size of int: %zu bytes\n", sizeof(int));
    
    return 0;
}
```

#### `float` and `double`
Floating-point data types.

```c
#include <stdio.h>

int main() {
    float pi_f = 3.14159f;      // 4 bytes, ~7 digits precision
    double pi_d = 3.141592653589793;  // 8 bytes, ~15 digits precision
    
    printf("Float PI: %.7f\n", pi_f);
    printf("Double PI: %.15lf\n", pi_d);
    printf("Float size: %zu bytes\n", sizeof(float));
    printf("Double size: %zu bytes\n", sizeof(double));
    
    return 0;
}
```

#### `void`
Represents "no type" or "no value".

```c
#include <stdio.h>

void greet(void) {              // Function returns nothing
    printf("Hello, World!\n");
}

void print_number(int num) {    // Function takes parameter, returns nothing
    printf("Number: %d\n", num);
}

int main(void) {                // Main function takes no parameters
    greet();
    print_number(42);
    return 0;
}
```

#### Type Modifiers: `short`, `long`, `signed`, `unsigned`

```c
#include <stdio.h>

int main() {
    short short_num = 1000;           // At least 16 bits
    long long_num = 1000000L;         // At least 32 bits
    long long very_long = 1000000000LL;  // At least 64 bits
    
    signed int signed_int = -42;      // Can be negative
    unsigned int unsigned_int = 42U;  // Only positive
    
    printf("Short: %hd (size: %zu)\n", short_num, sizeof(short));
    printf("Long: %ld (size: %zu)\n", long_num, sizeof(long));
    printf("Long long: %lld (size: %zu)\n", very_long, sizeof(long long));
    printf("Signed: %d\n", signed_int);
    printf("Unsigned: %u\n", unsigned_int);
    
    return 0;
}
```

### Storage Class Keywords

#### `auto`
Default storage class for local variables (rarely used explicitly).

```c
#include <stdio.h>

int main() {
    auto int x = 10;  // Same as: int x = 10;
    int y = 20;       // 'auto' is implicit for local variables
    
    printf("x: %d, y: %d\n", x, y);
    return 0;
}
```

#### `register`
Suggests storing variable in CPU register for fast access.

```c
#include <stdio.h>

int main() {
    register int counter;  // Hint to compiler for fast access
    
    for (counter = 0; counter < 1000000; counter++) {
        // Loop with potentially faster access to counter
    }
    
    printf("Counter reached: %d\n", counter);
    
    // Note: Cannot take address of register variable
    // printf("Address: %p\n", &counter);  // ERROR!
    
    return 0;
}
```

#### `static`
Variables retain their value between function calls; limits scope.

```c
#include <stdio.h>

void counter_function() {
    static int count = 0;  // Initialized only once
    count++;
    printf("Function called %d times\n", count);
}

static int file_scope_var = 100;  // Visible only in this file

int main() {
    counter_function();  // Output: 1
    counter_function();  // Output: 2
    counter_function();  // Output: 3
    
    printf("File scope variable: %d\n", file_scope_var);
    return 0;
}
```

#### `extern`
Declares a variable or function defined elsewhere.

**file1.c:**
```c
#include <stdio.h>

int global_var = 42;  // Definition

void print_global() {
    printf("Global variable: %d\n", global_var);
}
```

**file2.c:**
```c
#include <stdio.h>

extern int global_var;  // Declaration (defined in file1.c)
extern void print_global();  // Function declaration

int main() {
    printf("Accessing global from another file: %d\n", global_var);
    print_global();
    return 0;
}
```

### Type Qualifier Keywords

#### `const`
Makes variables read-only after initialization.

```c
#include <stdio.h>

int main() {
    const int MAX_SIZE = 100;        // Cannot be changed
    const float PI = 3.14159f;       // Read-only
    
    printf("Max size: %d\n", MAX_SIZE);
    printf("PI: %.5f\n", PI);
    
    // MAX_SIZE = 200;  // ERROR: Cannot modify const variable
    
    // const with pointers
    const int *ptr1;      // Pointer to constant int
    int * const ptr2 = &MAX_SIZE;  // Constant pointer to int
    const int * const ptr3 = &MAX_SIZE;  // Constant pointer to constant int
    
    return 0;
}
```

#### `volatile`
Tells compiler the variable can change unexpectedly.

```c
#include <stdio.h>

volatile int hardware_register;  // May change due to hardware

void check_hardware() {
    volatile int status = 0;
    
    // Compiler won't optimize away repeated reads
    while (status == 0) {
        status = hardware_register;  // Always read from memory
    }
    
    printf("Hardware status changed to: %d\n", status);
}

int main() {
    // Simulate hardware change
    hardware_register = 1;
    check_hardware();
    return 0;
}
```

### Control Flow Keywords

#### `if`, `else`
Conditional execution.

```c
#include <stdio.h>

int main() {
    int score = 85;
    
    if (score >= 90) {
        printf("Grade: A\n");
    } else if (score >= 80) {
        printf("Grade: B\n");
    } else if (score >= 70) {
        printf("Grade: C\n");
    } else if (score >= 60) {
        printf("Grade: D\n");
    } else {
        printf("Grade: F\n");
    }
    
    return 0;
}
```

#### `switch`, `case`, `default`
Multi-way branching.

```c
#include <stdio.h>

int main() {
    char grade = 'B';
    
    switch (grade) {
        case 'A':
            printf("Excellent!\n");
            break;
        case 'B':
            printf("Good job!\n");
            break;
        case 'C':
            printf("Average\n");
            break;
        case 'D':
            printf("Below average\n");
            break;
        case 'F':
            printf("Failed\n");
            break;
        default:
            printf("Invalid grade\n");
            break;
    }
    
    return 0;
}
```

#### `for`, `while`, `do`
Loop constructs.

```c
#include <stdio.h>

int main() {
    // for loop
    printf("For loop: ");
    for (int i = 1; i <= 5; i++) {
        printf("%d ", i);
    }
    printf("\n");
    
    // while loop
    printf("While loop: ");
    int j = 1;
    while (j <= 5) {
        printf("%d ", j);
        j++;
    }
    printf("\n");
    
    // do-while loop
    printf("Do-while loop: ");
    int k = 1;
    do {
        printf("%d ", k);
        k++;
    } while (k <= 5);
    printf("\n");
    
    return 0;
}
```

#### `break`, `continue`
Loop control statements.

```c
#include <stdio.h>

int main() {
    printf("Using break: ");
    for (int i = 1; i <= 10; i++) {
        if (i == 6) {
            break;  // Exit loop when i is 6
        }
        printf("%d ", i);
    }
    printf("\n");
    
    printf("Using continue: ");
    for (int i = 1; i <= 10; i++) {
        if (i % 2 == 0) {
            continue;  // Skip even numbers
        }
        printf("%d ", i);
    }
    printf("\n");
    
    return 0;
}
```

#### `goto`
Unconditional jump (use sparingly).

```c
#include <stdio.h>

int main() {
    int i = 0;
    
    start:  // Label
        printf("%d ", i);
        i++;
        
        if (i < 5) {
            goto start;  // Jump to label
        }
    
    printf("\nLoop finished\n");
    
    // Better use case: error handling
    FILE *file = fopen("data.txt", "r");
    if (file == NULL) {
        goto error;
    }
    
    // Process file...
    fclose(file);
    return 0;
    
    error:
        printf("Error opening file\n");
        return 1;
}
```

#### `return`
Exit function and optionally return a value.

```c
#include <stdio.h>

int add(int a, int b) {
    return a + b;  // Return sum
}

void greet() {
    printf("Hello!\n");
    return;  // Optional for void functions
}

int main() {
    int result = add(5, 3);
    printf("Sum: %d\n", result);
    
    greet();
    
    return 0;  // Return success code
}
```

### User-Defined Type Keywords

#### `struct`
Groups related variables together.

```c
#include <stdio.h>
#include <string.h>

struct Person {
    char name[50];
    int age;
    float height;
};

int main() {
    struct Person person1;
    
    strcpy(person1.name, "John Doe");
    person1.age = 30;
    person1.height = 5.9f;
    
    printf("Name: %s\n", person1.name);
    printf("Age: %d\n", person1.age);
    printf("Height: %.1f\n", person1.height);
    
    // Structure initialization
    struct Person person2 = {"Jane Smith", 25, 5.5f};
    
    printf("\nPerson 2:\n");
    printf("Name: %s, Age: %d, Height: %.1f\n",
           person2.name, person2.age, person2.height);
    
    return 0;
}
```

#### `union`
Allows different data types to share the same memory location.

```c
#include <stdio.h>

union Data {
    int integer;
    float decimal;
    char character;
};

int main() {
    union Data data;
    
    data.integer = 42;
    printf("Integer: %d\n", data.integer);
    printf("Size of union: %zu bytes\n", sizeof(data));
    
    data.decimal = 3.14f;  // Overwrites integer value
    printf("Float: %.2f\n", data.decimal);
    
    data.character = 'A';  // Overwrites float value
    printf("Character: %c\n", data.character);
    
    return 0;
}
```

#### `enum`
Creates named integer constants.

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
    enum Color favorite = BLUE;
    enum Status task_status = SUCCESS;
    
    printf("Favorite color: %d\n", favorite);
    printf("Task status: %d\n", task_status);
    
    if (task_status == SUCCESS) {
        printf("Task completed successfully!\n");
    }
    
    return 0;
}
```

#### `typedef`
Creates type aliases.

```c
#include <stdio.h>

typedef unsigned int uint;
typedef char* string;

typedef struct {
    int x, y;
} Point;

typedef enum {
    NORTH, SOUTH, EAST, WEST
} Direction;

int main() {
    uint age = 25;  // Same as unsigned int age = 25;
    string name = "John";  // Same as char* name = "John";
    
    Point p1 = {10, 20};
    Direction dir = NORTH;
    
    printf("Age: %u\n", age);
    printf("Name: %s\n", name);
    printf("Point: (%d, %d)\n", p1.x, p1.y);
    printf("Direction: %d\n", dir);
    
    return 0;
}
```

### Operator Keyword

#### `sizeof`
Returns size of a data type or variable in bytes.

```c
#include <stdio.h>

struct Example {
    int a;
    char b;
    double c;
};

int main() {
    int arr[10];
    struct Example ex;
    
    printf("sizeof(char): %zu bytes\n", sizeof(char));
    printf("sizeof(int): %zu bytes\n", sizeof(int));
    printf("sizeof(float): %zu bytes\n", sizeof(float));
    printf("sizeof(double): %zu bytes\n", sizeof(double));
    printf("sizeof(arr): %zu bytes\n", sizeof(arr));
    printf("sizeof(struct Example): %zu bytes\n", sizeof(struct Example));
    printf("sizeof(ex): %zu bytes\n", sizeof(ex));
    
    // Can use with variables or types
    int x = 42;
    printf("sizeof(x): %zu bytes\n", sizeof(x));
    printf("sizeof(int): %zu bytes\n", sizeof(int));
    
    return 0;
}
```

### C99 Keywords

#### `inline`
Suggests function should be expanded inline.

```c
#include <stdio.h>

inline int square(int x) {
    return x * x;
}

inline int max(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    int num = 5;
    printf("Square of %d: %d\n", num, square(num));
    printf("Max of 10 and 20: %d\n", max(10, 20));
    return 0;
}
```

#### `restrict`
Pointer optimization hint (C99).

```c
#include <stdio.h>

void copy_array(int *restrict dest, int *restrict src, int n) {
    // Compiler assumes dest and src don't overlap
    for (int i = 0; i < n; i++) {
        dest[i] = src[i];
    }
}

int main() {
    int source[] = {1, 2, 3, 4, 5};
    int destination[5];
    
    copy_array(destination, source, 5);
    
    printf("Copied array: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", destination[i]);
    }
    printf("\n");
    
    return 0;
}
```

#### `_Bool`
Boolean type (C99), usually accessed via `<stdbool.h>`.

```c
#include <stdio.h>
#include <stdbool.h>  // Provides bool, true, false

int main() {
    _Bool flag1 = 1;      // C99 boolean type
    bool flag2 = true;    // Using stdbool.h
    
    printf("flag1: %d\n", flag1);
    printf("flag2: %d\n", flag2);
    
    if (flag1 && flag2) {
        printf("Both flags are true\n");
    }
    
    return 0;
}
```

### C11 Keywords

#### `_Static_assert`
Compile-time assertions.

```c
#include <stdio.h>

int main() {
    // Compile-time checks
    _Static_assert(sizeof(int) == 4, "int must be 4 bytes");
    _Static_assert(sizeof(char) == 1, "char must be 1 byte");
    
    printf("All static assertions passed!\n");
    return 0;
}
```

#### `_Noreturn`
Indicates function never returns.

```c
#include <stdio.h>
#include <stdlib.h>

_Noreturn void fatal_error(const char* message) {
    printf("Fatal error: %s\n", message);
    exit(1);  // Never returns
}

int main() {
    int x = -1;
    
    if (x < 0) {
        fatal_error("Negative value not allowed");
        // This line is never reached
    }
    
    printf("This won't be printed\n");
    return 0;
}
```

---

## Reserved Identifiers

### Patterns to Avoid
C reserves certain identifier patterns for implementation use:

```c
// AVOID these patterns:

// Identifiers starting with underscore + capital letter
_Reserved      // Reserved for implementation
__reserved     // Reserved for implementation

// Identifiers starting with underscore in global scope
_global_var    // Reserved at file scope

// Standard library function names
printf         // Don't redefine standard functions
malloc
strcpy

// POSIX and system-specific names
errno          // System error variable
stdin, stdout, stderr  // Standard I/O streams
```

### Safe Naming Conventions

```c
// GOOD naming conventions:
int userAge;           // camelCase
int user_age;          // snake_case
int MAX_USERS;         // Constants in UPPER_CASE
static int s_counter;  // Prefix for static variables
```

---

## Best Practices

### 1. Keyword Usage Guidelines

```c
// Use const for read-only data
const int MAX_SIZE = 100;
const char* MESSAGE = "Hello";

// Use static for file-scope variables
static int file_counter = 0;

// Use inline for small, frequently called functions
inline int min(int a, int b) {
    return (a < b) ? a : b;
}

// Prefer enum over #define for related constants
enum Status { SUCCESS, FAILURE, PENDING };
// Better than: #define SUCCESS 0, #define FAILURE 1, etc.
```

### 2. Modern C Practices

```c
#include <stdbool.h>   // Use bool instead of _Bool

int main() {
    // Use bool for boolean values
    bool is_valid = true;
    
    // Use size_t for array indices and sizes
    size_t array_size = 10;
    
    // Initialize variables at declaration
    int count = 0;
    
    // Use const for immutable data
    const double PI = 3.141592653589793;
    
    return 0;
}
```

### 3. Avoiding Common Mistakes

```c
// DON'T use keywords as identifiers
// int if = 5;        // ERROR: 'if' is a keyword
// int return = 10;   // ERROR: 'return' is a keyword

// DON'T forget break in switch statements
switch (value) {
    case 1:
        printf("One");
        break;  // Don't forget this!
    case 2:
        printf("Two");
        break;
    default:
        printf("Other");
        break;
}

// DON'T use goto unless absolutely necessary
// Prefer structured control flow
```

### 4. Memory and Performance

```c
// Use register hint for frequently accessed variables in tight loops
void process_array(int arr[], size_t size) {
    register size_t i;  // Hint for fast access
    for (i = 0; i < size; i++) {
        // Process arr[i]
    }
}

// Use restrict for non-overlapping pointers (C99+)
void vector_add(double *restrict result, 
                const double *restrict a, 
                const double *restrict b, 
                size_t n) {
    for (size_t i = 0; i < n; i++) {
        result[i] = a[i] + b[i];
    }
}
```

---

## Keyword Evolution Summary

| Standard | Year | New Keywords | Notable Additions |
|----------|------|--------------|-------------------|
| **K&R C** | 1978 | ~27 | Basic set |
| **C89/C90** | 1989-1990 | 32 | `const`, `volatile`, `signed`, `enum`, `void` |
| **C99** | 1999 | +5 | `inline`, `restrict`, `_Bool`, `_Complex`, `_Imaginary` |
| **C11** | 2011 | +7 | `_Static_assert`, `_Noreturn`, `_Generic`, etc. |
| **C18/C17** | 2018 | 0 | No new keywords (bug fixes only) |

---

## Quick Reference Card

### Most Commonly Used Keywords

```
Data Types:    int, char, float, double, void
Modifiers:     short, long, signed, unsigned
Storage:       static, extern, auto, register
Qualifiers:    const, volatile
Control:       if, else, for, while, do, switch, case, default
              break, continue, return, goto
Structure:     struct, union, enum, typedef
Operator:      sizeof
```

### Memory Aid Mnemonics

**Data Types**: "I Can Find Double Values"
- **I**nt, **C**har, **F**loat, **D**ouble, **V**oid

**Storage Classes**: "All Students Eat Regularly"
- **A**uto, **S**tatic, **E**xtern, **R**egister

**Type Qualifiers**: "Cats Can't Resist Voles"
- **C**onst, **C**an't, **R**estrict, **V**olatile

---

This comprehensive guide covers all C keywords with practical examples and usage patterns. Use it as a reference while programming to understand the proper usage and context of each keyword.
