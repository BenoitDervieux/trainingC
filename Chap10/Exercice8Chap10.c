/* binary.c -- prints integer in binary form */
 #include <stdio.h>

 void copy_arr(double * arr, double * source, int index1, int index2);


 int main(void)
 {
  double source[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
  double arr3[3];
  copy_arr(arr3, source, 3, 5);

  for (int i = 0; i < 3; i++)
    printf("on teste le target 1: %f\n", arr3[i]);
 
 }

 void copy_arr(double * arr, double * source, int index1, int index2) {
  int j = 0;
  for (int i = index1 - 1; i < index2; i++, j++)
    arr[j]= source[i];
 }


