// talkback.c -- nosy, informative program
#include <stdio.h>
#include <string.h>


int main(void) {

        float deirdre, daphne;
        deirdre = 100.0;
        daphne = 100.0;
        float de_interest = 10;
        float dap_interest = 5;
        int year = 0;

        while (deirdre >= daphne) {
                printf("Sum for the year: %d\n", year);
                printf("Deirdre: %f\n", deirdre);
                printf("Daphne: %f\n", daphne);
                deirdre += 100.0 * (de_interest/100);
                daphne += (daphne * (dap_interest/100));
                year++;
        }

        printf("It needs %d years for Daphne to have a bigger investment\n", year);
        printf("Deirdre: %f\n", deirdre);
        printf("Daphne: %f\n", daphne);

        return 0;
}

