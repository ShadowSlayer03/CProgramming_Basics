#include<stdio.h>
#include<stdlib.h>

int main()
{
  int i;
  int pullupsArray[10]={1,2,3,4,6,7,8,9,10,12};
  for(i=9;i>=0;i--)
    {
      printf("%d,",pullupsArray[i]);
    }
  return 0;
}