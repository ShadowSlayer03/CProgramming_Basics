#include<stdio.h>

int main()
{
  int number;
  printf("Enter any integer: \n");
  scanf("%d",&number);
  if(number%2 ==0)
    printf("The number is even. \n");
  else
    printf("The number is odd.");

  return 0;
  
}