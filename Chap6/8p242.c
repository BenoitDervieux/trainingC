// talkback.c -- nosy, informative program
#include <stdio.h>
#include <string.h>

int main(void) {
        
        float un, deux;
        float result;
        printf("Enter a first floating:\n");
        scanf("%f", &un);
        printf("Enter a second floating:\n");
        scanf("%f", &deux);

        result = ( un - deux ) / ( un * deux);

        printf("The value of their difference divided by their product is %.5f", result);

        return 0;
}
