#include <stdio.h>
int square(x)
{
  int y;
  y=x*x;
  return y;
}
int main()
{
  int a,b;
  printf("Enter any no:-");
  scanf("%d",&a);
  b=square(a);
  printf("square of the no is:-%d",b);
  return 0;
}
