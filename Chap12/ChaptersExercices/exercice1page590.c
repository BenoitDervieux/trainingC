/* binary.c -- prints integer in binary form */
#include <stdio.h>

void critic(int units);

int main() {
  
  int units = 0;

  printf("How many pounds to a firkin of butter?\n");
  scanf("%d", &units); 

  do {
    critic(units);
    scanf("%d", &units);
  } while (units !=56);
  printf("You must have looked it up!\n");

  return 0;
}

void critic(int units)
{
    if (units != 56)
        printf("No luck, my friend. Try again.\n");
}