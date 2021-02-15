#include <stdio.h>
int main()
{
  int r,n,sum;
  sum=0;
  printf("Enter Any Number\n");
  scanf("%d",&n);  
  for(;n!=0;)
  {
     r=n%10;
     sum=sum+r;
     n=n/10;
  }
  printf("Sum Of Digits Of The Number Is:-\n%d",sum);
  return 0;
}