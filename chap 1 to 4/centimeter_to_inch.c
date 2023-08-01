#include <stdio.h>
int main(void) {

    float pint, cup, ounce, tablespoon, teaspoon;
    printf("Enter a volume in cup\n");
    scanf("%f", &cup);
    pint = cup / 2;
    ounce = cup * 8;
    tablespoon = ounce * 2;
    teaspoon = tablespoon * 3;
    printf("%.2f cup(s) is %.2f pint(s), %.2f once(s), %.2f tablespoon(s) and %.2f teaspoon(s", cup, pint, ounce, tablespoon, teaspoon);

    return 0;

}