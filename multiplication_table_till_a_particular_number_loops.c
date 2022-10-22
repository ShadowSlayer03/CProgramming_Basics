#include<stdio.h>
#include<stdlib.h>

int main()
{
  int num,i,result=1;
  printf("Enter a number: \n");
  scanf("%d",&num);

  for(i=1;i<=num;i++)
    {
    result= num*i; 
    printf("%d * %d = %d\n",num,i,result);
    }
    
  return 0;
}