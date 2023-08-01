// talkback.c -- nosy, informative program
#include <stdio.h>
#include <ctype.h>

int main(void) {

        int weight, height;

        printf("Enter you wright and your height.\n");

        scanf("%d %d", &weight, &height);
        if (weight < 100 && height > 64) {
                if (height >= 72)
                        printf("You are very tall for your weight.\n");
                else if (height < 72 && height > 64)
                        printf("You are tall for your weight.\n");
        } else if (weight > 300 && height < 48) {
                printf("You are quite short for your weight");
        } else
                printf("You weight is ideal.\n");

        return 0;
        
}

