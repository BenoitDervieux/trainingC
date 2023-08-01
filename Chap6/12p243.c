// talkback.c -- nosy, informative program
#include <stdio.h>
#include <string.h>


int main(void) {

        double result;
        int terms, number;

        result = 0.0;
        number = 1;

        printf("Enter a number of terms: \n");
        scanf("%d", &terms);

        number = terms;

        while (number != 0)
        {
                if (terms > 0) {
                        for (number = 1; number <= terms; number++ ) {
                                result += 1.0 / (1.0 * number);
                        }
                }
                if (terms < 0) {
                        for (number = terms; number < 0; number++ ) {
                                if (number % 2 == 0) {
                                        result += 1.0 / (1.0 * number);
                                }
                                if (number % 2 == 1) {
                                        result += 1.0 / (-1.0 * number);
                                }
                        }
                }
                number = 0;
        }
        printf("The final result is %f", result);


        

        return 0;
}

