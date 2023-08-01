// talkback.c -- nosy, informative program
#include <stdio.h>
#include <string.h> // for strlen() prototype
#include <float.h>

int main(void) {
       
       double premier = 1.0;
       float deuxieme = 2.0;

       printf("%.4f\n", premier);
       printf("%.12f\n", premier);
       printf("%.16f\n", premier);

       printf("%.4f\n", deuxieme);
       printf("%.12f\n", deuxieme);
       printf("%.16f\n", deuxieme);

       printf("%.4f\n", FLT_DIG);
       printf("%f\n", DBL_DIG);

       return 0;
}