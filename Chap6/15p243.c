// talkback.c -- nosy, informative program
#include <stdio.h>
#include <string.h>


int main(void) {

        char line[255];
        int indentation = 0;

        printf("Enter a line: \n");
        for (int i = 0; i < 255; i++) {
                scanf("%c", &line[i]);
                indentation++;
                if (line[i] == '\n') {
                        break;
                }
        }
        

        printf("Result: ");
        for (indentation; indentation > 0 ; indentation--) {
                printf("%c", line[indentation - 1]);
        }

        return 0;
}

