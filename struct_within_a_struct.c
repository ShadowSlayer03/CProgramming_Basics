#include<stdio.h>
#include<stdlib.h>

typedef struct point
{
  int x;
  int y;
}Point;

typedef struct circle
{
 int radius;
 Point p;
}Circle;

int main()
{
  Circle c1;
  Point p1 = {1,2};
  c1.radius =5;
  c1.p.x = 2;
  c1.p.y = 3;
  // One way of printing centre//
  printf("(%d,%d) is the centre of the circle\n",c1.p.x,c1.p.y);
  // Second Way of printing centre///
  printf("(%d,%d) is the centre of the circle\n",p1.x,p1.y);
  
  printf("%d cm is the radius of the circle",c1.radius);
  return 0;
}