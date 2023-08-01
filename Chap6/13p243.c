// talkback.c -- nosy, informative program
#include <stdio.h>
#include <string.h>


int main(void) {

        int element_array[8];
        int p = 0;
        element_array[0] = 1;

        for (int i = 1; i < 8; i++) {
                element_array[i] = 2*element_array[i - 1];
        }

        do {
                printf("%d\n", element_array[p]);
                p++;
        } while (p < 8);

        return 0;
}

