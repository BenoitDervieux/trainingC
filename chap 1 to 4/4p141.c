// talkback.c -- nosy, informative program
#include <stdio.h>
#include <string.h> // for strlen() prototype

int main(void) {
       
       float download_speed;
       float size_of_file;
       float seconds;
       printf("Megabit per second?\n");
       scanf("%f", &download_speed);
       printf("Size of the file?\n");
       scanf("%f", &size_of_file);
       seconds = size_of_file / download_speed;
       printf("It will take %.1f seconds to download this file", seconds);

       return 0;
}