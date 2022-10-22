#include<stdio.h>

int main()
{
  int grade,sum,gradesCount;
  sum=0;
  gradesCount=0;
  
  printf("Enter the grades(Type -1 to stop): \n");
  
  
  while(grade!=-1)
{
  scanf("%d",&grade);
  sum=sum+grade;
  gradesCount++;
}
printf("The average of the grades is: %d",(sum+1)/(gradesCount-1));
return 0;  
}