#include<stdio.h>
#include<stdlib.h>



int main()
{
  int grade1=2,grade2=4;
  int *p,*q;
  p = &grade1;
  q = &grade2;
  
  printf("%d\n",*p);
  printf("%d\n",*q);
  printf("%p\n",p);
  printf("%p",q);
  
  
  return 0;
}