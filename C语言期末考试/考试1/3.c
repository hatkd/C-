#include<stdio.h>
int main()
{
	double x,y;
	scanf("%lf",&x);
	if(x<-3)
	y=-x;
	else if(x>=-3&&x<5)
	y=2*x-6;
	else if(x>=5)
	y=(x-5)*(x-5);
	printf("f(%lf)=%.2lf",x,y);
	
	
	return 0;
 } 
