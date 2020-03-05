#include<stdio.h>
void main()
{
int maths,computers,english,physics,chemistry,total,average;
printf("enter the marks of five subjects\n");
scanf("%d%d%d%d%d",&maths,&computers,&english,&physics,&chemistry);
total=maths+computers+english+physics+chemistry;
average=total/5;
printf("total marks=%.2d\n",total);
printf("average marks=%.2d\n",average);
}
