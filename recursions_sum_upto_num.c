#include<stdio.h>
#include<stdlib.h>

int SumUpTo(int num)
{
  if(num==1)
  {
    return 1;
  }
  return num+SumUpTo(num-1);
}
int main()
{
  int n;
  printf("Enter the number: \n");
  scanf("%d",&n);
  printf("%d",SumUpTo(n));
  return 0;
}