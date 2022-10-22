#include<stdio.h>
// Value at index in Lucas Sequence //
int valueAtIndex(int n)
{
  if(n==0)
  {
    return 2;
  }
  if(n==1)
  {
    return 1;
  }
  if(n>1)
  {
    return valueAtIndex(n-1)+valueAtIndex(n-2);
  }
}
int main()
{
  int  n;
  scanf("%d",&n);
  printf("%d",valueAtIndex(n));
  return 0;
}