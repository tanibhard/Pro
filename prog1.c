#include<stdio.h>
void main()
{

int n1,n2,t,sum=0,p=1;
float sub;


float avg=0.0;

printf("Enter any two numbers");
scanf("%d%d",&n1,&n2);
t=n1;
n1=n2;
n2=t;
printf("The swapped numbers are as follows: %d %d",n1,n2);
sum=n1+n2;
printf("Sum is : %d",sum);

p=n1*n2;
printf("Product is : %d",p);

avg=(n1+n2)/2;
printf("Average is : %f",avg);

sub=n1-n2;
printf("Subtraction is: %f",sub);

}
