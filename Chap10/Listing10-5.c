/* binary.c -- prints integer in binary form */
 #include <stdio.h>
 #define MONTH 12

 int main(void)
 {
  int days[] = {[7] = 92};
  int i;

  for (i = 0; i < 8; i++)
    printf("Month %2d has %d days.\n", i + 1, days[i]);

  return 0;
  
 }