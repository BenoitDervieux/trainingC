// talkback.c -- nosy, informative program
#include <stdio.h>

int main(void) {
        

        char letter = 'A';
        int p = 0;

        for (int i = 0; i <= 5; i++) {
          for (int j = 0; j <= i; j++, p++) {
            printf("%c", letter + p);
          }
          printf("\n");
        }

        return 0;
}
