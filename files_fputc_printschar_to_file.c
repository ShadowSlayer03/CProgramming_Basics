#include<stdio.h>
#include<stdlib.h>

int main()
{
  FILE *fp;
  char Mychar;
  int i=0;

  fp = fopen("open.txt","w");

  if(fp!=NULL)
  {
    printf("Opening successful\n");
    fputc('A',fp);
  }
  else{
        printf("Opening unsuccessful\n");

  }
  
  fclose(fp);
  return 0;
}