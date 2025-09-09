#include <stdio.h>

int main() {

    // integers
    int x = 2;
    int y = 3;
    int z = 0;

    printf("x + y = %d\n", x+y);
    printf("x - y = %d\n", x-y);
    printf("x * y = %d\n", x*y);
    printf("x / y = %f\n", (float)x/(float)y);
    printf("y %% x = %d\n\n", y%x);

    // augmented assignment operators
    x+=3;
    printf("%d\n", x);
    x-=3;
    printf("%d\n", x);
    x*=3;
    printf("%d\n", x);
    x/=3;
    printf("%d\n", x);

    return 0;

}