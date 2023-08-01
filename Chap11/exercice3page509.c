/* binary.c -- prints integer in binary form */
#include <stdio.h>
#include <string.h>

int main(void) {

  char phrase[40];
  char * stringeuh;
  stringeuh = phrase;
  int i = 0;
  char ch;
  printf("Enter your string:\n");
  while(ch = getchar()) {
    phrase[i] = ch;
    i++;
    if (ch == ' ' || ch == '\n' || ch == '\t') {
      break;
    }
  }
  phrase[i] = '\0';

  printf("The sentence is: %s", stringeuh);
  
  return 0;
}

