#include<stdio.h>

int main()
{
  float salary;
  int hrsworked;
  printf("The salary of employee(per hour): \n");
  scanf("%f",&salary);
  printf("The total hours worked by the person(per month): \n");
  scanf("%d",&hrsworked);

  printf("The total monthly salary of employee: \n");
  printf("%.2f",salary*hrsworked);
  return 0;
}