//write a program to swap two numbers
#include<stdio.h>
int main()
{
int a,b,temp;
printf("enter the value of a");
scanf("%d", &a);
printf("enter the value of b");
scanf("%d", &b);
printf("the number entered as a is %d \n",a);
printf("the number entered as b is %d \n",b);
temp=a;
a=b;
b=temp;
printf("the swapped numbers are : \n");
printf("the number a is %d \n",a);
printf("the number b is %d \n",b);
} 

