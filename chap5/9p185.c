#include <stdio.h>
#define TEN 103

int main(void) {
       int n = 96;

       while (n++ < TEN)
              printf("%5c", n); //1  2  3  4  5  6  7  8  9  10
       printf("\n");
       return 0;
}