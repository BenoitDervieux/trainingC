/* binary.c -- prints integer in binary form */
 #include <stdio.h>

 void reverse(double * arr, int size);


 int main(void)
 {

  double arr[10] = {1.5, 0.1, 5.9, 2.2, 1.5, 4.5, 9.6, 5.4, 0.9, 1.3};

  printf("Array en ordre normal\n");
  for (int i = 0; i < 10; i++)
    printf("%0.2f\n", arr[i]);
  
  reverse(arr, 10);
  printf("\n\n");

  printf("Array en reverse\n");
  for (int i = 0; i < 10; i++)
    printf("%0.2f\n", arr[i]);
  
 
 }

 void reverse(double * arr, int size) {
  double arr_copy[size];

  for (int i = 0; i < size; i++)
    arr_copy[i] = arr[size - 1 - i];
  
  for (int j = 0; j < size; j++)
    arr[j] = arr_copy[j];

 }




