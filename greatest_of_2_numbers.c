#include<stdio.h>

int main()
{
  int num1,num2;
  
  printf("Insert the 2 numbers: \n");
  scanf("%d",&num1);
  scanf("%d",&num2);

  if(num1>num2)
    printf("Max: %d",num1);
  else
    printf("Max: %d",num2);

  return 0;
}