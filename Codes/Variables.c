#include <stdio.h>
#include <stdbool.h>

int main() {
    
    // variable  = A reusable container for a value
    //             behaves as if it were the vlaue it contains
    
    // int = whole numbers (4 bytes in modern systems)
    // float = single-precision decimal number (4 bytes)
    // double = double-precision decimal number (8 bytes)
    // char = single character (1 byte)
    // char[] = array of characters (size varies)
    // bool = true or false (1 byte, requires <stdbool.h>)
    
    printf("---- int ---- \n");
    printf("\n");
    int age  = 25;
    int year = 2025;
    int quantity = 1;
    printf("You are %d years old\n",age);
    printf("The year is %d \n" , year);
    printf("You have ordered %d x items \n" , quantity);
    
    printf("\n");
    printf("---- float ---- \n");
    printf("\n");
    float gpa = 2.5;
    float price=19.99;
    float temperature =-10.1;
    printf("Your gpa is %f\n" ,  gpa);
    printf("The price is $%f\n" , price);
    printf("The temperature is %f°F\n" , temperature);
    
    printf("\n");
    printf("---- double ---- \n");
    printf("\n");
    double pi =3.141592653589793; 
    double e = 2.718281828459045; 
    printf("The value of pi is %lf\n" , pi);
    printf ("The value of e is %lf\n" , e);
    
    printf("\n");
    printf("---- char ---- \n");
    printf("\n");
    char grade = 'A';
    char symbol = '!';
    char currency = '$';
    printf("Your grade is %c\n" , grade);
    printf("Your favorite symbol is %c\n" , symbol);
    printf("The currency is %c\n", currency);
    
    printf("\n");
    printf("---- string ---- \n");
    printf("\n");
    char name [] = "Moahmed aziz ";
    char food [] = "Pizza";
    char email[] = "fake123@gmail.com";
    printf("My name is %s\n" , name );
    printf("My favorite food is %s \n" , food);
    printf("My email is %s\n" , email) ; 
    
    printf("\n");
    printf("---- bool ---- \n");
    printf("\n");
    
    bool isOnline  = true;
    bool isStudent = true;
    bool forSale = false; 
    
    // true means 1
    // false means 0
    
    printf ("%d\n" , isOnline) ; 
    if (isOnline){
        printf("You are ONLINE\n");
    }else{
        printf("You are OFFLINE\n");
    }
    
    if (isStudent){
        printf("You are a student\n");
    }else{
        printf("You are Not a student\n");
    }
    
    if (forSale){
        printf("That item is for sale");
    }else{
        printf("That item is not for sale");
    }
 
    return 0;
}
