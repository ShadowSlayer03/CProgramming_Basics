#include<stdio.h>

int main()
{
  int number;
  int ansdigit1,ansdigit2,ansdigit3;
 
  printf("The three digit number: \n");
  scanf("%d",&number);
  ansdigit1 = number%10;
  ansdigit2 = (number/10)%10;
  ansdigit3 = number/100;
  
  printf("The number reversed is: %d%d%d",ansdigit1,ansdigit2,ansdigit3);
  return 0;
}