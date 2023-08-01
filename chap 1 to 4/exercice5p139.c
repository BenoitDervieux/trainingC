// talkback.c -- nosy, informative program
 #include <stdio.h>
 #include <string.h> // for strlen() prototype
#define BOOK "War and Peace"
int main(void) {
       float cost = 12.99;
       float percent = 80.0;
       printf("This copy of \"%s\" sells for $%f.2\n", BOOK, cost);
       printf("That is %.0f%% of list", percent);

       return 0;

}