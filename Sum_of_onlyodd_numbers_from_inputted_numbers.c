#include<stdio.h>
#include<stdlib.h>


int main()
{
  int n,value,numValues=0,oddValues=0;
  
  printf("Enter the number of integers 'n'\n");
  scanf("%d",&n);

  do{
    printf("Enter the value: \n");
    scanf("%d",&value);
    if(value%2!=0)
    {
      oddValues += value;
    }
    numValues++;
    }while(numValues<n);

  printf("Sum of all odd numbers among the integers = %d",oddValues);
  return 0;
}

//Same program can be written using for loop if code shouldn't be long//


/* int main()
{
  int i,currentValue,oddSum=0;
  int n;

  for(i=1;i<=n,i++)
    {
    printf("Enter a value \n");
    scanf("%d",currentValue);

    if(currentValue%2!=0)
     oddSum+= currentValue;
    }

  printf("%d",oddSum);
  return 0;
} */