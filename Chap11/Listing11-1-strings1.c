/* binary.c -- prints integer in binary form */
 #include <stdio.h>
 #define MSG "I am a symbolic string constant."
 #define MAXLENGTH 81

 int main(void)
 {
  char words[MAXLENGTH] = "I am a string in an array.";
  char greeting[50] = "Hello, and" " how are" " you"
                        " today!";
  const char * pt1 = "Something is pointing at me.";
  puts("Here are some strings:");
  puts(MSG);
  puts(words);
  puts(pt1);
  puts("wesh alors");
  words[8] = 'p';
  puts(words);
  puts(greeting);

  return 0; 

 }





