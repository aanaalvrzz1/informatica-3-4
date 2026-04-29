#include <stdio.h>
int main(void)

{
 float fahrenheit;
 printf("enter the Fahrenheit amount \n");
 scanf("%f",&fahrenheit);
 float Celsius= (fahrenheit-32)/1.8;
 printf("%.2f°F=%.2f°C\n",fahrenheit,Celsius);
}
