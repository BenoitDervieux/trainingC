// talkback.c -- nosy, informative program
#include <stdio.h>
#include <string.h>


int main(void) {

        double element_array_one[8];
        double element_array_two[8];

        for ( int i = 0; i < 8; i++) {
                printf("Enter a number:\n");
                scanf("%lf", &element_array_one[i]);
        }
        for (int j = 0; j < 8; j++) {
                if (j >= 1 ) {
                        element_array_two[j] = element_array_two[j - 1] + element_array_one[j];
                } else {
                        element_array_two[j] = element_array_one[j];
                }     
        }

        for (int p = 0; p < 8; p++) {
                printf("%-9.2f", element_array_one[p]);
        }

        printf("\n");

        for (int q = 0; q < 8; q++) {
                printf("%-9.2f", element_array_two[q]);
        }

        return 0;
}

