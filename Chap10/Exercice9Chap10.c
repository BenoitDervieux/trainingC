/* binary.c -- prints integer in binary form */
 #include <stdio.h>
 #define COLS 5
 #define ROWS 3

 void copy_array(int rows, int cols, double base_array[rows][cols], double to_copy_arr[rows][cols]);

 int main(void)
 {

  double array[ROWS][COLS] = {{1.1, 2.2, 3.3, 4.4, 5.5},
                        {1.1, 2.2, 3.3, 4.4, 5.5},
                        {1.1, 2.2, 3.3, 4.4, 5.5}};

  double copy[ROWS][COLS];
  copy_array(ROWS, COLS, array, copy);
  for(int i = 0; i < ROWS; i++) {
    for (int j = 0; j < COLS; j++) {
      printf("%0.2f ", copy[i][j]);
    }
    printf("\n");
  }
 }

  void copy_array(int rows, int cols, double base_array[rows][cols], double to_copy_arr[rows][cols]) {
    for (int i = 0; i < rows; i++) {
      for (int j = 0; j < cols; j++) {
        to_copy_arr[i][j] = base_array[i][j];
      }
    }
  }




