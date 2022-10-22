#include<stdio.h>
#include<stdlib.h>

int main()
{
  int x,y;
  printf("The x coordinate: \n");
  scanf("%d",&x);
  printf("The y coordinate: \n");
  scanf("%d",&y);

  if(x>0 && y>0)
    printf("It is in quadrant I.");
  else if(x<0 && y>0)
    printf("It is in quadrant II.");
  else if(x<0 && y<0)
    printf("It is in quadrant III.");
  else
    printf("It is in quadrant IV.");
  

  return 0;
  
}