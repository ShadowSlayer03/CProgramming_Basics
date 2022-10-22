#include<stdio.h>
#include<stdlib.h>

int main ()
{
  int seqSize;
  int previousValue=0, currentValue=0;
  int veryAscendingFlag= 1;

  printf("Insert size of the sequence: \n");
  scanf("%d",&seqSize);

  if(seqSize==0)
    printf("Error");
  else
  {
    do {
      printf("Insert value: ");
      scanf("%d",&currentValue);

      if(currentValue<0)
        printf("Number is not positive");
      else
      {
        if(currentValue<=previousValue)
          veryAscendingFlag=0;
          previousValue=currentValue;
          seqSize--;
      }
  }while(seqSize>0);
    }

    if(veryAscendingFlag==1)
      printf("This sequence is very ascending");
    else
      printf("This sequence is not very ascending");
      
    
  return 0;
}