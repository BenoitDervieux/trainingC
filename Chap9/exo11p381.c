/* binary.c -- prints integer in binary form */
 #include <stdio.h>
 int main(void)
 {
  int number;
  printf("Enter the number of Fibonnacci to print (q to quit):\n");
  while (scanf("%d", &number) == 1)
  {
    int first_term = 1;
    int second_term = 1;
    int total_term = 0;
    if (number == 1 || number == 2) {
      printf("The Fibonnacci number at term %d is: %d", number, first_term);
    } else {
        for (int i = 0; i < number - 2; i++) {
        total_term = first_term + second_term;
        first_term = second_term;
        second_term = total_term;
      }
      printf("The Fibonnacci number at term %d is: %d", number, total_term);
    }
    putchar('\n');
    printf("Enter an integer (q to quit):\n");
  }
  printf("Done.\n");
  return 0;
 }