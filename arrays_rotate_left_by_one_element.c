#include <stdio.h>
#include <stdlib.h>
#define SIZE 10
int main() {
  int i, temp;
  int arr[SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 11};
  temp = arr[0];

  for (i = 1; i < SIZE; i++) {
    arr[i - 1] = arr[i];
  }
  arr[SIZE-1] = temp;
  for (i = 0; i < SIZE; i++) {
    printf("%d,", arr[i]);
  }
  return 0;
}