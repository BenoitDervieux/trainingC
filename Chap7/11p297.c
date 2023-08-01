// talkback.c -- nosy, informative program
#include <stdio.h>
#include <ctype.h>

#define ARTICHOKE 2.05
#define BEETS 1.15
#define CARROTS 1.09
#define DISCOUNT1 0.05
#define SHIPPINGUNDER5 6.50
#define SHIPPINGOVER5UNDER20 14.00
#define SHIPPINGMORE20 0.5

int main(void) {

        char ch;
        char contcont;
        float total_price = 0.0;
        int pounds, total_pounds;
        pounds = total_pounds = 0;
        float shipping = 0.0;
        float discount = 0.0;
        _Bool not_understand = 0;

        printf("What do you want to buy today?\n");
        printf("a) Artichokes   b) Beets        c) Carrots\n");
        printf("(q to quit)\n");


        while ((scanf("%c", &ch)) == 1 && ch != 'q') {

                switch(ch) {
                        case 'a':
                        printf("How many pound of Artichoke do you want?\n");
                        scanf("%d", &pounds);
                        total_price += pounds * ARTICHOKE;
                        total_pounds += pounds;
                        break;
                        case 'b':
                        printf("How many pound of Beets do you want?\n");
                        scanf("%d", &pounds);
                        total_price += pounds * BEETS;
                        total_pounds += pounds;
                        break;
                        case 'c':
                        printf("How many pound of Carrots do you want?\n");
                        scanf("%d", &pounds);
                        total_price += pounds * CARROTS;
                        total_pounds += pounds;
                        break;
                        case 'q':
                        printf("Thanks for shopping with us\n");
                        not_understand = 1;
                        break;

                }
                if (not_understand == 1 ) {
                        break;
                } 

                printf("What do you want to buy today?\n");
                printf("a) Artichokes   b) Beets        c) Carrots\n");
                printf("(q to quit)\n");
                continue;

        }

        printf("Initial price to pay: $%.2f\n", total_price);

        if (total_price >= 100) {
                total_price *= 0.95;
                discount = total_price *0.05;
                printf("Applied discount of 5%% $%.2f\n", discount);
        }

        if (total_pounds < 6) {
                total_price += 6.50;
                shipping += 6.50;
        } else if ( total_pounds >= 6 && total_pounds < 21) {
                total_price += 14.0;
                shipping += 14.0;
        } else if (total_pounds >= 21) {
                total_price += 14 + (total_pounds - 20) * 0.5;
                shipping += 14 + (total_pounds - 20) * 0.5;
        }

        printf("Shipping $%.2f\n", shipping);

        
        printf("Total price $%.2f\n", total_price);        


        

        return 0;
        
}

