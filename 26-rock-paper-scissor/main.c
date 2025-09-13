#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int getComputerChoice();
int getUserChoice();
void checkWinner();

int main() {

    srand(time(NULL));

    printf("*** Rock Paper Scissors ***\n");

    int computerChoice = getComputerChoice();
    int userChoice = getUserChoice();

    switch (userChoice) {
        case 1:
            printf("\nYou choose ROCK!\n");
            break;
        case 2:
            printf("\nYou choose PAPER!\n");
            break;
        case 3:
            printf("\nYou choose SCISSOR!\n");
            break;
    }

    switch (computerChoice) {
        case 1:
            printf("Computer choose ROCK!\n");
            break;
        case 2:
            printf("Computer choose PAPER!\n");
            break;
        case 3:
            printf("Computer choose SCISSOR!\n");
            break;
    }

    checkWinner(userChoice, computerChoice);

    return 0;

}

int getComputerChoice() {
    return (rand() % 3) + 1;
}

int getUserChoice() {
    int choice = 0;
    
    do {
        printf("\nChoose an option\n");
        printf("1. ROCK\n2. PAPER\n3. SCISSOR\n");
        printf("Enter your choice : ");
        scanf("%d", &choice);
    } while (choice < 1 || choice > 3);

    return choice;
}

void checkWinner(int userChoice, int computerChoice) {

    if (userChoice == computerChoice) {
        printf("It's a TIE!\n");
    } else if ((userChoice == 1 && computerChoice == 3) || 
               (userChoice == 2 && computerChoice == 1) ||
               (userChoice == 3 && computerChoice == 2)) {
        printf("You WIN!\n"); 
    } else {
        printf("You LOSE!\n");
    }
}