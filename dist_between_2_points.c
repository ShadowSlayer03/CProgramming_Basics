#include<stdio.h>
#include<math.h>

int main()
{
  int x1,x2,y1,y2;
  
  printf("The coordinates of first point are(x1,y1): \n");
  scanf("%d%d",&x1,&y1);
  printf("The coordinates of second point are(y1,y2): \n");
  scanf("%d%d",&x2,&y2);

  int a = (x1-x2);
  int b = (y1-y2);
  float distance = sqrt(pow(a,2)+pow(b,2));
  
  printf("The distance between the two points is : \n");
  printf("%f",distance);
  return 0;
}