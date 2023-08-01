/* binary.c -- prints integer in binary form */
#include <stdio.h>
#include <string.h>

char * findchar(char * string, char caracter);

int main(void) {

  char phrase[40];
  char ch;
  int i = 0;
  char * result;
  printf("Enter your string(the limit is 40 characters):\n");
  while((ch = getchar()) != '\n') {
    phrase[i] = ch;
    i++;
  }
  phrase[i] = '\0';
  printf("Enter a character:\n");
  ch = getchar();
  result = findchar(phrase, ch);
  printf("The character is %c", * result);
  
  return 0;
}

char * findchar(char * string, char caracter) {

  for (int i = 0; string[i] != '\0'; i++) {
    printf("%c\n", string[i]);
    if (string[i] == caracter) {
      return string + i;
    } 
  }
  return NULL;

}

