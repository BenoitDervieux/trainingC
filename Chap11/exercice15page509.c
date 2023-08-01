/* binary.c -- prints integer in binary form */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define LIMIT2 80
#define LIMIT1 10
/*Implementation a bit shy of atoi using command line argument
need to understand how to complie without running using vscode*/

char * s_gets(char string[][LIMIT2], int n);
int myatoi(char * string, int n);

int main(int argc, char *argv[]) {
  int argument = 0;
  printf("Check the argument:\n");
  argument = myatoi(argv[1], strlen(argv[1]));
  if (argument == 0) {
    printf("Not a number");
  } else {
    printf("The number is %d", argument);
  }
  
  return 0;
}

int myatoi(char * string, int n) {
  char list[n + 1];
  for (int i = 0; i < n; i++) {
    if (isdigit(string[i])) {
      list[i] = string[i];
    } else {
      return 0;
    }
  }
  list[n + 1] = '\0';
  
  int coef = 1;
  int number = 0;
  for (int j = n - 1; j > -1; j--) {
    number += (list[j] - 48) * coef;
    coef = coef * 10;
  }
  return number;
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
