#include<stdio.h>
#include<stdlib.h>

int main()
{
  char grade;
  printf("Enter your Grade: \n");
  scanf("%c",&grade);

  switch(grade)
  {
    case 'A':
     printf("Your mark is in the range of 90-100");
     break;
    case 'B':
     printf("Your mark is in the range of 80-89");
     break;
    case 'C':
     printf("Your mark is in the range of 70-79");
     break;
    case 'D':
     printf("Your mark is in the range of 60-69");
     break;
     default:
     printf("Please type in A,B,C or D.");
 }

return 0;
  
  
}