//to find the area of sector
#include<stdio.h>
float main()
{
float r,t,area;
printf("enter the value of r");
scanf("%f", &r);
printf("enter the value of t");
scanf("%f", &t);
area=1.0/2.0*r*r*t;
printf("the area of sector is given by %.2f \n",area);
}
