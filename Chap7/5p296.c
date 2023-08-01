// talkback.c -- nosy, informative program
#include <stdio.h>
#include <ctype.h>

#define MODULO 8

int main(void) {

        char ch;

        while ((ch = getchar()) != '#') {
                
                
                switch(ch){
                        case ' ':
                        ch = '!';
                        putchar(ch);
                        break;
                        case '!':
                        putchar(ch);
                        putchar(ch);
                        break;
                        default:
                        putchar(ch);
                        break;
                }
        }

        return 0;
        
}

