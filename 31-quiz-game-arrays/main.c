#include <stdio.h>
#include <ctype.h>

int main() {

    
    char questions[][100] = {"What is the largest planet in solar system?",
        "What is the hottest planet?",
        "What planet has the most moons?",
        "Is the earth flat?"};
        
    char options[][100] = {"A. Jupiter\nB. Saturn\nC. Uranus\nD. Neptune",
        "A. Mercury\nB. Venus\nC. Earth\nD. Mars",
        "A. Earth\nB. Mars\nC. Jupiter\nD. Saturn",
        "A. Yes\nB. No\nC. Maybe\nD. Sometimes"};
        
    char answerKey[] = {'A', 'B', 'D', 'B'};

    char guess = '\0';
    int score = 0;
    
    int questionCount = sizeof(questions) / sizeof(questions[0]);

    printf("*** Quiz Game ***\n\n");
            
    for (int i = 0; i < questionCount; i++) {
        printf("%s\n\n", questions[i]);
        printf("%s\n\n", options[i]);
        printf("Enter your choice : ");
        scanf(" %c", &guess);
        if (toupper(guess) == answerKey[i]) {
            printf("CORRECT!\n\n");
            score++;
        } else {
            printf("WRONG!\n\n");
        }
    }

    printf("Your score is %d out of %d points\n", score, questionCount);

    return 0;

}