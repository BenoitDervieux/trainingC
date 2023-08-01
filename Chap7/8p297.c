// talkback.c -- nosy, informative program
#include <stdio.h>
#include <ctype.h>

_Bool shut = 0;

#define BASICRATE 10.00
#define OVERTIME 1.5
#define FIRST_TAX 15.00
#define SECOND_TAX 20.00
#define THIRD_TAX 25.00

int main(void) {

        int hours_worked;
        int choice;
        float rate = 0.0;
        float gross_pay, taxes, net_pay;
        gross_pay = taxes = net_pay = 0.0;


        printf("****************************************************\n");
                printf("Enter the number corresponding to the desired pay rate or action:\n");
                printf("1) $8.75/hr                             2) $9.33/hr\n");
                printf("3) $10.00/hr                            4) $11.20/hr\n");
                printf("5) quit\n");

        while ((scanf("%d", &choice)) && choice != 5) 
        {
                if ( choice >= 1 && choice <= 4) {
                        shut = 0;
                        switch(choice) {
                                case 1:
                                rate = 8.72;
                                break;
                                case 2:
                                rate = 9.33;
                                break;
                                case 3:
                                rate = 10.00;
                                break;
                                case 4:
                                rate = 11.20;
                                break;
                        }
                } else {
                        shut = 1;
                }

                if (shut == 1) {
                        ;
                } else {
                        printf("Enter the amount of hours you worked last week:\n");

                        scanf("%d", &hours_worked);

                        if (hours_worked <= 40) {
                        gross_pay = hours_worked * rate;
                        } else {
                                gross_pay = 40 * rate;
                                gross_pay += (hours_worked - 40) * OVERTIME * rate;
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
                        }
        
        printf("****************************************************\n");
                printf("Enter the number corresponding to the desired pay rate or action:\n");
                printf("1) $8.75/hr                             2) $9.33/hr\n");
                printf("3) $10.00/hr                            4) $11.20/hr\n");
                printf("5) quit\n");

        }

        printf("Done\n");        

        return 0;
        
}

