#include<stdio.h>
#include<stdlib.h>

int main()
{
  int i=1,j=1,num;
  printf("Enter a number: \n");
  scanf("%d",&num);

  while(j<=num)
    {
      i=j*2;
      printf("%d",i);
      
    //Just to make sure that comma doesnt appear at the end//
      if(i==(num*2))
     {
       break;
     }
      
      printf(",");
      j++;
     
    }
  
  return 0;
}