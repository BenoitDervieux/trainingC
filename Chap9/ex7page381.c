#include <stdio.h>

int isAletter(char ch);

int main(void) {

    char ch;
    int chel = 0;

    while((ch = getchar()) != EOF) {
        chel = isAletter(ch);
        if (chel != -1) {
            printf("%d-", chel);
        }
    }
    printf("\n");

}

int isAletter(char ch) {
    if ((64 < (int)ch) && ((int)ch < 91)) {
        return (int)ch - 64;
    } else if ((96 < (int)ch) && ((int)ch < 123)) {
        return (int)ch - 96;
    } else {
        return -1;
    } 

}



