// talkback.c -- nosy, informative program
#include <stdio.h>

#define HORI 8
#define VERTI 4

int main(void) {

        int i, j;

        for (i = 1; i <= VERTI; i++)
        {
          for (j = 1; j <= HORI; j++)
          {
            printf("$");
          }
          printf("\n");
        }
}
