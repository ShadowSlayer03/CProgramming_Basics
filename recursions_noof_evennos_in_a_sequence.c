#include<stdio.h>
#include<stdlib.h>

int totEvenNo()
{
  int num;
  printf("Enter the no\n");
  scanf("%d",&num);
  if(num==-1)
  {
    return 0;
  }
  if(num%2==0)
  {
    return 1+totEvenNo();
  }
  return totEvenNo();
}
void main()
{
  int n;
  n = totEvenNo();
  printf("The no of even nos in sequence is\n");
  printf("%d",n);
  
}