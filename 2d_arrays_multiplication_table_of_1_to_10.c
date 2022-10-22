#include<stdio.h>
#include<stdlib.h>

#define SIZE 11  
// changeable //

int main()
{
  int i,j;
  int table[SIZE][SIZE];

//  Step 1: Fill the values in the table //

  for(i=1;i<SIZE;i++)
    for(j=1;j<SIZE;j++)
      table[i][j] = i*j;

// Step 2: Print the multiplication table //
  
  for(i=1;i<SIZE;i++)
    {  
      printf("\n");
      for(j=1;j<SIZE;j++)
      {
        
      printf("%5d ",table[i][j]);
      
      }  
      printf("\n");
      
    }
    
  return 0;
}