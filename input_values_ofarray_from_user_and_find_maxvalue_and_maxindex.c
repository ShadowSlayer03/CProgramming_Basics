#include<stdio.h>
#include<stdlib.h>

int main()
{
  int i,max,index=0;
  int num[5];

  for(i=0;i<5;i++)
    {
      printf("Enter the values of array: \n");
      scanf("%d",&num[i]);
    }
  
  max=num[0];

  for(i=1;i<5;i++)
    {
      if(max<num[i])
      {
        max = num[i];
        index = i;
      }
    }
  printf("The maximum value in the array is %d \n",max);
  printf("The maximum value in the array is at index position %d",index);
  
  
  
  
  return 0;
}