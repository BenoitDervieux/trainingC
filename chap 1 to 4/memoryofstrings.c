#include <stdio.h>
#include <string.h>
#define PRAISE "You are an extraordinary being."

int main(void) {

        char name[40];

        printf("What's your name? ");
        scanf("%s", name);
        printf("Hello, %s. %s\n", name, PRAISE);
        printf("Your name of %zd letters occupies %zd cells.\n",
                        strlen(name), sizeof name);
        printf("The phrase of praise has %zd letters",
                        strlen(PRAISE));
        printf("and occupies %zd memory celles.\n", sizeof PRAISE);

        return 0;
} 