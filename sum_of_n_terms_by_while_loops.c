#include<stdio.h>

int main()
{
  int num,i=1,result=0;
  printf("Enter a number: \n");
  scanf("%d",&num);

while(i<=num)
  {
    result=result+i;
    i++;
    
  }
  printf("%d",result);
  return 0;
}