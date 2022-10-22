#include<stdio.h>
#include<stdlib.h>

int main()
{
FILE *fp;
char Mychar;
int NoOfLines = 1;
fp = fopen("open.txt","r");

  if(fp!=NULL)
  {
    printf("Successful\n");
    
    while((Mychar=fgetc(fp))!=EOF)
      {
        if(Mychar=='\n')
        NoOfLines++;
      }
    printf("The no of lines in the file is %d",NoOfLines);
  }
  else
    printf("Unsuccessful");
  
fclose(fp);
  
return 0;
}