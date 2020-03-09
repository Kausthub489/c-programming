#include <math.h> 
#include <stdio.h>
float main()
{
float dis,x1,x2,y1,y2,x,y;
printf("enter the value of x1");
scanf("%f",&x1);
printf("enter the value of x2");
scanf("%f",&x2);
printf("enter the value of y1");
scanf("%f",&y1);
printf("enter the value of y2");
scanf("%f",&y2);
x=x2-x1;
y=y2-y1;
dis=sqrt(x*x-y*y);
printf("the distance between the two points is :%f \n",dis);
}


