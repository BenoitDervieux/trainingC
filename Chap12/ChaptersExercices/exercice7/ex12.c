/* manydice.c -- multiple dice rolls */
 /* compile with diceroll.c */
 #include <stdio.h>
 #include <stdlib.h> /* for library srand() */
 #include <time.h> /* for time() */
 #include "diceroll.h" /* for roll_n_dice() */
 /* and for roll_count */
 int main(void)
 {
    int dice,roll;
    int sides;
    int status;
    int sets;

    srand((unsigned int) time(0)); /* randomize seed */
    printf("Enter the number of sets; enter q to stop\n");
    while (scanf("%d", &sets) == 1 && sets > 0 ) {
        printf("How many sides and how many dice?");
        if (status = scanf("%d %d", &sides, &dice) != 0 && sides > 0 && dice > 0 ) {
            if (status == EOF)
                break; /* exit loop */
        } else {
            printf("You should have entered an integer.");
            printf(" Let's begin again.\n");
            while (getchar() != '\n')
                    continue; /* dispose of bad input */
            printf("Enter the number of sets; enter q to stop\n");
            continue; /* new loop cycle */
        }

        printf("Here are %d sets of %d %d-sided throws.\n", sets, dice, sides);
        for (int i = 0; i < sets; i++) {
            roll = roll_n_dice(dice, sides);
            printf("%d ", roll);
        }   
        printf("\nHow many sets? Enter 0 to stop.\n");

    }
    
    printf("The rollem() function was called %d times.\n",
    roll_count); /* use extern variable */
    printf("GOOD FORTUNE TO YOU!\n");
    return 0;
 }