/* binary.c -- prints integer in binary form */
#include <stdio.h>
#include <string.h>

char * mystrncopy(char * s1, char * s2, int n);

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
  printf("Enter a number:\n");
  scanf("%d", &number);

  phrase = mystrncopy(word2, word1, number);

  printf("The result is %s\n", phrase);
  
  return 0;
}

char * mystrncopy(char * s1, char * s2, int n) {

  int size = strlen(s2);

  for (int i = 0; i < n + 1; i++)
    s2[size + i] = s1[i];
  
  s2[size + n] = '\0';
  
  return s2;

}



