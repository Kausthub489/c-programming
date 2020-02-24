#include<stdio.h>
void main()
{
int a,b,c;
printf("enter the values of side1 \n");
scanf("%d",&a);
printf("enter the values of side2 \n");
scanf("%d",&b);
printf("enter the values of side3 \n");
scanf("%d",&c);
if(a==b&&b==c&&a==c)
printf("this is a equilateral triangle \n");
else if(a!=b&&b!=c&&a!=c)
printf("this is a scalene triangle \n");
else
printf("this is a isosceles triangle \n");
}
