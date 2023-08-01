// talkback.c -- nosy, informative program
#include <stdio.h>
#include <string.h>


int main(void) {

        long int sum = 1000000;
        int years = 0;

        do
        {
                sum -= 100000;
                sum += (sum * 0.08);
                years++;
                printf("Money on the account %d\n", sum);
        } while (sum > 0);

        printf("It took %d years for Chuckie to empty his account\n", years - 1);

        

        return 0;
}

