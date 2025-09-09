#include <stdio.h>
#include <math.h>

int main() {

    double principal = 0.0;
    double rate = 0.0;
    int years = 0;
    int timesCompounded = 0;
    double total = 0.0;

    printf("Compound Interest Calculator\n\n");

    printf("Enter the principal (p) : ");
    scanf("%lf", &principal);

    printf("Enter the interset rate %% (r) : ");
    scanf("%lf", &rate);
    rate = rate / 100;

    printf("Enter the # of years (t) : ");
    scanf("%d", &years);

    printf("Enter # of times compounded per year (n) : ");
    scanf("%d", &timesCompounded);

    total = principal * pow((1 + (rate / timesCompounded)), (timesCompounded * years));

    printf("\nAfter %d year(s), the total will be : $%.2lf\n", years, total);

    return 0;

}