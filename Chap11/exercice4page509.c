/* binary.c -- prints integer in binary form */
#include <stdio.h>
#include <string.h>

int main(void) {

  char phrase[40];
  int i = 0;
  int number;
  char ch;
  printf("Enter your string(the limit is 40 characters):\n");
  while((ch = getchar()) != '\n') {
    phrase[i] = ch;
    i++;
  }
  phrase[i] = '\0';
  printf("Enter a number:\n");
  scanf("%d", &number);
  phrase[number] = '\0';

  printf("The sentence is: %s", phrase);
  
  return 0;
}

