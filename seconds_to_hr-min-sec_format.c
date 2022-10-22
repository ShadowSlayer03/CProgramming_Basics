#include<stdio.h>

int main()
{
  int inpSecs,hours,remainingSeconds;
  float minutes;
  
  printf("Enter seconds: \n");
  scanf("%d",&inpSecs);

  hours = inpSecs/3600;
  minutes = (inpSecs-hours*3600)/60;
  remainingSeconds = (inpSecs-hours*3600)%60;
  printf("The time is %d hour(s), %.2f mins and %d seconds \n",hours,minutes,remainingSeconds);
  return 0;
}