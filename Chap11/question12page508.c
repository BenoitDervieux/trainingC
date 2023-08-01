/* binary.c -- prints integer in binary form */
#include <stdio.h>

char * space(char * st) {
  while (*st != ' ' && * st != '\0')
    st++;
  if (*st == '\0')
    return NULL;
  else
    return st;
}
