#include<stdio.h>
#include<stdlib.h>

int main()
{
  FILE *fp;
  int num = 87; 
  char string[20];

  fp = fopen("open.txt","r");

  if(fp!=NULL)
  {
    printf("Opening successful\n");
    fgets(string,20,fp);
    printf("%s",string);
  }   
  else{
        printf("Opening unsuccessful\n");

  }
  fclose(fp);
  return 0;
}