#include <stdio.h>

double larger_of(double a, double b);

int main(void) {

    printf("The result is %f", larger_of(100,4));

}

double larger_of(double a, double b) {
    if (a > b) {
        return a;
    }
    return b;
}


