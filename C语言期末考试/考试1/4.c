#include<stdio.h>
fact_sum(number);
int main()
{
	int m,n,sum;
	scanf("[%d,%d]",&m,&n);
	int i;
	for(i=m;i<=n;i++)
	sum+=fact_sum(i);
	
	printf("sum[%d,%d]=%d",m,n,sum);
	
	return 0;
}
fact_sum(number){

int a,b,c,sum;
a=number%10;
b=number%100/10;
c=number/100;
sum=a*a*a+b*b*b+c*c*c;
if(number==sum)
return sum;
else
return 0;}

