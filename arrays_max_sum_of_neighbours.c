#include<stdio.h>
#include<stdlib.h>

#define NUM 5
int main()
{
 int i,sum,max;
 int arr[NUM]={1,9,4,5,9};
  int hi[NUM];

  for(i=0;i<NUM;i++)
    {
      sum = arr[i]+arr[i+1];
      hi[i] = sum;
      printf("%d ",hi[i]);
      
    }
  printf("\n\n");
  max = hi[0];
  
  for(i=1;i<NUM;i++)
    {
      if(hi[i]>max)
      
        max = hi[i];
       
   }    
    printf("MAX sum of 2 neighbouring elements= %d",max);
  
  
  return 0;
}