#include<stdio.h>

int main()
{
  float data;
  printf("TYPE DATA: \n");
  scanf("%f",&data);
  printf("The decimal part of data:\n %.3f ", data - (int)data);
  return 0;  
}