#include <stdio.h>
#include "ex4test.h"

int times = 0;
int called();

int main(void) {
    int response = 0;

    printf("Welcome to call me baby\n");
    printf("I will count the times you're calling me\n");
    printf("Do you want to call me? (-1 for no, anything else for yes)\n");
    while(scanf("%d", &response) && response != -1) {
        called();
        printf("Do you want to call me? (-1 for no, anything else for yes)\n");
    }
    printf("You called me %d times bro\n", called() - 1);
}