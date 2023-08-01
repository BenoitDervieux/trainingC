// talkback.c -- nosy, informative program
#include <stdio.h>
#define MAX 100

int main(void) {
       
       double number, result;

       printf("Enter a number to cube:\n");
       scanf("%lf", &number);

       result = number * number * number;

       printf("The cubed number is %.0lf", result);

       return 0;
}