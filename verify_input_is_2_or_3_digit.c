#include<stdio.h>
#include<stdlib.h>

int main()
{
  int num1;
  printf("The number: \n");
  scanf("%d",&num1);

  if(9<num1 && num1<100)
    printf("This is a 2 digit number.");
  else if(99<num1 && num1<1000)
    printf("This is a 3 digit number.");
  else
    printf("Neither 2 nor 3 digit number.");
  return 0;
}