#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int stock[100];
    for (int i = 0; i < 100; i++) {
        stock[i] = (rand() % 10) + 1;
        //printf("Le numero est %d\n", stock[i]);
    }
    int buffer = 0;
    for (int p = 0; p < 100; p++) {
        for (int q = p; q < 100; q++) {
            if (stock[p] > stock[q]) {
                buffer = stock[p];
                stock[p] = stock[q];
                stock[q] = buffer;
            }
        }
    }
    for (int i = 0; i < 100; i++) {
        printf("The %d number is: %d\n", i, stock[i]);
    }
}