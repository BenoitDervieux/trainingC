// talkback.c -- nosy, informative program
#include <stdio.h>
#define MAX 100

int main(void) {
       
       int first_operand, second_operand, result;

       printf("This program computes moduli\n");
       printf("Enter an integer to serve as the second operand: ");
       scanf("%d", &second_operand);
       printf("Now enter the first operand: ");
       scanf("%d", &first_operand);
       result = first_operand % second_operand;
       printf("%d %% %d is %d\n", first_operand, second_operand, result);

       while (first_operand > 0 ) 
       {
              printf("Enter next number for first operand:");
              scanf("%d", &first_operand);
              result = first_operand % second_operand;
              printf("%d %% %d is %d\n", first_operand, second_operand, result);
       }

       printf("Done\n");

}