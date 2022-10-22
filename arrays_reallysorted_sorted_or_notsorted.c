#include<stdio.h>
#include<stdlib.h>

#define SIZE 5

int main()
{
  int i,count;
  int arr[SIZE] = {1,2,3,4,8};

  for(i=1;i<(SIZE);i++)
    {
      if(arr[i-1]<arr[i])
       count = 1;
      else if(arr[i-1]==arr[i])
        count = -1;
      else
        count = 0;
     
      

      if(count == -1)
    {
      printf("Sorted");
      exit(0);
  }
    else if(count == 0)
    {
      printf("Not Sorted");
      exit(0);
    }
      
 }  
  printf("Really Sorted");
  return 0;
}