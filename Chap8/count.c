// talkback.c -- nosy, informative program
#include <stdio.h>
#include <stdbool.h>
int main(void) {

        int ch;
        int count = 0;

        while ((ch = getchar()) != EOF)
                count++;
        
        printf("%d", count);

       
        return 0;
}



