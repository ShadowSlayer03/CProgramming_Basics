#include<stdio.h>
#include<stdlib.h>

typedef
{ struct date
  int day;
  int month;
  int year;
}DATE;

void printDate(DATE dt)
{
  printf("The date is %d/%d/%d (dd/mm/yyyy)",dt.day,dt.month,dt.year);
  
}

DATE inputDate()
{
  DATE dt;
  printf("Enter the day: \n");
  scanf("%d",&dt.day);
  printf("Enter the month: \n");
  scanf("%d",&dt.month);
  printf("Enter the year: \n");
  scanf("%d",&dt.year);

  return dt;
}

int main()
{
  printDate(inputDate());
  return 0;
}