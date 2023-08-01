// talkback.c -- nosy, informative program
#include <stdio.h>

int main(void) {

        char alphabet[26];
        char ch = 'a';
        int i;

        for (i = 0; i < 26; i++) {
          alphabet[i] = ch + i;
        }
        for (i = 0; i < 26; i++) {
          printf("%3c", alphabet[i]);
        }

        return 0;
}
