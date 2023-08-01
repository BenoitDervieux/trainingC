// talkback.c -- nosy, informative program
#include <stdio.h>
#include <string.h>

int main(void) {
        
        char word[33];
        int size;
        printf("Enter a word:\n");
        scanf("%s", word);
        
        size = strlen(word);

        for (int i = size - 1; i >= 0; i--) {
          printf("%c", word[i]);
        }

        return 0;
}
