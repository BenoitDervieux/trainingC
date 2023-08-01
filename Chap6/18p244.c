// talkback.c -- nosy, informative program
#include <stdio.h>
#include <string.h>

#define DUNBAR_CST 150


int main(void) {

        long int friends = 5;
        long int dunbar_friends;
        long int friends_dropout = 1;
        int week = 0;
        do {

                friends -= friends_dropout;
                friends *= 2;
                week++;
                friends_dropout++;
                dunbar_friends = friends * DUNBAR_CST;
                printf("Number of friends: %ld on week %d\n", friends, week);


        } while (friends < dunbar_friends); 

        printf("It took %d weeks to reach the dunbar number", week);

                

        return 0;
}

