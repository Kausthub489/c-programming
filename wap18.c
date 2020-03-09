// EMI Calculator program in C 
#include <math.h> 
#include <stdio.h>
float main()
{
float p,t;
float emi,r,x,z,y;
printf("enter the values of p,r,t \n");
scanf("%f%f%f",&p,&t,&r);
x=t*12;
y=r/(100*12);
z=pow((1+y),x);
emi=(p*y*z)/(z-1);
printf("x=%f \n",x); 
printf("y=%f \n",y); 
printf("z=%f \n",z);
printf("emi=%f \n",emi);
} 
  


