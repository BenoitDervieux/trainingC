#include <stdio.h>

void michelfunction(double *a, double *b, double *c);

int main(void) {

    double first = 4;
    double second = 104;
    double third = 1000;

    printf("First we have %f %f and %f\n", first, second, third);

    michelfunction(&first, &second, &third);

    printf("Then we have %f %f and %f", first, second, third);

}

void michelfunction(double *a, double *b, double *c) {

    double smallest = *a;
    double middle = *a;
    double highest = *a;
    if (*b < *a) {
        smallest = *b;
    }
    if (smallest > *c) {
        smallest = *c;
    }
    
    if ((*a > *b && *a < *c) || (*a < *b && *a > *c)) {
        middle = *a;
    } else if ((*b > *a && *b < *c) || (*b > *c && *b < *a)) {
        middle = *b;
    } else if ((*c > *a && *c < *b) || (*c > *b && *c < *a)) {
        middle = *c;
    }

    if (highest < *b) {
        highest = *b;
    }
    if (highest < *c) {
        highest = *c;
    }

    *a = smallest;
    *b = middle;
    *c = highest;

}


