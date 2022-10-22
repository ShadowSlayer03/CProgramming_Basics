#include<stdio.h>
#include<stdlib.h>

int count=0;
int equalToChar(char c)
{
  int i;
  scanf("%c",&i);  
  if(i=='$')
  {
    return count;
  }
  else
  {
    if(i==c)
     count++;
  }
  return equalToChar(c);
}

int main()
{
  int c,fun;
  printf("Enter the character to be searched\n");
  scanf("%c",&c);
  fun = equalToChar(c);
  printf("No of chars= %d",fun);
  return 0;
}