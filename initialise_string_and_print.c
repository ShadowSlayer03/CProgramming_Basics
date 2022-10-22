#include<stdio.h>
#include<stdlib.h>

#define SIZE 14

int main()
{
  int i;
  char str[SIZE]="arjun nambiar";

  
  
printf("Full Name: \n");
  while(str[i]!='\0')
    {
      printf("%c",str[i]);
      i++;
    }
  
  return 0;
}