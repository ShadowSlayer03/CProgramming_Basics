#include<stdio.h>
#include<stdlib.h>

float amountAvg(int num, int digit)
{
  int i,totalDigits=0,digit1;
  float avg; 
  int lessThanDigit=0;
  float sum=0;
  int tnum=num;
  while(num!=0)
    {
    num=num/10;
    totalDigits++;
      
     }  
  for(i=1;i<=totalDigits;i++)
    {
      digit1=tnum%10;
      if(digit1<digit)
      {   
        lessThanDigit++;
        sum=sum+digit1;
      }  
       tnum=tnum/10;
    }
  printf("Number of digits less than input digit: %d\n",lessThanDigit);
  avg = (sum)/lessThanDigit;
  return avg;
  
}

int main()
{
  int a,b;
   printf("Enter a number: \n");
   scanf("%d",&a);
   printf("Enter a digit: \n");
   scanf("%d",&b);

  printf("%.2f",amountAvg(a,b));
   
  return 0;
}