#include <stdio.h>
int main(void) {

    float centimeter_in_inches = 2.54;
    float size_in_inches;
    int size_in_centimeter;
    printf("What is your height in centimeters?\n");
    scanf("%d", &size_in_centimeter);
    size_in_inches = size_in_centimeter / 2.54;
    printf("Your size in inches is %f inches", size_in_inches);

    return 0;


}