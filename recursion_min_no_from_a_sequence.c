#include<stdio.h>

int min(int num)
{
  int minSoFar,input;
  printf("Enter the actual numbers to be compared\n");
  scanf("%d",&input);

  if(num>1)
  {
    minSoFar = min(num-1);
    if(minSoFar>input)
    {
      return input;
    }
    else{
      return minSoFar;
    }
  }
  return input;
}
int main()
{
  int num;
  printf("ENter the no of values to be taken from user\n");
  scanf("%d",&num);
  printf("Min no = %d",min(num));
}