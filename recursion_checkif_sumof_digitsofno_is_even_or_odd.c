#include<stdio.h>

int sum=0;
int r;
int checkSum(int num)
{
  while(num!=0)
    {
  r = num%10;
  num = num/10;    
  sum = sum+r;
  return checkSum(num);
    }
  if(sum%2==0)
  {
    return 1;
  }
  else{
    return 0;
    }
}
int main()
{
  int num;
  printf("Enter the integer\n");
  scanf("%d",&num);
  printf("%d",checkSum(num));
}

/*
int digitsSumEven()
{
 int resultSoFar;
 if(n<10)
{
if(n%2==0)
  return 1;
else
  return 0;
}
resultSoFar=digitsSumEven(n/10);
if(n%10%2==0)
{  if(resultSoFar==1)
    return 1;
  else
    return 0;
}
else
  if(resultSoFar==1)
    return 0;
  else 
    return 1;
}
*/