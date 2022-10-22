#include<stdio.h>

int main()
{
  int ans,days,i;
  float result=0.01;
  printf("Welcome to ARj's Questionnaire \n");
  printf("Which is the larger amount? \n1)one cent that doubles every day for a month? \n2)1 million dollars \n");

  scanf("%d",&ans);

  if(ans==1)
  { printf("CORRECT!\n");
    printf("SEE FOR YOURSELF\n");
    printf("Enter the number of days\n");
    scanf("%d",&days);

 for(i=1;i<=days;i++)
   {
     result= result*2;
   }
    printf("%.2f",result);
  }    
  else if(ans==2)
    printf("TRY AGAIN!");
  else
    printf("Enter a valid num 1 or 2");
    
  


  return 0;
}