/* binary.c -- prints integer in binary form */
#include <stdio.h>

void function(char * string, int n);

int main(void) {
  printf("Enter a string\n");
  char test[40];
  char * phrase = fgets(test, 40, stdin);
  int gransen = 0;
  printf("Enter the number of letter to take:");
  scanf("%d", &gransen);
  function(test, gransen);
  return 0;
}

void function(char * string, int n) {

  char stored[n + 1];
  int i = 0;
  while(i < n) {
    if (string[i] == ' ') {
      stored[i] = '\0';
      break;
    } else {
      stored[i] = string[i];
      i++;
    }
  }
  if (stored[i] != '\0') {
    stored[n] = '\0';
  }
  printf("The cut string is %s", stored);
}
