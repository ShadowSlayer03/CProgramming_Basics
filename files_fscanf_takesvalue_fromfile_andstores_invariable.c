#include<stdio.h>
#include<stdlib.h>

int main()
{
  FILE *fp;
  int num;  

  fp = fopen("open.txt","r");

  if(fp!=NULL)
  {
    printf("Opening successful\n");
    
    fscanf(fp,"%d",&num);
    printf("Number = %d",num);
  }   
  else{
        printf("Opening unsuccessful\n");

  }
  fclose(fp);
  return 0;
}