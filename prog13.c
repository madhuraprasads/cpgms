#include<stdio.h>
void main()
{
int a,b,temp;
printf("enter the value of a and b\n");
scanf("%d %d",&a,&b);
temp=a;
a=b;
b=temp;
printf("after swappingis a = %d b=%d\n",a,b);
}
