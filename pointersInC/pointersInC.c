#include <stdio.h>
#include <stdlib.h>

int main() {
    //array
    int v[10];
    int * ptr;

    v[2] = 420;

    printf("%zu\n", sizeof(v));
    printf("%p\n", &v);
    ptr = v;

    printf("%d\n", *(ptr + 2));
    printf("%d\n", 2[v]);
    printf("%c\n", "michel"[0]);
    printf("%c\n", "michel"[1]);

}
