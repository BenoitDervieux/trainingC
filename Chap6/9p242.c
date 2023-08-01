// talkback.c -- nosy, informative program
#include <stdio.h>
#include <string.h>

float result(float a, float b);

int main(void) {
        
        float un, deux;
        float resultt;
        printf("Enter a first floating:\n");
        scanf("%f", &un);
        printf("Enter a second floating:\n");
        scanf("%f", &deux);

        resultt = result(un, deux);

        printf("The value of their difference divided by their product is %.5f", resultt);

        return 0;
}

float result(float a, float b) {

        return (a - b) / ( a * b);
}
