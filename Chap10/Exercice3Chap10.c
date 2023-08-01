/* binary.c -- prints integer in binary form */
 #include <stdio.h>

 int biggest(int * arr, int size);


 int main(void)
 {

  int arr[10] = {45,10,59,22,15,45,56,54,789,13};

  int result = biggest(arr, 10);

  printf("The biggest is: %d", result);
 
 }

 int biggest(int * arr, int size) {
  int result = arr[0];
  for (int i = 0; i < size; i++) {
    if (arr[i] > result) {
      result = arr[i];
    }
  }
  return result;
 }




