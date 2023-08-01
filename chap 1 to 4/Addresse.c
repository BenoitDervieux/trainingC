#include <stdio.h>

int main(void) {
    int years_today;
    int year_birth;

    years_today = 2022;
    year_birth = 1993;
    
    printf("I was born in %d, we are in %d which means I\'m %d, which equals to %d days", 
    year_birth, years_today, years_today - year_birth, (years_today - year_birth) * 365 );

}