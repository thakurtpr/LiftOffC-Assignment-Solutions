#include <stdio.h>
int main()
{
  char a[60];
  int i,count;
  count=0;
  printf("Enter Your String:\n");
  fgets(a, sizeof(a), stdin);
  for(i=0;i<sizeof(a);i++) 
  {
    if(a[i]==32&& a[i+1]!=32)
    {
     count++;
    }
  } 
  printf("No Of Words In The String Are:-\n%d",++count);
  
  
  return 0;
}