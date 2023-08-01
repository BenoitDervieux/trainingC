/* binary.c -- prints integer in binary form */
 #include <stdio.h>

 double difference(double * arr, int size);


 int main(void)
 {

  double arr[10] = {1.5, 0.1, 5.9, 2.2, 1.5, 4.5, 9.6, 5.4, 0.9, 1.3};

  double result = difference(arr, 10);

  printf("The difference is: %f", result);
 
 }

 double difference(double * arr, int size) {
  double biggest = arr[0];
  double smallest = arr[0];
  for (int i = 0; i < size; i++) {
    if (arr[i] > biggest) {
      biggest = arr[i];
    }
    if (arr[i] < smallest) {
      smallest = arr[i];
    }
  }

  return biggest - smallest;
 }




