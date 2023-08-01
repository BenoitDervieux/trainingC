/* binary.c -- prints integer in binary form */
 #include <stdio.h>

 void print_values(int rows, int * arr[][5]);
 void double_values(int rows, int * arr[][5]);

 int main(void)
 {

  int array[3][5] = {{1, 2, 3, 4, 5},
                     {1, 2, 3, 4, 5},
                     {1, 2, 3, 4, 5}};
  
  print_values(3, array);
  double_values(3, array);

  print_values(3, array); 

 }

 void print_values(int rows, int * arr[][5]) {
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < 5; j++) {
      printf("%d ", arr[i][j]);
    }
    printf("\n");
  }

 }

 void double_values(int rows, int * arr[][5]) {
  int buffer = 0;
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < 5; j++) {
      buffer = arr[i][j];
      arr[i][j] = 2 * buffer;
    }
    printf("\n");
  }

 }




