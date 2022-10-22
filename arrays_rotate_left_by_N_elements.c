#include <stdio.h>
#include <stdlib.h>
#define SIZE 11
#define N 4

int main() {
  int i;
  int arr[SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9,10, 11};
  int temp[N];

  //Store first N elements to a temp array//
  for(i=0;i<N;i++)
    {
      temp[i]=arr[i];
    }
  
  // Shifting remaining elements by N positions//
  for (i = N; i < SIZE; i++) {
    arr[i - N] = arr[i];
  }

  // Replacing last 2 elements by elements stored in temp array//
  for(i=0;i<N;i++)
    {
      arr[SIZE-N+i]=temp[i];
    }
  
  // Printing the final array//
  for (i = 0; i < SIZE; i++) {
     // Printing the last element without comma //
    if(i==(SIZE-1))
    {
      printf("%d", arr[i]);
      exit(0);
    }
    printf("%d,", arr[i]);
   
    
  }
  return 0;
}