#include <stdio.h>
#include <string.h>

int main() {

    int num1 = 0;
    int num2 = 1;
    char name[50] = "";

    printf("This is while loop\n\n");
    while (num1 >= 0) {
        printf("Enter any number greater than 0 : ");
        scanf(" %d", &num1);
    }

    printf("\nThis is Do While loop\n\n");

    do {
        printf("Enter any number less than 0 : ");
        scanf(" %d", &num2);
    } while (num2 <= 0);

    printf("\nEnter your name : ");
    while (getchar() != '\n');
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0';

    while (strlen(name) == 0) {
        printf("Name cannot be empty! Please enter your name : ");
        fgets(name, sizeof(name), stdin);
        name[strlen(name) - 1] = '\0';
    }

    printf("\nHello %s\n", name);

    return 0;

}