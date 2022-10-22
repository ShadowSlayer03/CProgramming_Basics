#include<stdio.h>
#include<stdlib.h>

int main()
{
  FILE *fp;
  int num=1;

  fp = fopen("New.txt","w");
  if(fp!=NULL)
  {
    printf("Success");
    while(num<=10)
    {
      fprintf(fp,"%d ",num);
      fprintf(fp,"%d\n",num*num);
      num++;
    }

  }
  
  fclose(fp);
  return 0;
}