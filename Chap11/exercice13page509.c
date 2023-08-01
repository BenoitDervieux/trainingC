/* binary.c -- prints integer in binary form */
#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define LIMIT2 80
#define LIMIT1 10

char * s_gets(char string[][LIMIT2], int n);

int main(int argc, char *argv[]) {

  int count;

  for (int i = argc - 1; i > 0; i--)
    printf("%s ", argv[i]);
  
  printf("\nVoila!\n");

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
