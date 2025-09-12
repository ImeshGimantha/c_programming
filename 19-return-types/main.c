#include <stdio.h>
#include <stdbool.h>

int square(int num) {
    return num * num;
}

bool ageCheck(int age) {
    if (age > 18) {
        return true;
    } else {
        return false;
    }
}

int getMax(int num1, int num2, int num3) {
    if (num1 != num2 && num1 != num3 && num2 != num3) {
        if (num1 > num2 && num1 > num3) {
            return num1;
        } else if (num2 > num1 && num2 > num3) {
            return num2;
        } else {
            return num3;
        }
    } else {
        printf("\nInput numbers must be different from each number!\n");
        return 0;
    }
}

int main() {

    int x = square(3);
    int y = square(4);
    int z = square(5);

    printf("%d\n", x);
    printf("%d\n", y);
    printf("%d\n", z);

    int age = 12;

    if (ageCheck(age)) {
        printf("\nYou may sign up\n");
    } else {
        printf("\nYou must be 18 years old or above\n");
    }

    int max = getMax(0, 0, -4);

    printf("%d\n", max);

    return 0;

}