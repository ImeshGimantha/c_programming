#include <stdio.h>
#include <string.h>

int main() {

    int marks = 0;
    char name[50] = "";

    printf("Enter your name : ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0';

    if (strlen(name) == 0) {
        printf("You didn't enter your name.\n\n");
    } else {
        printf("Hello %s\n\n", name);
        
        printf("Enter your marks : ");
        scanf("%d", &marks);
    
        if (marks >= 75) {
            printf("Your grade is : A\n");
        } else if (marks >= 65) {
            printf("Your grade is : B\n");
        } else if (marks >= 55) {
            printf("Your grade is : C\n");
        } else if (marks >= 35) {
            printf("Your grade is : S\n");
        } else {
            printf("You are fail\n");
        }
    }


    return 0;

}