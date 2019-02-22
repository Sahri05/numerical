#include<stdlib.h>
#include<stdio.h>
#define f(x,y)(x*x+y*y)
int main()
{
	int i;
	float h,p,x[20],y[20],m,m1,m2,m3,m4;
	printf("enter the value of step size:");
	scanf("%f",&h);
	printf("enter the initial conditions:");
	scanf("%f%f",&x[0],&y[0]);
	printf("enter the point for evaluation of solution:");
	scanf("%f",&p);
	i=0;
	do
	{
		m1=f(x[i],y[i]);
		m2=f((x[i]+h/2),(y[i]+m1*h/2));
		m3=f((x[i]+h/2),(y[i]+m2*h/2));
		m4=f((x[i]+h),(y[i]+m3*h));
		m=(m1+2*m2+2*m3+m4)/6;
		y[i+1]=y[i]+m*h;
		i=i+1;
			}
		while(x[i]<p);
	
	printf("the solution is %f:", y[i]);
	return 0;
}
