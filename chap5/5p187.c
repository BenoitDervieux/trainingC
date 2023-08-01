// talkback.c -- nosy, informative program
#include <stdio.h>
#define MAX 100

int main(void) {
       
       int count, sum, days;

       printf("How many days will you receive money?\n");
       scanf("%d", &days);

       count = 0;
       sum = 0;
       while (count++ < days) {
              sum = sum + count;
              printf("Day %d, you'll get %d, for a sum of %d$\n", count, count, sum);
              
       }
              
       printf("You'll get %d$ in total\n", sum);

       return 0;
}