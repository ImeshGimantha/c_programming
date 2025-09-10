#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main() {

    float price = 0.0f;
    char isSenior[10] = "";
    char isStudent[10] ="";
    bool senior = false;
    bool student = false;

    printf("Enter your price : ");
    scanf("%f", &price);

    printf("Are you student (yes/no): ");
    scanf("%s", isStudent);

    printf("Are you senior (yes/no): ");
    scanf("%s", isSenior);

    if (strcmp(isSenior, "yes") == 0) {
        senior = true;
    }

    if (strcmp(isStudent, "yes") == 0) {
        student = true;
    }

    if (student) {
        if (senior) {
            printf("\nYou get a student discount of 10%%\n");
            printf("You get a senior discount of 20%%\n");
            price *= 0.7;
        } else {
            printf("\nYou get a student discount of 10%%\n");
            price *= 0.9;
        }
    } else {
        if (senior) {
            printf("\nYou get a senior discount of 20%%\n");
            price *= 0.8;
        }
    }

    printf("\nThe price of a ticket is %.2f\n", price);

    return 0;

}