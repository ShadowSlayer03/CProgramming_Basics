#include<stdio.h>
#include<stdlib.h>

typedef struct point
{
int x;
int y;
}Point;


Point inputPoint()
{
  Point pt;
  printf("Enter the 'x' coordinate of the point:\n");
  scanf("%d",&pt.x);
  printf("Enter the 'y' coordinate of the point:\n");
  scanf("%d",&pt.y);

  return pt;
}
void printPoint(Point pt)
{
  printf("The coordinate is (%d,%d)",pt.x,pt.y);
}

int main()
{
  
  printPoint(inputPoint());

  return 0;
}