// talkback.c -- nosy, informative program
#include <stdio.h>
#include <ctype.h>

int main(void) {

        char ch;
        int space, newline, other;

        space =  newline = other = 0;


        while ((ch = getchar()) != '#') {

                if (ch == ' ') {
                        space++;
                } else if (ch == '\n') {
                        newline++;
                } else {
                        other++;
                }

        }

        printf("There are %d spaces, %d newlines and %d other characters.\n", space, newline, other);

        return 0;
        
}

