#include <stdio.h>
int main(void) {

    double sec_in_years = 3.146E7;
    int age;
    double age_in_sec;

    printf("What is your age?(in years)\n");
    scanf("%d", &age);
    age_in_sec = age * sec_in_years;
    printf("You have lived %E seconds", age_in_sec);

    return 0;

}