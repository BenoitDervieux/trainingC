/* binary.c -- prints integer in binary form */
#include <stdio.h>
#include <string.h>

#define LIMIT2 80
#define LIMIT1 10

char * s_gets(char string[][LIMIT2], int n);
void original_length(char string[][LIMIT2], int n);
void collating_sequence(char string[][LIMIT2], int n);
void print_by_first(char string[][LIMIT2], int n);
int count(char * string, int n);
void print_by_first_space(char string[][LIMIT2], int n);
int count_first_word(char * string, int n);

int main(void) {

  char word[LIMIT1][LIMIT2];
  int lim = 0;
  int response = 0;

  printf("Enter up to 3 strings of length max 80 characters:\n");
  while(s_gets(word, lim) && lim < LIMIT1 - 1 && word[lim][0] != '\0') {
    lim++;
    puts("Enter another one:");
  }

  printf("What do you want to do?:\n");
  printf("1) Print original list of strings\n");
  printf("2) Print the strings in ASCII collating sequence\n");
  printf("3) Print the strings in order of increasing length\n");
  printf("4) Print the strings in order of increasing length in the first word\n");
  printf("5) Quit\n");
  while(scanf("%d", &response)) {
    switch (response)
    {
        case 1:
        printf("The response is in number %d\n", response);
        original_length(word, lim);
        break;
        case 2:
        collating_sequence(word, lim);
        break;
        case 3:
        print_by_first(word, lim);
        break;
        case 4:
        print_by_first_space(word, lim);
        break;
        case 5:
        break;
        default:
        printf("The response is in number %d\n", response);
        printf("I did not understand your choice\n");
        break;
    }
  printf("What do you want to do?:\n");
  printf("1) Print original list of strings\n");
  printf("2) Print the strings in ASCII collating sequence\n");
  printf("3) Print the strings in order of increasing length\n");
  printf("4) Print the strings in order of increasing length in the first word\n");
  printf("5) Quit\n");
  if (response == 5) {
    break;
  }
  }
  puts("Bye!");
  
  return 0;
}

char * s_gets(char string[][LIMIT2], int n) {
  char * ret_val;
  int i = 0;
  ret_val = fgets(string[n], LIMIT2, stdin);
  if(ret_val) {
    while(string[n][i] != '\n' && string[n][i] != '\0')
      i++;
    if (string[n][i] == '\n')
        string[n][i] = '\0';
    else
        while(getchar() != '\n')
          continue;
  }
  return ret_val;
}

void original_length(char string[][LIMIT2], int n) {
  for (int i = 0; i < n; i++) {
    printf("%s\n", string[i]);
  }
}

void collating_sequence(char string[][LIMIT2], int n) {
  for (int i = 0; i < n; i++) {
    printf("%s\n", string[i]);
    for (int j = 0; string[i][j] != '\0'; j++) {
      printf("%d.", string[i][j]);
    }
    printf("\n");
  }
}

void print_by_first(char string[][LIMIT2], int n) {
  char * ptrs[n];
  for (int i = 0; i < n; i++) {
    ptrs[i] = string[i];
  }
  char * temp;
  for (int j = 0; j < n; j++) {
    for (int k = 0; k < n; k++) {
      if (count(ptrs[k], LIMIT2) > count(ptrs[j], LIMIT2)) {
        temp = ptrs[j];
        ptrs[j] = ptrs[k];
        ptrs[k] = temp;
      }
    }
  }
  for (int p = 0; p < n; p++) {
    printf("%s\n", ptrs[p]);
  }
}

int count(char * string, int n) {
  int count = 0;
  for (int p = 0; p < n; p++) {
        if (string[p] == '\0') {
          break;
        } else {
          count++;
        }
  }
  return count;
}

void print_by_first_space(char string[][LIMIT2], int n) {
  char * ptrs[n];
  for (int i = 0; i < n; i++) {
    ptrs[i] = string[i];
  }
  char * temp;
  for (int j = 0; j < n; j++) {
    for (int k = 0; k < n; k++) {
      if (count_first_word(ptrs[k], LIMIT2) > count_first_word(ptrs[j], LIMIT2)) {
        temp = ptrs[j];
        ptrs[j] = ptrs[k];
        ptrs[k] = temp;
      }
    }
  }
  for (int p = 0; p < n; p++) {
    printf("%s\n", ptrs[p]);
  }
}

int count_first_word(char * string, int n) {
  int count = 0;
  for (int p = 0; p < n; p++) {
        if (string[p] == '\0' || string[p] == ' ') {
          break;
        } else {
          count++;
        }
  }
  return count;
}
