#include<stdio.h>
#include<stdlib.h>

// Program to perform arithmetic operations on rational nos //
// Assuming numerator and denominator>0 //
typedef struct rational
{
  int num;
  int deno;
}RatNo;

RatNo subtraction(RatNo r1,RatNo r2)
{
  RatNo result;
  int max;

  //Finding LCM //
  if(r1.deno>r2.deno)
    {
      max = r1.deno;
    }
else
      max = r2.deno;

    while (1) {
        if (max % r1.deno == 0 && max % r2.deno == 0) {
printf("The LCM of %d and %d is %d.", r1.deno, r2.deno, max);
            break;
        }
        ++max;
    }
  
  // If deno are equal //
    if(r1.deno==r2.deno)
    { 
      result.num = r1.num-r2.num;
      result.deno = r1.deno; 
      }
  // If deno are not equal //
  else
    {
      result.deno = max;
      result.num = r1.num*(max/r1.deno)-(r2.num*(max/r2.deno));
    
    }
  return result;
}

RatNo addition(RatNo r1,RatNo r2)
{
  RatNo result;
  int max;

  //Finding LCM //
  if(r1.deno>r2.deno)
    {
      max = r1.deno;
    }
else
      max = r2.deno;

    while (1) {
        if (max % r1.deno == 0 && max % r2.deno == 0) {
printf("The LCM of %d and %d is %d.", r1.deno, r2.deno, max);
            break;
        }
        ++max;
    }
  
  // If deno are equal //
    if(r1.deno==r2.deno)
    { result.num = r1.num+r2.num;
     result.deno = r1.deno; 
      }
  // If deno are not equal //
  else
    {
      result.deno = max;
      result.num = r1.num*(max/r1.deno)+(r2.num*(max/r2.deno));
    
    }
  return result;
}

RatNo multiplication(RatNo r1,RatNo r2)
{
  RatNo result;
  result.num = r1.num*r2.num;
  result.deno = r1.deno*r2.deno;
  return result;
}

RatNo division(RatNo r1,RatNo r2)
{
  RatNo result;
  int temp;
  temp=r2.num;
  r2.num = r2.deno;
  r2.deno = temp;
  
  result.num = r1.num*r2.num;
  result.deno = r1.deno*r2.deno;
  return result;
}

RatNo increment(RatNo r1)
{
  RatNo result;
  int max;
  result.num = r1.num+r1.deno;
  result.deno = r1.deno;
  return result;
}

void printResult(RatNo answer)
{
  printf("\n");
  printf("Answer is %d/%d",answer.num,answer.deno);
}

int main()
{
  RatNo rat1,rat2;
  printf("Enter the numerator: \n");
  scanf("%d",&rat1.num);
  printf("Enter the denominator: \n");
  scanf("%d",&rat1.deno);
  printf("Enter the numerator: \n");
  scanf("%d",&rat2.num);
  printf("Enter the denominator: \n");
  scanf("%d",&rat2.deno);
  
  printResult(addition(rat1,rat2));
  printf("\n");
  printResult(subtraction(rat1,rat2));
  printResult(multiplication(rat1,rat2));
  printResult(division(rat1,rat2));
  printResult(increment(rat1));
  printResult(increment(rat2));
  return 0;
}
