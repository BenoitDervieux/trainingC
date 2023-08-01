// talkback.c -- nosy, informative program
#include <stdio.h>
#include <stdbool.h>
int main(void) {

        char ch;
        int iteration = 1;

        while ((ch = getchar()) != EOF)
        {
                if ((int) ch < 32)
                {
                        printf("CTRL+%c", ch + 64);
                } else {
                        putchar(ch);
                }
                printf("%d ", ch);
                if ((int)ch == 10) {
                        printf("\n");
                } else {
                        iteration++;
                        if (iteration % 10 == 0)
                                printf("\n");
                }
                
        }
        
       
        return 0;
}



