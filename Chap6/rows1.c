// talkback.c -- nosy, informative program
#include <stdio.h>
#define ROWS 6
#define CHARS 10

int main(void) {

        int row;
        char ch;

        for (row = 0; row < ROWS; row++)
        {
          for (ch = 'A'; ch < ('A' + CHARS); ch++)
             printf("%5c", ch);
          printf("\n");
        }

        return 0;

}
