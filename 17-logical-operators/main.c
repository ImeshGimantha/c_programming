#include <stdio.h>
#include <stdbool.h>

int main() {

    int temp = 0;
    bool isSunny = true;

    printf("Enter current temperature : ");
    scanf("%d", &temp);

    if (temp > 0 && temp < 30) {
        printf("\nThe temperature is Good!\n");
    } else if (temp <= 0 || temp > 30) {
        printf("\nThe Temperature is Bad!\n");
    }

    if (!isSunny) {
        printf("It's CLOUDY outside!\n");
    } else {
        printf("It's SUNNY outside!\n");
    }

    return 0;

}