#include <stdio.h>
#define MIN_IN_HOUR 60

int main(void) {

       int number, number_after;

       printf("Enter a number:\n");
       scanf("%d", &number);
       number_after = number + 10;
       while (number <= number_after) 
       {
              printf("%-5d", number);
              number++;
       }
       printf("\nDone\n");

       return 0;

}