#include <stdio.h>

void chline(char ch, int n, int p);

int main(void) {

    chline('a', 10, 5);

}

void chline(char ch, int n, int p) {
    for (int i = 0; i < p; i++) {
        for (int j = 0; j < n; j++) {
            printf("%c", ch);
        }
        printf("\n");
    }
}

