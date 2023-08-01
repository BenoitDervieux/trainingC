#include <stdio.h>
#define MIN_IN_HOUR 60

int main(void) {

       int minutes, hour;

       printf("How many minutes?\n");
       scanf("%d", &minutes);

       hour = minutes / MIN_IN_HOUR;
       minutes = minutes % MIN_IN_HOUR;

       printf("It is %d hours and %d minutes.\n", hour, minutes);

       return 0;

}