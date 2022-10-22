#include<stdio.h>
#include<stdlib.h>

// Array has good multiplication neighbours if any one element is equal to product of elements previous and after it // 

#define SIZE 4
int main()
{
  int arr[SIZE];
  int i,check=0;
  for(i=0;i<SIZE;i++)
    {
      printf("Enter the element to be placed in the array: \n");
      scanf("%d",&arr[i]);
    }
  for(i=1;i<SIZE-1;i++)
    {
      if(arr[i] == (arr[i-1] * arr[i+1]))
      {
        check++;
      }
        
    }
  if(check!=0)
  {
    printf("Array has good neighbours.");
  }
  else
    printf("Array has no good neighbours.");
    
  return 0;
}