// talkback.c -- nosy, informative program
#include <stdio.h>
#include <string.h>

int result(int a, int b);

int main(void) {
        
        int un, deux;
        int comput;
        printf("Enter a first number:\n");
        scanf("%d", &un);
        printf("Enter a second number:\n");
        scanf("%d", &deux);

        while (un != deux) {
                comput = result(un, deux);
                printf("The sums of the squares from %d to %d is %d\n", un*un, deux*deux, comput);
                printf("Enter a first number:\n");
                scanf("%d", &un);
                printf("Enter a second number:\n");
                scanf("%d", &deux);
        }

        printf("Done!\n");
        return 0;
}

int result(int a, int b) {

        int resres = 0;

        for (int i = a; i <= b; i++) {
                resres += i*i;
        }

        return resres;
}
