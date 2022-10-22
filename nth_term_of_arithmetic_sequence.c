#include<stdio.h>

int main()
{
  int d,n;
  float a1,an;
  printf("The first number of arithmetic sequence: \n");
  scanf("%f",&a1);
  printf("The total number of terms in arithmetic sequence: \n");
  scanf("%d",&n);
  printf("The common difference : \n");
  scanf("%d",&d);
  
  an = a1+(n-1)*d;
  printf("The nth term of arithmetic sequence is \n%.2f",an);

  return 0;
}
