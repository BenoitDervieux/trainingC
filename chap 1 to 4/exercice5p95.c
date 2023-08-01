#include <stdio.h>
int main(void) {

    float floating_point;
    printf("Enter a floating point value:");
    scanf("%f", &floating_point);
    printf("\nfixed-point notation: %0.6f", floating_point);
    printf("\nexponential notation: %e", floating_point);
    printf("\np notation: : %a", floating_point);

    return 0;

}