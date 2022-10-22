#include<stdio.h>

int main()
{
  double ftemp;
  printf("The temp in fahrenheit is: \n");
  scanf("%lf",&ftemp);
  double result;
  result = (ftemp-32)/1.8;
  printf("The temp in celsius is: \n");
  printf("%.3lf",result);
  return 0;
}