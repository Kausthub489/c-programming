#include<stdio.h>
int main()
{
int ang1,ang2,ang3,sum;
printf("enter all the three angles of triangle");
scanf("%d%d%d",&ang1,&ang2,&ang3);
sum=ang1+ang2+ang3;
if(sum==180 && ang1!=0 && ang2!=0 && ang3!=0)
{
printf("the triangle is valid");
}
else
{
printf("the triangle is not valid");
}
}
