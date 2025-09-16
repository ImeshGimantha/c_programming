#include <stdio.h>

typedef struct {
    char model[20];
    int year;
    int price;
} Car;

int main() {

    Car cars[] = {{"Mustang", 2024, 40000},
                  {"Corolla", 2018, 85000},
                  {"Sunny", 2025, 65000}};

    int items = sizeof(cars) / sizeof(cars[0]);

    for (int i = 0; i < items; i++) {
        printf("%s %d $%d\n", cars[i].model, cars[i].year, cars[i].price);
    }

    return 0;

}