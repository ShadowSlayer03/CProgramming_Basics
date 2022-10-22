#include<stdio.h>

int main()
{
  int number,digit1,digit2,digit3;
  
  printf("The 3 digit number: \n");
  scanf("%d",&number);
  digit1 = number/100;
  digit2 = (number/10)%10;
  digit3 = number%10;
  printf("Sum of the digits in the number: \n %d",digit1+digit2+digit3);
  return 0;
}