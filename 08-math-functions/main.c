#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int x = 9;
    int y = 2;
    float z = 3.14;
    float c = 3.23;
    float f = 3.99;
    int a = -9;
    float l = 4;
    float ts = 90;
    float tc = 0;
    float tt = 45;

    // to get square root
    x = sqrt(x);

    // to get power of a number
    y = pow(y, 3);

    // to round a number
    z = round(z);

    // to ceil(max round) number
    c = ceil(c);

    // to floor (min round) number
    f = floor(f);

    // to get absolute value
    a = abs(a);

    // to get log number
    l = log(l);

    // to get sin value
    ts = sin(ts);

    // to get cos value
    tc = cos(tc);

    // to get tan value
    tt = tan(tt);

    printf("sqrt : %d\n", x);
    printf("power : %d\n", y);
    printf("round : %f\n", z);
    printf("ceiling : %f\n", c);
    printf("floor : %f\n", f);
    printf("absolute : %d\n", a);
    printf("log : %f\n", l);
    printf("sin : %f\n", ts);
    printf("cos : %f\n", tc);
    printf("tan : %f\n", tt);
    
    return 0;

}