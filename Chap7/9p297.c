// talkback.c -- nosy, informative program
#include <stdio.h>
#include <ctype.h>


int main(void) {

        long unsigned int number;
        _Bool is_prime = 0;

        printf("Enter a number:\n");
        scanf("%lu", &number);

        for (int i = 2; i < number; i++) {
                is_prime = 0;
                for (int j = 2; j < i; j++) {
                        if ((i % j) == 0) {
                                is_prime = 1;
                        } 
                }
                if (is_prime == 1) {
                        continue;
                } else if (is_prime == 0) {
                        printf("%d is prime\n", i);
                }
        }

        

        return 0;
        
}

