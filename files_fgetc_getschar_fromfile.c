#include<stdio.h>
#include<stdlib.h>

int main()
{
  FILE *fp;
  char Mychar;
  int i=0;

  fp = fopen("open.txt","r");

  if(fp!=NULL)
  {
    printf("Opening successful\n");
     Mychar = fgetc(fp);
  }
  else{
        printf("Opening unsuccessful\n");

  }
  printf("%c",Mychar);
  fclose(fp);
  return 0;
}