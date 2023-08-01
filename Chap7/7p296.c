// talkback.c -- nosy, informative program
#include <stdio.h>
#include <ctype.h>

#define BASICRATE 10.00
#define OVERTIME 1.5
#define FIRST_TAX 15.00
#define SECOND_TAX 20.00
#define THIRD_TAX 25.00

int main(void) {

        int hours_worked;
        float gross_pay, taxes, net_pay;
        gross_pay = taxes = net_pay = 0.0;

        printf("Enter the amount of hours you worked last week:\n");

        while ((scanf("%d", &hours_worked)) == 1) 
        {
                if (hours_worked <= 40) {
                        gross_pay = hours_worked * BASICRATE;
                } else {
                        gross_pay = 40 * BASICRATE;
                        gross_pay += (hours_worked - 40) * OVERTIME * BASICRATE;
                }
                

                if (gross_pay <= 300) {
                        net_pay = gross_pay - (gross_pay * (FIRST_TAX / 100));
                } else if (gross_pay <= 450) {
                        net_pay = 300 - (300 * (FIRST_TAX / 100));
                        net_pay += (gross_pay - 300) - ((gross_pay - 300) * (SECOND_TAX / 100));
                } else {
                        net_pay = 300 - (300 * (FIRST_TAX / 100));
                        net_pay += 150 - (150 * (SECOND_TAX / 100));
                        net_pay += (gross_pay - 450) - ((gross_pay - 450) * (THIRD_TAX/100));
                }

                printf("You got $%.2f dollars this month, your gross salary was $%.2f and you paid $%.2f of taxes\n", net_pay, gross_pay, gross_pay - net_pay);
                printf("Enter the amount of hours you worked last week:\n");

        }

        

        return 0;
        
}

