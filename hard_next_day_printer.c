#include<stdio.h>
#include<stdlib.h>

int main()
{
 int date,month,year;
 scanf("%d%d%d",&date,&month,&year);

 
/* if(date==28 && month==2)
   printf("%d %d %d",1,3,year); */

 // leap year//
 if(year%400==0) 
  
  {
   if(date==28 && month==2)
   printf("%d %d %d",29,2,year);
   else if(date==31)
   printf("%d %d %d",1,month+1,year);
  else
    printf("%d %d %d",date+1,month,year);
   }

 // leap year//
  else if((year%4 == 0) && (date==28 && month==2) && (year%100!=0))
     printf("%d %d %d",29,2,year);

   // non leap year//
  else if((year%100==0) || (date==28 && month==2) && (year%4!=0))
   printf("%d %d %d",1,3,year);

  else if((year%100==0) && (date==28 && month==2) && (year%4==0))
    printf("%d %d %d",1,3,year);
    
   
   
   //30 day months//
 else if((date==30 && month%2==0) && (month!=8))
   printf("%d %d %d",1,month+1,year);

   //last-day of month//
   else if(date==31 && month==12)
   printf("%d %d %d",1,1,year+1);
   
   //31 day months//
   else if(date==31)
    printf("%d %d %d",1,month+1,year);
  //default//
 else
   printf("%d %d %d",date+1,month,year);
   
   
   

return 0;  
}