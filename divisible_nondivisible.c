#include<stdio.h>
#include<stdlib.h>

int main()
{
  int num1,num2,num3;
  printf("Enter the first number \n");
  scanf("%d",&num1);
  printf("Enter the second number \n");
  scanf("%d",&num2);
  printf("Enter the third number \n");
  scanf("%d",&num3);

  if(num1==0 || num2==0 || num3==0)
    printf("Cannot divide by zero.");
  else if((num1%num2==0 || num2%num1==0) && (num2%num3==0 || num3%num2==0) && (num1%num3==0 || num3%num1==0))
    printf("Divisible");
  else
    printf("Non-Divisible");

  return 0;
  
}