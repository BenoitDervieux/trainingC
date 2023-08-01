// talkback.c -- nosy, informative program
#include <stdio.h>

int main(void) {
        

        char letter = 'F'; 

        for (int i = 0; i <= 5; i++) {
          for (int j = 0; j <= i; j++) {
            printf("%c", letter - j);
          }
          printf("\n");
        }

        return 0;
}
