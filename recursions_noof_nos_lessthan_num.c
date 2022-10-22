#include<stdio.h>
#include<stdlib.h>

int count=0;
int smallerThanNum(int n)
{
  int i;
  scanf("%d",&i);  
  if(i==-1)
  {
    return count;
  }
  if(i<n)
  {
    count++;
  }
   return smallerThanNum(n);
}
int main()
{
  int num,fun;
  scanf("%d",&num);
  fun = smallerThanNum(num);
  printf("No of nos less than num = %d",fun);
  return 0;
}