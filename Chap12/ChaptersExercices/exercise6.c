#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int stock[1000];
    int apparition[10] = {0};
    for (int i = 0; i < 1000; i++) {
        stock[i] = (rand() % 10) + 1;
        apparition[stock[i] - 1]++;
    }
    for (int i = 0; i < 10; i++) {
        printf("The number is %d\n", apparition[i]);
    }

}