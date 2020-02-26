#include<stdio.h>
#include<math.h>
int main()
{
float a,b,c,s,area;
printf("enter sides of triangle\n");
scanf("%1f%1f%1f",&a,&b,&c);
s=(a+b+c)/2;
area=(s*(s-a)*(s-b)*(s-c));
printf("area of triangle=%.21f\n",area);
return(0);
}
