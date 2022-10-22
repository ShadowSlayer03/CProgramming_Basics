#include<stdio.h>
#include<stdlib.h>

#define SIZE 10
#define N 2


int main()
{
  int i;
  int arr[SIZE]={1,2,3,4,5,6,7,8,9,10};
  int temp[N];

  for(i=0;i<N;i++)
    {
      temp[i]=arr[SIZE-N+i];
    }
  

  for(i=SIZE-2;i>=0;i--)
    {
      arr[i+N]=arr[i];
    }
  
  for(i=0;i<N;i++)
    {
      arr[i]=temp[i];
    }
  
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