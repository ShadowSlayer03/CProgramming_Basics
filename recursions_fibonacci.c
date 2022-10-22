#include<stdio.h>
#include<stdlib.h>

int ValueAtIndex(int n)
{
  if(n==0)
    return 0;
  
  if(n==1)
  {
    return 1;
  }
  if(n>1)
  {
    return ValueAtIndex(n-1)+ValueAtIndex(n-2);
  }
  
}

int main()
{
  int n;
  printf("Enter the number: \n");
  scanf("%d",&n);
  printf("%d",ValueAtIndex(n));
  return 0;
}