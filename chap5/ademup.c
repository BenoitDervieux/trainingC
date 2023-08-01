// talkback.c -- nosy, informative program
#include <stdio.h>
#define MAX 100

int main(void) {
       
       int count, sum;

       count = 0;
       sum = 0;
       while (count++ < 20)
              sum = sum + count;
       printf("sum = %d\n", sum);

       return 0;
}