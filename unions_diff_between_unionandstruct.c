#include<stdio.h>

// Struct stores diff variables in diff memory allocation //
//Unions store diff variables in same memory allocation //
int main()
{
  struct point
  {
  int x;
  int y;
  };
  struct point p1;

  union mypoint
  {
  int x;
  int y;
  };
  union mypoint p2;

  p1.x = 23;
  p1.y = 34;

  printf("Struct\n");
  printf("%d\n",p1.x);
  printf("%d\n",p1.y);

  p2.x = 56;
  printf("Union\n");
  printf("%d %d\n",p2.x,p2.y);

  p2.y = 75;
  printf("Union after change\n");
  printf("%d %d",p2.x,p2.y);

  
  return 0;
}