/* binary.c -- prints integer in binary form */
#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define LIMIT2 80
#define LIMIT1 10

char * s_gets(char string[][LIMIT2], int n);

int main(void) {

  char ch;
  char myString[100];
  int wordCount = 0;
  int lowerCaseNumber = 0;
  int upperCaseNumber = 0;
  int punctuationCharacter = 0;
  int digitNumber = 0;

  FILE *fptr;

  fptr = fopen("text.txt", "r");

  while(fgets(myString, 100, fptr)) {
    for (int i = 0; i < 100; i++) {
      ch = myString[i];
      if (ch == EOF) {
        break;
      }
        if(isspace(ch)) {
        wordCount++;
      }
      if (isdigit(ch)) {
        digitNumber++;
      } else if (islower(ch)) {
        lowerCaseNumber++;
      } else if (isupper(ch)) {
        upperCaseNumber++;
      }
      if (ispunct(ch)) {
        punctuationCharacter++;
      }
    }

  }

  printf("There are %d words in this text.\n", wordCount);
  printf("There are %d lower case characters in this text.\n", lowerCaseNumber);
  printf("There are %d upper case characters in this text.\n", upperCaseNumber);
  printf("There are %d punctuation characters in this text.\n", punctuationCharacter);
  printf("There are %d digit numbers in this text.\n", digitNumber);
  
  return 0;
}

char * s_gets(char string[][LIMIT2], int n) {
  char * ret_val;
  int i = 0;
  ret_val = fgets(string[n], LIMIT2, stdin);
  if(ret_val) {
    while(string[n][i] != '\n' && string[n][i] != '\0')
      i++;
    if (string[n][i] == '\n')
        string[n][i] = '\0';
    else
        while(getchar() != '\n')
          continue;
  }
  return ret_val;
}
