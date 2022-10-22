#include<stdio.h>
#include<stdlib.h>

int main()
{
  int i,max;
  int num[10]={8,6,4,3,7,2,1,6,4,7};
  max=num[0];

  for(i=1;i<10;i++)
    {
      if(max<num[i])
      {
        max = num[i];
      }
    }
  printf("The maximum value in the array is %d",max);
  
  
  return 0;
}