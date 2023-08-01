// talkback.c -- nosy, informative program
#include <stdio.h>
#include <ctype.h>

int main(void) {

        char ch;

        printf("Give me a letter of the alphabet, and I will give an animal name\n beginning with that letter.\n");
        printf("Please type in a letter; type # to end my act.\n");
        while ((ch = getchar()) != '#')
        {
                if ('\n' == ch)
                        continue;
                if (islower(ch))
                        switch (ch)
                        {
                        case 'a':
                                printf("argali, a wild sheep in Asia\n");
                                break;
                        case 'b':
                                printf("babiruse, a wild pig in Malay\n");
                                break;
                        case 'c':
                                printf("coati, racconlike mammal\n");
                                break;
                        case 'd':
                                printf("desman, aquatic, molelike critter\n");
                                break;
                        case 'e':
                                printf("echidna, the spiny anteater\n");
                                break;
                        case 'f':
                                printf("fisher, brownish marten\n");
                                break;

                        default:
                                printf("That's a stumper!\n");
                                break;
                        }
                else
                        printf("I recognize only lower case letters.\n");
                while (getchar() != '\n')
                        continue;
                printf("Please type another letter or a #.\n");
        }
        printf("Bye!\n");

        return 0;
        
}

