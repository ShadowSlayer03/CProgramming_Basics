#include<stdio.h>

int main()
{
  int num,i,sum;
  printf("Enter a number: \n");
  scanf("%d",&num);

//Trivial Solution//
  
 /* for(i=1;i<=num;i++)
    {
    if(i%3==0 && i%5==0)
    {
      sum=sum+i;
    }
    }
  printf("%d",sum);
  return 0; */

  //Optimised Solution//

  for(i=15;i<=num;i=i+15)
    {
      sum=sum+i;
    }
  printf("%d",sum);

  return 0;
}