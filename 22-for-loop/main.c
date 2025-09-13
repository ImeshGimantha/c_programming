#include <stdio.h>
#include <unistd.h>

int main() {

    for (int i = 10; i > 0; i--) {
        sleep(1);
        printf("%d\n", i);
    }

    sleep(1);
    printf("Happy New Year!\n");

    return 0;

}