#include<stdio.h>
#include<stdlib.h>
#define SIZE 5


void valueSwap(int *val1,int *val2)
{
  int temp,i;
  temp= *val1;
  *val1=*val2;
  *val2=temp;

}
void arraySwap(int *arr1,int *arr2)
{
  int i;
  for(i=0;i<SIZE;i++)
    {
      valueSwap(&arr1[i],&arr2[i]);
    }
}

void printArray(int *Arr1)
{
  int i;
  for(i=0;i<SIZE;i++)
    {
      printf("%d,",Arr1[i]);
    }
}

int main()
{
  int array1[SIZE]={1,2,3,4,5};
  int array2[SIZE]={2,4,6,8,10};
  printf("Array values before swap:\n");
  printArray(array1);
  printf("\n");
  printArray(array2);
  printf("\n");
  arraySwap(array1,array2);
  printf("Array values after swap:\n");
  printArray(array1);
  printf("\n");
  printArray(array2);
  
  return 0;
}