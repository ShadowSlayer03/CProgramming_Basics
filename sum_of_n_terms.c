#include<stdio.h>
// Sn = (a1+an)*(n/2)

int main()
{
  float a1,an,Sn;
  int n;
  printf("Enter the first term of sequence: \n");
  scanf("%f",&a1);
  printf("Enter the last term of sequence: \n");
  scanf("%f",&an);
  printf("The number of terms in the sequence is \n");
  scanf("%d",&n);
  Sn = (a1+an)*n/2;
  printf("The sum of all terms in the sequence is \n");
  printf("%.2f",Sn);
  return 0;
  
}