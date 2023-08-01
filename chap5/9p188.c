// talkback.c -- nosy, informative program
#include <stdio.h>
#define ADD_TO_CEL 273.16
#define FAR_CONST 32

int Temperatures(double);

int main(void) {
       
       double temperature_f;
       printf("Enter a temperature in Farenheit: ");
       scanf("%lf", &temperature_f);
       Temperatures(temperature_f);
       while (temperature_f != 1) {
              printf("Enter a temperature in Farenheit: ");
              scanf("%lf", &temperature_f);
              Temperatures(temperature_f);
       }
       printf("Done\n");

       return 0;

}

int Temperatures(double temp) {

       double celcius, kelvin;

       celcius = 5.0 / 9.0 * (temp - FAR_CONST);
       kelvin = celcius + ADD_TO_CEL;

       printf("%.2f degrees Farenheit, %.2f degrees celcius, %.2f kelvins\n", temp, celcius, kelvin);

}