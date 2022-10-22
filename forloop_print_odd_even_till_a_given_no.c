#include<stdio.h>

// ODD NUMBER TILL A GIVEN NUMBER //

int main()
{
  int i,num;
  printf("Enter any number: \n");
  scanf("%d",&num);

  for(i=1;i<=num;i=i+2)
    {
      printf("%d \n",i);
    }


    return 0;
}