#include <stdio.h>
#define PAGES 336
#define WORDS 65618

int main(void) {
        
        int bph2o = 212;
        int rv;

        rv = printf("%d F is water's boiling point.\n", bph2o);
        printf("The printf() function printed %d characters.\n", rv);

        return 0;
} 