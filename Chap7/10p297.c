// talkback.c -- nosy, informative program
#include <stdio.h>
#include <ctype.h>

#define SINGLE 17850
#define HOH 23900
#define MJ 29750
#define MS 14875


int main(void) {

        int revenue;
        int taxe_rate;
        int tax_to_pay;
        int limit;
        int choice;

        printf("*************************************************************\n");
        printf("Choose your category:\n");
        printf("1) Single                       2) Head of Houseold\n");
        printf("3) Married, Joint               4) Married, Separate\n");
        printf("5) Quit\n");

        while((scanf("%d", &choice)) == 1 && choice != 5) 
        {
                switch(choice) {
                        case 1:
                        limit = SINGLE;
                        break;
                        case 2:
                        limit = HOH;
                        break;
                        case 3:
                        limit = MJ;
                        break;
                        case 4:
                        limit = MS;
                        break;
                        default:
                        break;
                }
                if (choice >= 1 && choice <= 4) {
                        printf("Enter your revenue\n");
                        scanf("%d", &revenue);
                        if (revenue <= limit ) {
                                tax_to_pay = 0.15 * revenue;
                        } else {
                                tax_to_pay = (limit * 0.15) + (revenue - limit) * 0.28;
                        }

                        printf("You will have to pay $%d in tax this year\n", tax_to_pay);
                }
        
        printf("*************************************************************\n");
        printf("Choose your category:\n");
        printf("1) Single                       2) Head of Houseold\n");
        printf("3) Married, Joint               4) Married, Separate\n");
        printf("5) Quit\n");

        }

        printf("Bye!");

        return 0;
        
}

