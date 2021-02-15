#include <stdio.h>
int main()
{
  int i,j,lt,sm,n;
  printf("Enter The No Of Elements U want To Input:\n");
  scanf("%d",&n);
  int a[n-1];
  printf("Enter The Elements Of The Array:\n");
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  lt=a[0];
  sm=a[0];
  for(j=0;j<n;j++)
  {
    if(lt<a[j])
    {
      lt=a[j];
    }
    if(sm>a[j])
    {
      sm=a[j];
    }
  }
  printf("The Largest Element Is :-\n%d\n",lt);
  printf("The Smallest Element Is :-\n%d\n",sm);
  return 0;
}