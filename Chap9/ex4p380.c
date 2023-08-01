#include <stdio.h>

double harmonic_mean(double a, double b);

int main(void) {

    printf("The result is %f", harmonic_mean(1,4));

}

double harmonic_mean(double a, double b) {
    double inverse_a = 1 / a;
    double inverse_b = 1 / b;
    double average = (inverse_a + inverse_b) / 2;
    return 1/average;
}


