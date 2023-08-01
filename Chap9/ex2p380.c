#include <stdio.h>

void chline(char ch, int n, int p);

int main(void) {

    chline('a', 10, 5);

}

void chline(char ch, int n, int p) {
    int times = n - p;
    if (times > 0) {
        for (int i = 0; i < times; i++)
            printf("%c\n", ch);
    }
}

