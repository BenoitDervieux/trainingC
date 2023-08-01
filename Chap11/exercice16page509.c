/* binary.c -- prints integer in binary form */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define LIMIT2 80
#define LIMIT1 10

//to start the program, you need to enter .\exercice -p nameoffile
// where exercice is the name of the program




int main(int argc, char *argv[]) {
  FILE *fptr;

  fptr = fopen(argv[2], "r");

  if (fptr == NULL) {
    printf("File can't be open\n");
  }

  char ch;

  do {
    ch = fgetc(fptr);
    if (strcmp(argv[1], "-l") == 0) {
        printf("%c", tolower(ch));
      } else if (strcmp(argv[1], "-u") == 0) {
        printf("%c", toupper(ch));
      } else {
        printf("%c", ch);
      }

  } while (ch != EOF);

  fclose(fptr);
  
  return 0;
}