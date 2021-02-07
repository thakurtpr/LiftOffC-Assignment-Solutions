#include <stdio.h>

int main()
{
  int p,c,b,m,cs,percentage;
  printf("enter the marks of physics,chemistry,biology,mathematics,computer\n");
  scanf("%d%d%d%d%d",&p,&c,&b,&m,&cs);
  if(p>100 || c>100 || b>100 || m>100 || cs>100)
  {
    printf("enter valid marks");
  }
  else
  {
   percentage=((p+c+b+m+cs)/500)*100;
   if(percentage>=90)
   {
    printf("Grade A");
   }
   else if(percentage>=80&&percentage<90)
   {
    printf("Grade B");
   }
   else if(percentage>=70&&percentage<80)
   {
    printf("Grade C");
   }  
   else if(percentage>=60&&percentage<70)
   {
    printf("Grade D");
   }
   else if(percentage>=40&&percentage<60)
   {
    printf("Grade E");
   }
   else if(percentage<40)
   {
    printf("Grade F");
   }
  }
  

}
