#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define SIZE 50

int main()
{
  int i=0,count=0;
  char str[SIZE];
 fgets(str,SIZE,stdin);
  while(str[i]!='\0')
    {
      if(str[i]==' ')
      {
      count++;
      } 
      i++;
    }
  // "count+1" is used because "no of words = no of blank spaces+1"
  printf("The number of words in the string is: %d",count+1);
  return 0;
}