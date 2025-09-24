#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() {

    int items = 0;
    char buffer[50] = "";
    char option = '\0';
    char **categories = NULL;
    
    do {
        printf("Do you want enter item (y/n) : ");
        scanf("%c", &option);
        getchar();

        if (tolower(option) == 'y') {
            items++;

            categories = realloc(categories, items * sizeof(char*));

            printf("\nEnter category #%d : ", items);
            fgets(buffer, sizeof(buffer), stdin);
            buffer[strcspn(buffer, "\n")] = '\0';

            categories[items - 1] = realloc(categories[items - 1], strlen(buffer) * sizeof(char*));

            for (int i = 0; i < strlen(buffer); i++) {
                categories[items - 1][i] = buffer[i];
            }
        }
    } while (tolower(option) == 'y');

    printf("\n");

    for (int i = 0; i < items; i++) {
        printf("category #%d : %s\n", i + 1, categories[i]);
    }

    free(categories);

    return 0;

}