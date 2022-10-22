#include<stdio.h>
#include<math.h>

int main()
{
  int X,X2,X4,X6,X8;
  
  
  printf("The integer X: ");
  scanf("%d",&X);
  X2 = pow(X,2);
  X4 = pow(X,4);
  X6 = pow(X,6);
  X8 = pow(X,8);
  printf("X^2: %d \n",X2);
  printf("X^4: %d \n",X4);
  printf("X^6: %d \n",X6);
  printf("X^8: %d \n",X8);
  
  return 0;
}