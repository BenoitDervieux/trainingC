/* binary.c -- prints integer in binary form */
 #include <stdio.h>
 #define SIZE 10

 void copy_arr(double arr[][SIZE], double source[][SIZE], int vertical);

 int main(void)
 {

  double arr[3][10] = {{1.5, 0.1, 5.9, 2.2, 1.5, 4.5, 9.6, 5.4, 0.9, 1.3},
                       {1.5, 0.1, 5.9, 2.2, 1.5, 4.5, 9.6, 5.4, 0.9, 1.3},
                       {1.5, 0.1, 5.9, 2.2, 1.5, 4.5, 9.6, 5.4, 0.9, 1.3}};
  double target1[3][10];

  copy_arr(target1, arr, 3);
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 10; j++) {
      printf("%0.2f ", arr[i][j]);
    }
    printf("\n");
  }
  printf("\n\n");
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 10; j++) {
      printf("%0.2f ", target1[i][j]);
    }
    printf("\n");
  }
  

 }

 void copy_arr(double arr[][SIZE], double source[][SIZE], int vertical) {
  for (int i = 0; i < vertical; i++) {
    for (int j = 0; j < SIZE; j++) {
      arr[i][j] = source[i][j];
    }
  }
    
 }




