#include<stdio.h>
#include<math.h>
int main()
{
int x1,y1,x2,y2,distance;
printf("enter the value of x1,y1,x2,y2\n");
scanf("%d %d %d %d",&x1,&x2,&y1,&y2);
distance=((x2-x1)*2+(y2-y1)*2);
printf("distance between two points is %d\n",distance);
}
