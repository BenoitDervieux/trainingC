// talkback.c -- nosy, informative program
#include <stdio.h>
#define SEC_PER_MIN 60

int main(void) {
       
       int a = 1, b = 1;
       int a_post, pre_b;

       a_post = a++;
       pre_b = ++b;
       printf("a a_post  b  pre_b \n");
       printf("%ld %5d %5d %5d\n", a, a_post, b, pre_b);

       return 0;
}