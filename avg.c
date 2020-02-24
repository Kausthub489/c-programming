//write a program with your name printed and to calculate the total marks of the program and give the average of all the subjects 
#include<stdio.h>
float main()
{
float sub1,sub2,sub3,avg,sum,percent;
char name[30];
printf("what is your name ?");
scanf("%s", name);
printf("the name of the person is %s \n",name);
printf("enter the marks of subject 1 :");
scanf("%f",&sub1);
printf("enter the marks of subject 2 :");
scanf("%f",&sub2);
printf("enter the marks of subject 3 :");
scanf("%f",&sub3);
sum=sub1+sub2+sub3;
printf("the total sum of the marks obtained is : %f \n",sum);
avg=(sub1+sub2+sub3)/3;
percent=(sub1+sub2+sub3)/300*(100);
printf("the total average of the marks obtained is : %f \n",avg);
printf("the total percentage of the marks obtained is : %f \n",percent);
}


