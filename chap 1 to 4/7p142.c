// talkback.c -- nosy, informative program
#include <stdio.h>
#include <string.h> // for strlen() prototype
#include <float.h>

#define CONV_GALLON_TO_LITER 3.785
#define CONV_MILE_TO_KILOMETER 1.609

int main(void) {
       
       float miles, gallons, miles_per_gallons;
       float kilometers, liters, liter_per_kilometer;

       printf("How many miles did you drive?\n");
       scanf("%f", &miles);
       printf("How many gallons did you consume?\n");
       scanf("%f", &gallons);
       miles_per_gallons = miles / gallons;
       printf("You consumed %.2f mile per gallons\n", miles_per_gallons);

       liter_per_kilometer = (gallons * CONV_GALLON_TO_LITER) / (miles * CONV_MILE_TO_KILOMETER);

       printf("It's %.1f liter per kilometer", liter_per_kilometer);


       return 0;

}