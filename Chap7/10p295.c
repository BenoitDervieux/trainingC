// talkback.c -- nosy, informative program
#include <stdio.h>
#include <ctype.h>

int main(void) {

        char ch;
        _Bool hach = 0;
        _Bool ccc = 0;

        while ((ch = getchar()) != '#')
        {
                ccc = 0;
                hach = 0;
                if (ch == '\n')
                        ;
                printf("Step 1\n");
                if (ch == 'c')
                        ccc = 1;
                else if (ch == 'b')
                        break;
                else if (ch == 'h')
                        hach = 1;
                if (ccc == 0 ) {
                if (hach == 0 ) {
                        printf("Step 2\n");
                        printf("Step 3\n"); 
                } else {
                        printf("Step 3\n"); 
                }
                }
                
                
        }
        printf("Done\n");

        return 0;
        
}

