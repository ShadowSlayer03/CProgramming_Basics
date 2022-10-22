#include<stdio.h>
#include<stdlib.h>

int main()
{
  FILE *fp;
  char filename[20];
  char newChar;
  char char1;
  int count=0;
  printf("File Name:\n");
  scanf("%s",filename);
  printf("Character to be searched:\n");
  scanf(" %c",&newChar);
  
  fp = fopen(filename,"r");

  if(fp!=NULL)
  {
    printf("Success");
    printf("\n");
    while((char1=fgetc(fp))!=EOF)
      {
        if(char1==newChar)
          count++;
        
      }
    printf("The no of times '%c' has appeared in the file is %d",newChar,count);
  }
  
}