#include <stdio.h>
int main()
{
  float celsius,fahrenheit;
  printf("Enter Temperature In Celsius");
  scanf("%f",&celsius);
  fahrenheit=(celsius*9/5)+32;
  printf("%f celsius = %f fahrenheit",celsius,fahrenheit);
   return 0;
}
