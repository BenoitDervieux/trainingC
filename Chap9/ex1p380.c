#include <stdio.h>

int min(int n, int p);

int main(void) {

    int a = 10;
    int b = 12;
    int result = min(a, b);
    printf("The minimum is %d", result);

}

int min(int x, int y) {
    if (x > y) {
        return y;
    }
    return x;
}
