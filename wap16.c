//program to find the area of triangle with given three sides
#include<stdio.h>
#include<math.h>
float main()
{
float perimeter,area,a,b,c,s;
printf("enter the three sides of triangle: \n");
scanf("%f%f%f",&a,&b,&c);
perimeter=a+b+c;
s=(a+b+c)/2;
area=sqrt(s*(s-a)*(s-b)*(s-c));
printf("the perimeter of the triangle is given by: %f \n",perimeter);
printf("the semi perimeter of the triangle is given by: %f \n",s);
printf("the area of the triangle is given by: %f \n",area);
}
