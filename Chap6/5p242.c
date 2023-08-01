// talkback.c -- nosy, informative program
#include <stdio.h>

int main(void) {
        

        char letter;
        int height;

        printf("Enter a letter:\n");
        scanf("%c", &letter);
        printf("Enter a height:\n");
        scanf("%d", &height);

        for (int i = 0; i < height; i++) {
          for (int j = 1; j <= height - 1 - i; j++)
          {
            printf(" ");
          }
          for (int p = 0; p <= i; p++) {
              printf("%c", letter + p);
          }
          for (int q = i; q > 0; q--)
          {
              printf("%C", letter + q - 1);
          }
          printf("\n");
        }

        return 0;
}
