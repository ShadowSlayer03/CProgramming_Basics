#include<stdio.h>
#include<stdlib.h>

void resetArray(int size,int *pArr)
{
  int i;
  for(i=0;i<size;i++)
    {
      pArr[i]=0;
    }
  for(i=0;i<size;i++)
    {
     printf("%d",pArr[i]);
    }
}

int main()
{
  int size;
  int i;
  printf("Enter the size of the array\n");
  scanf("%d",&size);
  int arr[size];
  printf("Enter the elements of the array:\n");
  for(i=0;i<size;i++)
    {
      scanf("%d",&arr[i]);
    }
  resetArray(size, arr);
  return 0;
}