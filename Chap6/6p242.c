// talkback.c -- nosy, informative program
#include <stdio.h>

int main(void) {
        
        int upper_limit, lower_limit;
        int integer, square, cube;
        printf("Enter the lower limit:\n");
        scanf("%d", &lower_limit);
        printf("Enter the upper limit:\n");
        scanf("%d", &upper_limit);
        
        integer = lower_limit;

        printf("Simple - Square - Cube\n"); 
        for (int i = lower_limit; i <= upper_limit; i++) {
          printf("%5d %5d %5d\n", integer, integer*integer, integer*integer*integer);
          integer++;
        }
        

        return 0;
}
