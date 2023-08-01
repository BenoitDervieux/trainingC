/* binary.c -- prints integer in binary form */
 #include <stdio.h>

 int biggest(double * arr, int size);


 int main(void)
 {

  double arr[10] = {1.5, 1.0, 5.9, 2.2, 1.5, 4.5, 9.6, 5.4, 0.9, 1.3};

  int result = biggest(arr, 10);

  printf("The biggest is in the index: %d", result);
 
 }

 int biggest(double * arr, int size) {
  int result = 0;
  double biggest = arr[0];
  for (int i = 0; i < size; i++) {
    if (arr[i] > biggest) {
      biggest = arr[i];
      result = i;
    }
  }
  return result;
 }




