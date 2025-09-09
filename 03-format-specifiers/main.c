#include <stdio.h>

int main() {

    // basic specifiers

    int age = 21;
    float price = 65.82;
    double pi = 3.1427348736554;
    char symbol = '#';
    char name[] = "John Doe";

    printf("%d\n", age);
    printf("%f\n", price);
    printf("%.10lf\n", pi);
    printf("%c\n", symbol);
    printf("%s\n\n", name);

    
    // specifiers with width
    
    int num1 = 1;
    int num2 = 10;
    int num3 = -100;

    printf("%+04d\n", num1);
    printf("%+04d\n", num2);
    printf("%+04d\n\n", num3);


    // width with precision

    float price1 = 29.99;
    float price2 = 15.0;
    float price3 = -100.00;

    printf("%+7.1f\n", price1);
    printf("%+7.2f\n", price2);
    printf("%+7.2f\n", price3);

    return 0;

}