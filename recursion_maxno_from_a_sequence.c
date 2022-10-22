#include<stdio.h>

int max(int num)
{
  int maxSoFar,input;
  printf("Enter the actual numbers to be compared\n");
  scanf("%d",&input);

  if(num>1)
  {
    maxSoFar = max(num-1);
    if(maxSoFar>input)
    {
      return maxSoFar;
    }
    else{
      return input;
    }
  }
  return input;
}
int main()
{
  int num;
  printf("ENter the no of values to be taken from user\n");
  scanf("%d",&num);
  printf("Max no = %d",max(num));
}