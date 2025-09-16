#include <stdio.h>

typedef enum {
    SUNDAY = 1, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY
} Day;

typedef enum {
    SUCCESS, FAILURE, PENDING
} Status;

void connectStatus(Status status);

int main() {

    // enum Day today = TUESDAY;
    Day today = SUNDAY;

    if (today == SATURDAY || today == SUNDAY) {
        printf("It's the weekend\n");
    } else {
        printf("It's a weekday\n");
    }

    Status status = PENDING;

    connectStatus(status);

    return 0;

}

void connectStatus(Status status) {
    switch (status) {
        case SUCCESS:
            printf("Connection was successful\n");
            break;
        case FAILURE:
            printf("Could not connect\n");
            break;
        case PENDING:
            printf("Connecting...\n");
            break;
    }
}