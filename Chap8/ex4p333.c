// talkback.c -- nosy, informative program
#include <stdio.h>
#include <ctype.h>

int main(void) {

        char ch;
        int word = 0;
        float number_word = 0;
        float total_word = 0;
        float average_length;

        while((ch = getchar()) != EOF)
                if (isalpha(ch) == 1 || isalpha(ch) == 2) {
                        word++;
                } else if (ch == 32) {
                        number_word++;
                        total_word += word;
                        word = 0;
                }
        average_length =  total_word / number_word;

        printf("The average length of the words in this document is %.2f", average_length);


        return 0;
}



