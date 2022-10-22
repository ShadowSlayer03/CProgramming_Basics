#include<stdio.h>
#include<stdlib.h>

// ARj's Digital Clock

int main()
{
  int totalHours,totalMinutes,remainingSeconds;
  int inputSeconds;
  printf("Enter seconds: \n");
  scanf("%d",&inputSeconds);

  totalHours = inputSeconds/3600;
  totalMinutes = (inputSeconds-totalHours*3600)/60;
  remainingSeconds = (inputSeconds-totalHours*3600)%60;

  

  if(totalHours < 10)
    printf("0");
    printf("%d : ",totalHours);
  if(totalMinutes < 10)
    printf("0");
    printf("%d : ",totalMinutes);
  if(remainingSeconds < 10)
    printf("0");
    printf("%d  ",remainingSeconds);
  
  return 0;
}