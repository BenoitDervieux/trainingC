/* binary.c -- prints integer in binary form */
#include <stdio.h>
#include <string.h>

char * reverse(char * string);

int main(void) {

  char word1[40];
  char * toPrint;
  char ch;
  int i = 0;
  printf("Enter the first word(the limit is 40 characters):\n");
  while((ch = getchar()) != '\n') {
      word1[i] = ch;
      i++;
  }
  word1[i] = '\0';

  toPrint = reverse(word1);

  printf("The reverse string is %s", toPrint);
  
  return 0;
}

char * reverse(char * string) {
  int length = strlen(string);

  char * reverse;
  int count = 0;

  for (int i = 0; i < length; i++) {
    reverse[i] = string[length - i - 1];
    count++;
  }
  reverse[count] = '\0';

  return reverse;
}



