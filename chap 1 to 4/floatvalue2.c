#include <stdio.h>
int main(void) {
    float g, h;
    float tax, rate;

    rate = 2.0;

    g = 1.0e21;
    tax = rate *g;
    printf("%f", tax);
    return 0;
}