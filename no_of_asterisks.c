#include<stdio.h>

int main()
{
  int num;
  printf("Number of asterisks: \n");
  scanf("%d",&num);

  
  while(num>0)
    {  printf("*\n");
       num=num-1; 
      }
  
  return 0;
}