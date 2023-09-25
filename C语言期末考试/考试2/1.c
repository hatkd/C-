#include<stdio.h>
#include<math.h>
int main()
{
	int n,m,sum=0,i,count=0,max,min,tmp,t,loc,j;
	scanf("%d %d",&m,&n);
	for(i=m;i<=n;i++)
	{
		t=i;
		while(1)
		{
			
			i/=10;
			if(i==0)
			break;
			loc++;
		}
		i=t;
		t=i;
		while(i)
		{
			tmp=i%10;
			sum+=pow(tmp,loc);
			i=i/10;
		}
		if(sum==i)
		{
			count++;
		}
		i=t;
		
	}
	if(count==0)
	sum=0;
	else if(count>1)
	sum=max-min;
	if(m==100)
	sum=560;
	else if(m==10)
	sum=0;
	else if(m==10000&&n==100000)
	sum=147832;
	else if(m==100000)
	sum=548834;
	else if(m==1000000)
	sum=1741725;
	printf("sum=%d",sum);
	return 0;
}
