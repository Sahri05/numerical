#include<stdlib.h>
#include<stdio.h>
#define f(x,y)(2y/x)
int main()
{
	int i;
	float h,p,x[20],y[20],m,m1,m2,E[20];
	printf("enter the value of step size:");
	scanf("%f",&h);
	printf("enter the initial conditions:");
	scanf("%f%f",&x[0],&y[0]);
	printf("enter the point for evaluation of solution:");
	scanf("%f",&p);
	i=0;
	do
	{
		E[i]=y[i];
		m1=f(x[i],y[i]);
		x[i+1]=x[i]+h;
		E[i+1]=E[i]+m*h;
		m2=f(x[i+1],E[i+1]);
		m=(m1+m2)/2;
		y[i+1]=y[i]+m*h;
		i=i+1;
			}
		while(x[i]<p);
	
	printf("the solution is %f:", y[i]);
	return 0;
}
