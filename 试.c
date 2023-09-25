#include<stdio.h>
int main()
{
	int i,n,sum=0;
	printf("请输入你的值"); 
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum+=i;
	}
	
	printf("您的结果是%d",sum);
	return 0;
 } 
