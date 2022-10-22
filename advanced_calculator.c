#include<stdio.h>
#include<stdlib.h>
#include<math.h>

// AAIC- ARj's Amazing Intermediate Calculator

int main()
{
int num1,num2;
char symbol;

printf("Input the 1st number: \n");
scanf("%d",&num1);
printf("Input the 2nd number: \n");
scanf("%d",&num2);
printf("Choose the operation('+','-','/','%'): \n");
scanf(" %c",&symbol);

  switch(symbol)
    {
      case '+': 
      printf("%d",num1+num2);
      break;
      
      case '-': 
      printf("%d",num1-num2);
      break;

      case '*': 
      printf("%d",num1*num2);
      break;
      
      case '/': 
        if(num2 == 0)
          printf("Dividing by 0 not permitted.");
        else
          printf("%d",num1/num2);
      break;

      case '%':
      if(num2 == 0)
        printf("Dividing by 0 not permitted.");
      else
        printf("%d",num1%num2);
      
      default:
      printf("Invalid operation.");
      break;
    }
  return 0;
}
