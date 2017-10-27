#include<stdio.h>
void main()
{
int n1,n2,t,sum=0,p=1;
printf("Enter any two numbers");
scanf("%d%d",&n1,&n2);
t=n1;
n1=n2;
n2=t;
printf("The swapped numbers are as follows: %d %d",n1,n2);
sum=n1+n2;
printf("Sum is : %d",sum);
p=n1*n2;
}
