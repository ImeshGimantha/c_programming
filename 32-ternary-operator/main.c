#include <stdio.h>

int main() {

    int hours = 11;
    int minute = 5;
    char *meridiem = hours < 12 ? "AM" : "PM";

    printf("%02d:%02d %s\n\n", hours, minute, meridiem);

    int marks = 45;

    printf("Your grade is %c\n", (marks >= 75) ? 'A' : (marks >= 65) ? 'B' : (marks >= 55) ? 'C' : (marks >= 35) ? 'S' : 'F');

    return 0;

}