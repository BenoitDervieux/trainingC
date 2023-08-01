// talkback.c -- nosy, informative program
#include <stdio.h>
#include <ctype.h>

#define MODULO 8

int main(void) {

        char ch;

        char printage[8];
        int iteration = 0;
        int modulo = 8;

        while ((ch = getchar()) != '#')
        {
                printage[iteration] = ch;
                iteration++;
                iteration = iteration % MODULO;
                if (iteration == 0) {
                        for (int i = 0; i < 8; i++) {
                                printf("The character %c has an ascii value of %d\n", printage[i], printage[i]);
                        }
                }
        }
        for (int j = 0; j < iteration; j++) {
                printf("The character %c has an ascii value of %d\n", printage[j], printage[j]);
        }

        return 0;
        
}

