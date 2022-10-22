#include<stdio.h>
#include<stdlib.h>

typedef struct date
{
  int day;
  int month;
  int year;
}DATE;

void printDate(DATE dt)
{
  printf("The date is %d/%d/%d\n",dt.day,dt.month,dt.year);
}
void printNextDay(DATE dt)
{
  
  if(dt.day==31)
  {
    dt.day =1;
    dt.month++;
    
    if(dt.month > 12)
    {
      dt.month = 1;
      dt.year++;
    }
  }
  else if(dt.day==30)
  { // have 31 days //
    if(dt.month%2!=0 && dt.month<8)
    {
      dt.day = dt.day+1;
    }
    if(dt.month>=8 && dt.month%2==0)
    {
      dt.day = dt.day+1;
    }
    //dont have 31 days //
    if(dt.month<8 && dt.month%2==0)
    {
      dt.day =1;
      dt.month++;
    }
    if(dt.month>=8 && dt.month%2!=0)
    {
      dt.day = 1;
      dt.month++;
    }
}
    else
      dt.day = dt.day+1;
  
   printf("The next day is %d/%d/%d\n",dt.day,dt.month,dt.year);
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
  DATE day;
  day = inputDate();
  printDate(day);
  printNextDay(day);
  
}