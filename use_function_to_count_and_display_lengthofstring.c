#include<stdio.h>
#include<stdlib.h>

#define SIZE 40
int stringLength(char str[])
{
  int i=0,count=0;
  while(str[i]!='\0')
    {
      count++;
      i++;
    }
  return count;
}

int main()
{
  char str1[SIZE];
  int strLength;
  puts("Enter the string: ");
  fgets(str1,SIZE,stdin);
  strLength = stringLength(str1);
  printf("%d",strLength-1);
 
  return 0;
}