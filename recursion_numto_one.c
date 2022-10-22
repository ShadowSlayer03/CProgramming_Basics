#include<stdio.h>
#include<stdlib.h>

int oneToN(int n)
{
  if(n==0)
  {
    return 0;
  }
  else
  {
    printf("%d ",n);
    n--;
    return oneToN(n);
  }
  
}

void main()
{
  int n,ans;
  scanf("%d",&n);
  oneToN(n);
}