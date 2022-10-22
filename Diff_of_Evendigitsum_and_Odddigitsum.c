#include<stdio.h>
#include<stdlib.h>

int main()
{
  int num,currentDigit;
  int evenSum=0, oddSum=0;

  printf("Enter a number\n");
  scanf("%d",&num);

  while(num>0)
    {
      currentDigit = num%10;
      if(currentDigit%2==0)
      {
        evenSum = evenSum+currentDigit;
      }
      else
      {
        oddSum = oddSum+currentDigit;
      }

      num= num/10;
      
    }

  printf("Sum of odd digits= %d\n",oddSum);
  printf("Sum of even digits= %d\n",evenSum);
  printf("Difference = %d",abs(evenSum-oddSum));
  return 0;
}