#include <stdio.h>
#include <stdlib.h>

int main() {

    int number = 0;

    printf("Enter number of players : ");
    scanf("%d", &number);

    float *scores = malloc(number * sizeof(float));

    if (scores == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    for (int i = 0; i < number; i++) {
        printf("Enter score #%d : ", i + 1);
        scanf(" %f", &scores[i]);
    }

    int newNumber = 0;

    printf("Enter new number of players : ");
    scanf("%d", &newNumber);

    float *temp = realloc(scores, newNumber * sizeof(float));

    if (temp == NULL) {
        printf("Could not reallocate memory!\n");
    } else {
        scores = temp;
        temp = NULL;

        for (int i = number; i < newNumber; i++) {
            printf("Enter score #%d : ", i + 1);
            scanf(" %f", &scores[i]);
        }
        
        for (int i = 0; i < newNumber; i++) {
            printf("%.2f ", scores[i]);
        }
    }

    printf("\n");

    free(scores);
    scores = NULL;

    return 0;

}