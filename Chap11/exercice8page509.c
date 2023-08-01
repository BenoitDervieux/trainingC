/* binary.c -- prints integer in binary form */
#include <stdio.h>
#include <string.h>

char * string_in(char * s1, char * s2);

int main(void) {

  char word1[40];
  char word2[40];
  char ch;
  int i = 0;
  int j = 0;
  int number;
  char * phrase;
  printf("Enter the first word(the limit is 40 characters):\n");
  while((ch = getchar()) != '\n') {
    if (ch == ' ') {
      break;
    } else {
      word1[i] = ch;
      i++;
    }
  }
  word1[i] = '\0';

  printf("Enter the second word(the limit is 40 characters):\n");
  while((ch = getchar()) != '\n') {
    if (ch == ' ') {
      break;
    } else {
      word2[j] = ch;
      j++;
    }
  }
  word2[j] = '\0';


  string_in(word1, word2);
  
  return 0;
}

char * string_in(char * s1, char * s2) {
  int sameFirst = 0;
  int iFirst = 0;
  int sameS2 = 0;
  for (int i = 0; i < strlen(s1); i++) {
    if (s2[0] == s1[i]) {
      sameFirst = 1;
      iFirst = i;
    }
    if (sameFirst == 1) {
    for (int j = 0; j < strlen(s2); j++) {
      if (s2[0 + j] == s1[iFirst + j]) {
        sameS2 = 1;
      } else {
        sameS2 = 0;
        break;
      }
    }
    }
    if (sameFirst == 1 && sameS2 == 1) {
      printf("It is inside\n");
      return s1 + iFirst;
    } else {
      sameFirst = 0;
    }
  }
  printf("Not inside\n");
  return NULL;
}


