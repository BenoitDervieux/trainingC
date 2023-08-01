// talkback.c -- nosy, informative program
#include <stdio.h>
#include <string.h> // for strlen() prototype

int main(void) {
       
       char prenom[56];
       char nom[56];
       printf("Quel est votre prenom? \n");
       scanf("%s", prenom);
       printf("Quel est votre nom? \n");
       scanf("%s", nom);

       printf("Vous vous appelez %s %s", nom, prenom);
       return 0;

}