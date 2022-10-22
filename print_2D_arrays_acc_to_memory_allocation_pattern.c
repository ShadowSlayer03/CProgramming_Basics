#include<stdio.h>
#include<stdlib.h>

int main()
{
  int i;
  int mat[2][3]={{5,2,1},{6,5,9}};
  for(i=0;i<3;i++)
  {
  if(i==2)
     printf("%d",mat[0][i]);
  else
    printf("%d,",mat[0][i]);
 
  }
  printf("\n");
  for(i=0;i<3;i++)
  {
if(i==2)
     printf("%d",mat[1][i]);  
else
    printf("%d,",mat[1][i]);    
  }
  return 0;
}