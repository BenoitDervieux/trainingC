/* binary.c -- prints integer in binary form */
#include <stdio.h>
#include <string.h>

int is_within(char * string, char caracter);

int main(void) {

  char phrase[40];
  char ch, carac;
  int i = 0;
  int result;
  printf("Enter a character:\n");
  carac = getchar();
  getchar();
  printf("Enter your string(the limit is 40 characters):\n");
  while((ch = getchar()) != '\n') {
    if (ch == ' ') {
      break;
    } else {
      phrase[i] = ch;
      i++;
    }
  }
  phrase[i] = '\0';  
  result = is_within(phrase, carac);
  if (result == 0) {
    printf("The character is not inside the word");
  } else {
    printf("The character is inside the word");
  }
  
  return 0;
}

int is_within(char * string, char caracter) {

  for (int i = 0; i < strlen(string); i++) {
    if (string[i] == caracter) {
      return 1;
    }
  }
  return 0;

}


