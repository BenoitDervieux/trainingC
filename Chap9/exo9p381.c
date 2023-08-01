// power.c -- raises numbers to integer powers
 #include <stdio.h>

 double raise(double x, int exp);
 int main(void)
 {
    double x, xpow;
    int exp;
    int n = 0;
    printf("Enter a number and the positive integer power");
    printf(" to which\nthe number will be raised. Enter q");
    printf(" to quit.\n");
    while(scanf("%lf%d", &x, &exp) == 2) {
      xpow = raise(x, exp);
      printf("%.3g to the power %d is %.5g\n", x, exp, xpow);
      printf("Enter next pair of numbers or q to quit.\n");
    }
    printf("Hope you enjoyed this power trip -- bye!\n");
    return 0;

 }

 double raise(double x, int exp) {
  double number;
  if (exp > 1) {
    number = x * raise(x, exp - 1);
  } else {
    number = x;
  }
  return number;

 }

