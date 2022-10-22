#include<stdio.h>
#include<stdlib.h>

int count=1;
int onetoNum(int n)
{
  
  if(count==n)
  {
    return n;
  }
  else{
  printf("%d ",count);
  count++;
  return onetoNum(n);
      }
}

void main()
{
  int n,ans;
  scanf("%d",&n);
  onetoNum(n);
  printf("%d",onetoNum(n));
}