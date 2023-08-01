/* binary.c -- prints integer in binary form */
#include <stdio.h>

void function(char * string, int n);

int main(void) {
  printf("Enter a string\n");
  char test[40];
  char * phrase = fgets(test, 40, stdin);
  printf("La phrase c'est %s\n", phrase);
  function(phrase, 5);
  return 0;
}

void function(char * string, int n) {

  char stored[n + 1];
  int i = 0;
  while(i < n) {
    stored[i] = string[i];
    i++;
  }
  stored[n] = '\0';

  printf("The cut string is %s", stored);
}
