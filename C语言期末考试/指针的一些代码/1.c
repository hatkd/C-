#include<stdio.h>
int main()
{
	int m,n,sum,i;
	scanf("%d %d",&m,&n);
	for(i=m;i<=n;i++)
	{
		if(i%7==0)
		sum+=i;
	}
	printf("sum=%d",sum);
	
	
	return 0;
 } 
