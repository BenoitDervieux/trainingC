#include <stdio.h>
#define DAYS_IN_WEEK 7

int main(void) {

       int week, days;

       printf("Enter a number of days\n");
       scanf("%d", &days);
       while (days > 0) {
              week = days / DAYS_IN_WEEK;
              days = days % DAYS_IN_WEEK;
              printf("It is %d weeks and %d days\n", week, days);
              printf("Enter a number of days\n");
              scanf("%d", &days);
       }

       printf("Done\n");
       return 0;
       

}