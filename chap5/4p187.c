#include <stdio.h>
#define FEET_IN_CENTIMETERS 30.48
#define INCH_IN_CENTIMETERS 2.54

//conversions are bad but so are american units

int main(void) {

       float centimeters;
       float feet, inch;

       printf("Enter height in centimeters: ");
       scanf("%f", &centimeters);
       while (centimeters > 0 ) {
              inch = centimeters / INCH_IN_CENTIMETERS;
              feet = centimeters / FEET_IN_CENTIMETERS;
              printf("\n%.1f cm = %.0f feet, %.1f inches\n", centimeters, feet, inch);

              printf("Enter height in centimeters: ");
              scanf("%f", &centimeters);
       }

       printf("Done\n");

       return 0;       

}