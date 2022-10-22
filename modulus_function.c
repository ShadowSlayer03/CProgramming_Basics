#include<stdio.h>
#include<stdlib.h>

int main()
{
  int num;
  printf("Give an integer: \n");
  scanf("%d",&num);

  if(num<0)
    printf("%d",-(num));
  else
    printf("%d",num);

  return 0;
}
