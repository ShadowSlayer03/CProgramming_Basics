#include<stdio.h>
#include<stdlib.h>

int main()
{
  FILE *fp;
  int num = 87;  

  fp = fopen("open.txt","w");

  if(fp!=NULL)
  {
    printf("Opening successful\n");
    fputs("Hey My name is Jeff",fp);
  }   
  else{
        printf("Opening unsuccessful\n");

  }
  fclose(fp);
  return 0;
}