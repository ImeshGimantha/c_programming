#include <stdio.h>

int main() {

    char choice = '\0';
    float fahrenheit = 0.0f;
    float celsius = 0.0f;

    printf("Temperature Conversion Program\n\n");
    
    printf("C. Celsius to Fahrenheit\n");
    printf("F. Fahrenheit to Celsius\n");

    printf("\nIs the temp in celsius(C) or Fahrenheit(F)? : ");
    scanf("%c", &choice);

    if (choice == 'C') {
        printf("Enter the temperature in celsius : ");
        scanf("%f", &celsius);
        fahrenheit = (celsius * 9 / 5) + 32; // C to F
        printf("\n%.1f celsius is equal to %.1f fahrenheit\n", celsius, fahrenheit);
    } else if (choice == 'F') {
        printf("Enter the temperature in fahrenheit : ");
        scanf("%f", &fahrenheit);
        celsius = (fahrenheit - 32) * 5 / 9;
        printf("\n%.1f fahrenheit is equal to %.1f celsius\n", fahrenheit, celsius);
    } else {
        printf("Invalid choice! Please enter C or F\n");
    }

    return 0;

}