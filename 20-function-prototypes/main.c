#include <stdio.h>
#include <stdbool.h>

// function prototype
void sayHello(char name[], int age);
bool ageCheck(int age);

int main() {
    
    sayHello("John", 30);

    int age = 0;
    printf("\nEnter your age : ");
    scanf("%d", &age);

    if (ageCheck(age)) {
        printf("You are old enough to watch blue films!\n");
    } else {
        printf("You must be 18+ or above!\n");
    }
    
    return 0;
    
}

void sayHello(char name[], int age) {
    printf("Hello %s!\n", name);
    printf("Your age is %d.\n", age);
}

bool ageCheck(int age) {
    return age >= 18;
}