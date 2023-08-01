// talkback.c -- nosy, informative program
#include <stdio.h>
#include <string.h> // for strlen() prototype

int main(void) {
       
       float number;
       printf("Please enter a floating number\n");
       scanf("%f", &number);
       printf("The number is %.3f\n", number);
       printf("The number is %.3e", number);
       return 0;

}