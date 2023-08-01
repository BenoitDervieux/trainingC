// talkback.c -- nosy, informative program
#include <stdio.h>
#include <ctype.h>

#define MODULO 8

int main(void) {

        int integ_entered;
        int even = 0;
        int odd = 0;
        float average_value_even = 0.0;
        float average_value_odd = 0.0;
        float result_even, result_odd;

        while ((scanf("%d", &integ_entered)) && integ_entered != 0)
        {
                if (integ_entered % 2 == 0 ) {
                        even++;
                        average_value_even += integ_entered;
                } else {
                        odd++;
                        average_value_odd += integ_entered;
                }
        }

        if (average_value_even == 0.0) {
                average_value_even = 0.0;
        } else {
                average_value_even = average_value_even / even;
        }
        if (average_value_odd == 0.0) {
                average_value_odd = 0.0;
        } else {
                average_value_odd = average_value_odd / odd;
        }
        

        printf("There was %d even numbers, their average value was %.1f\n", even, average_value_even);
        printf("There was %d odd numbers, their average value was %.1f\n", odd, average_value_odd);


        return 0;
        
}

