#include<stdio.h>
#include<stdlib.h>

#define SIZE 6
int main()
{
  int i,j;
  int arr[SIZE];
  

  for(i=0;i<SIZE;i++)
    {
      printf("Enter a value of array: \n");
      scanf("%d",&arr[i]);
    }

  for(i=0;i<SIZE;i++)
    for(j=1;j<SIZE;j++)
  {
    if(SIZE%2 == 0 && arr[i] == arr[SIZE-j])
  {
    printf("It's a palindrome.");
    exit(0);
  }

   else if(SIZE%2 == 0 && arr[i] != arr[SIZE-j])
  {
    printf("It's not a palindrome.");
     exit(0);
  }

  else if(SIZE%2 != 0 && arr[i] == arr[SIZE-j])
  {
    printf("It's a palindrome.");
     exit(0);
  }

  else if(SIZE%2 != 0 && arr[i] != arr[SIZE-j])
  {
    printf("It's not a palindrome.");
    exit(0);
  }
    
  }
  
 
  return 0;
}