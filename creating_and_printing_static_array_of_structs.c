#include<stdio.h>
#include<stdlib.h>

// Creating and printing a static array of structs //
typedef struct point
{
int x;
int y;
}Point;

int main()
{
  Point arrPoints[4];
  int i;
  for(i=0;i<4;i++)
    {
      printf("Enter the x coordinate for %d point\n",i+1);
      scanf("%d",&arrPoints[i].x);
      printf("Enter the y coordinate for %d point\n",i+1);
      scanf("%d",&arrPoints[i].y);
    }
  for(i=0;i<4;i++)
    {
      printf("The %d point is (%d,%d)\n",i+1,arrPoints[i].x,arrPoints[i].y); 
    }
  
  return 0;
}