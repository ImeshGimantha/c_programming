#include <stdio.h>

int main() {

    int numbers[] = {10, 20, 30, 40, 50, 60, 70};
    char grades[] = {'A', 'B', 'C', 'D', 'E'};
    char name[] = "John Doe";

    int size = sizeof(numbers) / sizeof(numbers[0]);

    for (int i = 0; i < size; i++) {
        printf("%d ", numbers[i]);
    }

    printf("\n");

    return 0;

}