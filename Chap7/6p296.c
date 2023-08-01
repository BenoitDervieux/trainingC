// talkback.c -- nosy, informative program
#include <stdio.h>
#include <ctype.h>

#define MODULO 8

int main(void) {

        char ch;
        char ch_before;
        int count = 0;

        while ((ch = getchar()) != '#')
        {
                if (ch == 'i' && ch_before == 'e') {
                        count++;
                }
                ch_before = ch;
        }

        printf("There were %d ei in the sentence", count);

        return 0;
        
}

