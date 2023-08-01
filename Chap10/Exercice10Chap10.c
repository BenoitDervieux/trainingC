/* binary.c -- prints integer in binary form */
 #include <stdio.h>

 void add_three_array(int size, double * first, double * second, double * sum_array);

 int main(void)
 {
  int size = 5;
  double array1[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
  double array2[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
  double sum_of_arrays[5];

  add_three_array(5, array1, array2, sum_of_arrays);

  for(int i = 0; i < 5; i++)
    printf("%0.2f \n", sum_of_arrays[i]);

 }

  void add_three_array(int size, double * first, double * second, double * sum_array) {
    for (int i = 0; i < size; i++) {
      sum_array[i] = first[i] + second[i];
    }
  }





