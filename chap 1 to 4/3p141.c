// talkback.c -- nosy, informative program
#include <stdio.h>
#include <string.h> // for strlen() prototype

int main(void) {
       
       float height;
       char name[10];
       printf("Quelle est votre taille en m?\n");
       scanf("%f", &height);
       int centimetres = height * 100;
       printf("Comment vous appelez-vous?\n");
       scanf("%s", name);
       printf("%s, you are %d centimetres tall.", name, centimetres);
       return 0;

}