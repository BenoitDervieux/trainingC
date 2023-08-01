// talkback.c -- nosy, informative program
#include <stdio.h>
#include <stdbool.h>
int main(void) {

        int ch = 0;

        while (getchar() != EOF)
                ch++;
        
        printf("There are %d characters in this input\n", ch);
       
        return 0;
}

// Pour activer ce programme il faut faire nom_exercice.exe < nom du file


