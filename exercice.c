/* binary.c -- prints integer in binary form */
 #include <stdio.h>
 #define ROWS 3
 #define COLS 5

 void average(int rows, int array[][COLS]);
 void total_average(int rows, int array[][COLS]);
 void biggest_value(int rows, int array[][COLS]);

 int main(void)
 {

  int user_array[ROWS][COLS];

  int value = 0;
  for (int i = 0; i < ROWS; i++) {
    for (int j = 0; j < COLS; j++) {
      printf("Enter a number for the case %d and %d: ", i + 1, j + 1);
      scanf("%d", &value);
      user_array[i][j] = value;
    }
  }

  /*int user_array[ROWS][COLS] = {{1, 2, 3, 4, 5},
                                {1, 2, 3, 4, 5},
                                {1, 2, 3, 4, 5},
                                {1, 2, 3, 4, 5},
                                {1, 2, 3, 4, 5}};*/


  for (int i = 0; i < ROWS; i++) {
    for (int j = 0; j < COLS; j++) {
      printf("%d ", user_array[i][j]);
    }
    printf("\n");
  }
  average(ROWS, user_array);
  total_average(ROWS, user_array);
  biggest_value(ROWS, user_array);

 }

  void average(int rows, int array[][COLS]) {
    int total_per_line = 0;
    float average;
    for (int i = 0; i < rows; i++) {
      for (int j = 0; j < COLS; j++) {
        total_per_line += array[i][j];
      }
      average = total_per_line / COLS;
      printf("L'average de la ligne %d est %0.2f\n", i, average);
      total_per_line = 0;
    }
      
  }

   void total_average(int rows, int array[][COLS]) {
    int total_per_line = 0;
    float average;
    for (int i = 0; i < rows; i++) {
      for (int j = 0; j < COLS; j++) {
        total_per_line += array[i][j];
      }
    }
    average = total_per_line / (rows * COLS);
    printf("L'average total est de %0.2f\n", average);

   }

   void biggest_value(int rows, int array[][COLS]) {

    int biggest = array[0][0];
    for (int i = 0; i < rows; i++) {
      for (int j = 0; j < COLS; j++) {
        if (array[i][j] > biggest) {
          biggest = array[i][j];
        }
      }
    }
    printf("La biggest value est %d\n", biggest);

   }





