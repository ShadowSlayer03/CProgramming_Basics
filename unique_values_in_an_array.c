#include<stdio.h>
#include<stdlib.h>

#define SIZE 5

int main()
{
  int i,arr[SIZE],j;
  int uniqueCount =0;
  int duplifound = 0;
 
  //Reading values of array from user //
  
 for(i=0;i<SIZE;i++)
   {
     printf("Enter the array values: \n");
     scanf("%d",&arr[i]);
   }
  
  // Finding Unique Elements //
  
  for(i=0;i<SIZE;i++)
    {
      for(j=0;j<i;j++)
        {
          if(i==j)
            continue;
          
          if(arr[i] == arr[j] )
            duplifound =1;
        }
      if(duplifound!=1)
      {
        printf("Unique Value: %d\n",arr[i]);
        uniqueCount++;
      }
      duplifound=0;
    }
  
  return 0;
}
// 1 2 2 3 4 