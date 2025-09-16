#include <stdio.h>

void birthday(int *age);

int main() {

    int age = 25;
    int *pAge = &age;

    birthday(&age);

    printf("You are %d years old\n", age);

    return 0;

}

void birthday(int *age) {
    // pass by reference
    (*age)++;
}