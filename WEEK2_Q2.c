#include <stdio.h>
int main()
{
  int n,i,sum1,sum2;
  sum1=0;
  sum2=0;
  printf("Enter The No Of Elements You Want To Input In An Array:\n");
  scanf("%d",&n);
  int a[n-1];
  printf("Enter The Elements Of An Array");
  for(i = 0; i < n; i++) 
  {
     scanf("%d", &a[i]);
  }
  for(i=0;i<n;i++)
  {
    if(a[i]%2==0)
    {
      sum1=sum1+a[i];
    }
    if(i%2!=0)
    {
      sum2=sum2+a[i];
    }
  } 
  printf("Sum Of All The Even Elements is:-\n%d\n",sum1);
  printf("Sum Of All The Even Position Elements is:-\n%d",sum2); 
  return 0;
}