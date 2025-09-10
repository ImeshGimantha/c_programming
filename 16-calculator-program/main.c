#include <stdio.h>
#include <stdbool.h>

int main() {

    char operator = '\0';
    double num1 = 0.0;
    double num2 = 0.0;
    double result = 0.0;
    bool error = false;

    printf("Enter the first number : ");
    scanf("%lf", &num1);

    printf("Enter the operator (+ - * /) : ");
    scanf(" %c", &operator); // clear \n from input buffer

    printf("Enter the second number : ");
    scanf("%lf", &num2);

    switch(operator) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 == 0) {
                printf("You can't divide by zero!\n");
                error = true;
            } else {
                result = num1 / num2;
            }
            break;
        default:
            printf("\nPlease enter valid operator\n");
            error = true;
            break;
    }

    if (error == false) {
        printf("Result : %.3lf\n", result);
    }

    return 0;

}