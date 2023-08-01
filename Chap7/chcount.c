// talkback.c -- nosy, informative program
#include <stdio.h>
#define PERIOD '.'
#include <iso646.h>

int main(void) {

        char ch;
        int charcount = 0;

        while ((ch = getchar()) != PERIOD)
        {
                if (ch != '"' and ch != '\'')
                        charcount++;
        }
        printf("There are %d non-quote characters.\n", charcount);

        return 0;





}

