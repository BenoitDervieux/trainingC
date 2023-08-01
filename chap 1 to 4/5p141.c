// talkback.c -- nosy, informative program
#include <stdio.h>
#include <string.h> // for strlen() prototype

int main(void) {
       
       char firstname[30];
       char lastname[30];
       int length_fn, length_ln;

       printf("What's your first name?\n");
       scanf("%s", firstname);
       printf("What's your last name?\n");
       scanf("%s", lastname);
       printf("%s %s\n", firstname, lastname);
       length_fn = strlen(firstname);
       length_ln = strlen(lastname);
       printf("%-*.d %-*.d", length_fn, length_fn, length_ln, length_ln);

       return 0;
}