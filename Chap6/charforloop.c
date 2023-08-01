// talkback.c -- nosy, informative program
#include <stdio.h>

int main(void) {

        char ch;
        double debt;
        int x;
        int y = 55;
        int num = 0;

        for (ch = 'a'; ch <= 'z'; ch++)
          printf("The ASCII value for %c is %d.\n", ch, ch);
        
        for (debt = 100.0; debt < 150.0; debt = debt * 1.1)
            printf("Your debit is now $%.2f.\n", debt);
        
        for (x = 1; y <= 75; y = (++x * 5) + 50)
            printf("%10d %10d\n", x, y);

        for (printf("Keep entering numbers!\n"); num !=6; )
            scanf("%d", &num);
        printf("That's the one I want\n");

        return 0;

}
