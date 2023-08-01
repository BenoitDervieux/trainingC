// talkback.c -- nosy, informative program
#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

int main(void) {

        char ch;
        int lowercase = 0;
        int uppercase = 0;
        int others = 0;

        while ((ch = getchar()) != EOF)
        {
                if (isalpha(ch) == 2)
                {
                        lowercase++;
                } else if (isalpha(ch) == 1) {
                        uppercase++;

                } else {
                        others++;
                }
        }

        printf("There are %d lower characters, %d upper characters and %d other characters", 
                lowercase, uppercase, others);
        
       
        return 0;
}



