#include <stdio.h>

int main() {

    int numbers[] = {10, 20, 30, 40, 50, 60, 70};
    char grades[] = {'A', 'B', 'C', 'D', 'E'};
    char name[] = "John Doe";

    int size = sizeof(numbers) / sizeof(numbers[0]);

    for (int i = 0; i < size; i++) {
        printf("%d ", numbers[i]);
    }

    int scores[5] = {0};
    
    printf("\n\n");

    for (int i = 0; i < sizeof(scores)/sizeof(scores[0]); i++) {
        printf("Enter a score %d : ", i+1);
        scanf("%d", &scores[i]);
    }

    for (int i = 0; i < 5; i++) {
        printf("%d ", scores[i]);
    }
    
    printf("\n");

    return 0;

}