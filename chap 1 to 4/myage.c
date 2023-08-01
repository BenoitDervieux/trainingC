#include <stdio.h>

void one(void);
void two(void);
void three(void);

int main(void) {
    printf("starting now:\n");
    one();
}

void one() {
    printf("1\n");
    two();

}
void two() {
    printf("2\n");
    three();
    
}
void three() {
    printf("3");
    
}