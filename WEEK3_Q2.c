#include <stdio.h>
int fact(x)
{
  int y=1;
  for(int i=x; i>=1;i--)
    y=y*i;
  return y;
}
int main()
{
  int b,s;
  printf("enter a no:-");
  scanf("%d",&b);
  s=fact(b);
  printf("factorial of the no is:-%d",s);
  return 0;
}