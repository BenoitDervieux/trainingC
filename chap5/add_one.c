// talkback.c -- nosy, informative program
#include <stdio.h>
#define SEC_PER_MIN 60

int main(void) {
       
       int ultra = 0, super = 0;

       while (super++ < 5)
       {
          ++ultra;
          printf("Super = %d, ultra = %d \n", super, ultra);
       }

       return 0;
}