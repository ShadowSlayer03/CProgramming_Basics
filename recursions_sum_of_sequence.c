#include<stdio.h>
#include<stdlib.h>

//int sum=0;
int sumEvenNo()
{
  int num;
  printf("Enter the no\n");
  scanf("%d",&num);
  if(num==-1)
  {
    return 0;
  }
  else
  {
    return num+sumEvenNo();
  }
}

void main()
{
  int n;
  n = sumEvenNo();
  printf("The sum is\n");
  printf("%d",n);
  
}