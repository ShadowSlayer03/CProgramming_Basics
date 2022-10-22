#include<stdio.h>
#include<stdlib.h>

int CountofDigits(int n)
{
  if(n<=9)
  {
    return 1;
  }
  return 1+CountofDigits(n/10);
}
int main()
{
  int n;
  scanf("%d",&n);
  printf("The count of digits is %d",CountofDigits(n));
  return 0;
}