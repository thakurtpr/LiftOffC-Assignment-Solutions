#include <stdio.h>
int gcd(int,int,int);
int lcm(int c,int d,int i)
{
  if((d*i)%c==0)
   return d*i;
  lcm(c,d,++i);
}
void main()
{
  int a ,b,M,mx,h;
  printf("Enter 2 no.s :");
  scanf("%d %d",&a,&b);
  M=(a>b)?b:a;
  mx=(a>b)?a:b;
 h=gcd(a,b,M);
 printf("HCF = %d\n",h);
 printf("LCM = %d",lcm(M,mx,1));
}
int gcd(int c,int d,int m)
{
  
  if(c%--m==0&&d%m==0)
  {
    if(m>=1)
    return m; 
  }
  else
  {
    gcd(c,d,m);
  }
  
}