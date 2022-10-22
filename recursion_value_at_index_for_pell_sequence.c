#include<stdio.h>
// Pell No at a particular index //
// when n=0, Pn=0
// when n=1, Pn=1
// when n>1, Pn=2*(previous val)+(pre previous value)

//Recursive//
int valAtIndex(int n)
{
  if(n==0)
  {
    return 0;
  }
  if(n==1)
  {
    return 1;
  }
  if(n>1)
  {
    return (2*valAtIndex(n-1))+valAtIndex(n-2);
  }
}

//Non-recursive//
/*int valAtIndex(int n)
{
int current=1,prev=0,next;
  if(n==0)
  {
    return 0;
  }
  if(n==1)
  {
    return 1;
  }
  for(i=2;i<=n;i++)
{
  next = 2*current+prev;
  prev = current;
  current = next;
}
 return next;
}*/

void main()
{
int index;
  printf("Enter index no\n");
  scanf("%d",&index);
  printf("Value at index %d = %d",index,valAtIndex(index));
}