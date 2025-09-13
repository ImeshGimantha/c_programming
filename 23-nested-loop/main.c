#include <stdio.h>

int main() {

    for (int i = 1; i < 11; i++) {
        for (int j = 1; j < 11; j++) {
            printf("%3d ", i * j);
        }
        printf("\n");
    }

    printf("\n\n");
    
    int rows = 0;
    int columns = 0;
    char symbol = '\0';

    printf("Enter the number of rows : ");
    scanf("%d", &rows);
    printf("Enter number of columns : ");
    scanf("%d", &columns);
    printf("Enter a symbol to use : ");
    scanf(" %c", &symbol);

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= columns; j++) {
            printf("%c ", symbol);
        }
        printf("\n");
    }

    return 0;
    
}