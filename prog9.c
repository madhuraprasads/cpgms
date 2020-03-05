#include<stdio.h>
void main()
{
float celsius,fahrenheit;
printf("enter the temperature in fahrenheit\n");
scanf("%f",&fahrenheit);
celsius=(fahrenheit-32)*5/9;
printf(".%2ffahrenheit=%.2fcelsius",fahrenheit,celsius);
}
