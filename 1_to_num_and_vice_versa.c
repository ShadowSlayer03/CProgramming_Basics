#include<stdio.h>
#include<stdlib.h>

int main()
{
  int num,i,j;
  printf("Enter a number: \n");
  scanf("%d",&num);

  for(i=1;i<=num;i++)
    {
    printf("%d",i);
  if(i==num)
  {
  break;  
  }    
    printf(","); 
      }
  printf("\n");
  
  for(i=num;i>=1;i--)
    {
    printf("%d",i);
  if(i==1)
  {
  break;  
  }    
    printf(",");     

    }
  return 0;
  
}
  