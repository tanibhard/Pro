#include<stdio.h>
void main()
{
int n1,n2,t;
printf("Enter any two numbers");
scanf("%d%d",&n1,&n2);
t=n1;
n1=n2;
n2=t;
printf("The swapped numbers are as follows: %d %d",n1,n2);
}
