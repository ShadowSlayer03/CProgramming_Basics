#include<stdio.h>
#include<stdlib.h>

int main()
{
  FILE *fp;
  char Mychar;
  int length=0;
  

  fp = fopen("open.txt","r");

  if(fp!=NULL)
  {
    printf("Successful\n");
    Mychar = fgetc(fp);
    printf("%c",Mychar);
    while(Mychar!=EOF)
      {
        Mychar = fgetc(fp);
        printf("%c",Mychar);
        length++;
      }
    printf("\n");
    printf("The length of the string is %d",length);
  }
  else
    printf("Unsuccessful");
  
  fclose(fp);
  return 0;
}