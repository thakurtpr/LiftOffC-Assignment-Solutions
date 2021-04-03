#include <stdio.h>
int pal(int x,int dup)
{
  if(x>0)
  {
    dup=dup*10+ x%10;
    x/=10;
    pal(x,dup);
  }
  else
  return dup;
}
void main()
{
  int a,b;
  printf("Enter a no.");
  scanf("%d",&a);
  b= pal(a,0);
  if (a==b)
  printf("%d is a palindrome no.!!",a);
  else
  printf("Sorry not a palindrome no. :(");
}