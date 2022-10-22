#include<stdio.h>
#include<stdlib.h>

#define SIZE 5

int main()
{
  int i;
  int arr[SIZE]={1,2,3,4,5};
  int temp;

  temp=arr[SIZE-1];

  for(i=SIZE-2;i>=0;i--)
    {
      arr[i+1]=arr[i];
    }
  arr[0]=temp;
  for(i=0;i<SIZE;i++)
    {
      if(i==(SIZE-1))
      {
        printf("%d",arr[i]);
        exit(0);
      }
      printf("%d,",arr[i]);
    }
  return 0;
}