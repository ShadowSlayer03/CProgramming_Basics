#include <stdio.h>


int main() {
  double temp;
  double result;
  
  
  printf("Enter the temperature(degree C): \n");
  scanf("%lf", &temp);
  result = (temp*1.8)+32;
  printf("The temperature in fahrenheit is: \n");
  printf("%.3lf",result); 
  return 0;
}