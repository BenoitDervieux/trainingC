// talkback.c -- nosy, informative program
#include <stdio.h>
#include <ctype.h>


int main(void) {

        char ch;

        while((ch = getchar()) != '#')
                putchar(ch);

        return 0;
        
}

