#include<stdio.h>
int main()
{
int english,chemistry,computers,physics,maths;
float total,average;
printf("enter the marks of five subjects:\n");
scanf("%d%d%d%d%d",&english,&chemistry,&computers,&physics,&maths);
total=english+chemistry+computers+physics+maths;
average=total/5;
printf("total marks=%.2f\n",total);
printf("average marks%.2f\n",total);
}
