//write a program with your name printed and to calculate the total marks of the program and give the average of all the subjects 
#include<stdio.h>
float main()
{
float sub1,sub2,sub3,sub4,sub5,avg,sum;
printf("enter the marks of subject 1 :");
scanf("%f",&sub1);
printf("enter the marks of subject 2 :");
scanf("%f",&sub2);
printf("enter the marks of subject 3 :");
scanf("%f",&sub3);
printf("enter the marks of subject 4 :");
scanf("%f",&sub4);
printf("enter the marks of subject 5 :");
scanf("%f",&sub5);
sum=sub1+sub2+sub3+sub4+sub5;
printf("the total sum of the marks obtained is : %f \n",sum);
avg=(sub1+sub2+sub3+sub4+sub5)/5;
printf("the total average of the marks obtained is : %f \n",avg);
}


