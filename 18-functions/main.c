#include <stdio.h>

void happyBirthday(char name[], int age) {

    printf("\nHappy Birthday to you!\n");
    printf("Happy Birthday to you!\n");
    printf("Happy Birthday dear %s!\n", name);
    printf("Happy Birthday to you!\n");
    printf("You are %d years old!\n", age);

}

int main() {

    char name[50] = "";
    int age = 0;

    printf("Enter your name : ");
    scanf("%s", name);
    printf("Enter your age : ");
    scanf("%d", &age);

    happyBirthday(name, age);

    return 0;

}