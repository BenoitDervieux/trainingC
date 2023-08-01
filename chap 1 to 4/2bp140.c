// talkback.c -- nosy, informative program
#include <stdio.h>
#include <string.h> // for strlen() prototype

int main(void) {
       
       char prenom[56];
       printf("Quel est votre prenom? \n");
       scanf("%s", prenom);


       printf("Vous vous appelez \"%-20.20s\"", prenom);
       return 0;

}