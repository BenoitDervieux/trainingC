// talkback.c -- nosy, informative program
#include <stdio.h>

int main(void) {

        long num;
        long sum = 0L;
        _Bool input_is_good;

        printf("Please enter an integer to be summed: ");
        input_is_good = (scanf("%ld", &num) == 1);
        while (input_is_good)
        {
          sum = sum + num;
          printf("Please enter next integer: ");
          input_is_good = (scanf("%ld", &num) == 1);
        }
        printf("Those integers sum to %ld.\n", sum);

}
