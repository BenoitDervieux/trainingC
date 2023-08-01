/* binary.c -- prints integer in binary form */
 #include <stdio.h>

 void copy_arr(double * arr, double * source, int size);
 void capy_ptr(double arr[], double source[], int size);

 int main(void)
 {
  double source[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
  double target1[5];
  double target2[5];
  double target3[5];
  copy_arr(target1, source, 5);
  capy_ptr(target2, source, 5);

  //copy_ptrs(target3, source, source + 5);
  for (int i =0; i < 5; i++)
    printf("on teste le target 1: %f\n", target2[i]);
 
 }

 void copy_arr(double * arr, double * source, int size) {
  for (int i = 0; i < size; i++)
    arr[i]= source[i];
 }

 void capy_ptr(double arr[], double source[], int size) {
  for (int i = 0; i < size; i++)
    arr[i] = source[i];
 }

