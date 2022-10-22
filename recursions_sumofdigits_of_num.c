#include<stdio.h>
#include<stdlib.h>

int SumofDigits(int n)
{
  if(n/10==0)
  {
    return n;
  }
  return (n%10)+SumofDigits(n/10);
}
int main()
{
  int n;
  scanf("%d",&n);
  printf("The sum of digits is %d",SumofDigits(n));
  return 0;
}