// talkback.c -- nosy, informative program
#include <stdio.h>
#include <string.h> // for strlen() prototype

int main(void) {
       
       char prenom[56];
       printf("Quel est votre prenom? \n");
       scanf("%s", prenom);

       int length = strlen(prenom) + 3;




       printf("Vous vous appelez \"%*s\"", length, prenom);
       return 0;

}