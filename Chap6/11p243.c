// talkback.c -- nosy, informative program
#include <stdio.h>
#include <string.h>


int main(void) {

        int integer[8];

        for (int i = 0; i < 8; i++) {
                printf("Enter an integer (%dth):\n", i + 1);
                scanf("%d", &integer[i]);
        }

        for (int j = 7; j >= 0; j--) {
                printf("%d -- ", integer[j]);
        }
        

        return 0;
}

