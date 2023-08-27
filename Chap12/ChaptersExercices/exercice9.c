 #include <stdio.h>
 #include <stdlib.h>

//To finish

 int main(void) {

    int numberWord;
    char ch;
    int count;
    printf("Enter the number of words, 0 to quit\n");
    while (scanf("%d", &numberWord) == 1 && numberWord > 0 ) {
        printf("Enter %d words now\n", numberWord);
        getchar();
            while(ch=getchar() && ch != '\n') {
                count++;
        }
    }
 }
