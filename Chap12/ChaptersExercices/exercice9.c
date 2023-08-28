 #include <stdio.h>
 #include <stdlib.h>

//To finish

 int main(void) {

    int numberWord;
    char ch;
    int count;
    printf("Enter the number of words, 0 to quit\n");
    while (scanf("%d", &numberWord) == 1 && numberWord > 0 ) {
        char ** array = (char **) malloc(numberWord * sizeof (char *));
        printf("Enter %d words now\n", numberWord);
        getchar();
        for (int i = 0; i < numberWord; i++) {
            array[i] = (char *) malloc(40 * sizeof(char *));
            count = 0;
            while((ch = getchar()) && ch != '\n' && ch != ' ') {
                //printf("The char is %c\n", ch);
                array[i][count] = ch;
                count++;
            }
            array[i][count] = '\0';
        }
        for (int i = 0; i < numberWord; i++) {
            printf("%s\n", array[i]);
        }
        free(array);
        printf("Enter the number of words, 0 to quit\n");

    }
    
 }
