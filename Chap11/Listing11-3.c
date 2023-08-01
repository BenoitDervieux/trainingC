/* binary.c -- prints integer in binary form */
 #define MSG "I'm special"
 #include <stdio.h>

 #define MAXLENGTH 81

 int main(void)
 {
  char ar[] = MSG;
  const char *pt = MSG;
  printf("adress of \"I'm special\": %p\n", "I'm special");
  printf("                  adress ar: %p\n", ar);
  printf("                  adress pt: %p\n", pt);
  printf("                  adress of MSG: %p\n", MSG);
  printf("adress of \"I'm special\": %p\n", "I'm special");

  return 0; 

 }





