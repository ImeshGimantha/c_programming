#include <stdio.h>
#include <stdbool.h>

int main() {

    // int data type variables
    int age = 21;
    int year = 2025;
    int quantity = 1;

    // float data type variables
    float gpa = 3.148;
    float price = 25.98;
    float temperature = 34.82;

    // double data type variables
    double pi = 3.141592653589793;
    double e = 2.718281828459045;

    // character data type variables
    char grade = 'A';
    char symbol = '@';

    // to save strings in variable use "char <variable_name>[]"
    char name[] = "John Doe";
    char food[] = "Pizza";
    char email[] = "abc@abc.com";

    /*
        boolean data type variables
        ***IMPORTANT***
        boolean needs include header file <stdbool.h>
    */

    bool isOnline = false; // 0
    bool isStudent  = true; // 1
    bool forSale = false;

    printf("You are %d years old.\n", age);
    printf("The year is %d.\n", year);
    printf("You are ordered %d x items.\n\n", quantity);

    printf("Your GPA is %.2f\n", gpa);
    printf("The price is %.1f\n", price);
    printf("The temperature is %.2f°C\n\n", temperature);

    printf("The value of pi is %.15lf\n", pi);
    printf("The value of e is %.15lf\n\n", e);

    printf("Your grade is %c\n", grade);
    printf("Your favorite symbol is %c\n\n", symbol);

    printf("Hello %s!\n", name);
    printf("Your favorite food is %s\n", food);
    printf("Your email is %s\n\n", email);

    if (isOnline) {
        printf("you are online!\n");
    } else {
        printf("You are offline!\n");
    }

    if (isStudent) {
        printf("you are a student\n");
    } else {
        printf("You are NOT a student\n");
    }

    if (forSale) {
        printf("That item is for sale\n");
    } else {
        printf("That item is NOT for sale\n");
    }

    return 0;

}