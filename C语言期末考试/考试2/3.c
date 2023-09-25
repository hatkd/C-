#include<stdio.h>
int main()
{
	int v=0,count=0;
	scanf("%d",&v);
	if(v>=1.1*120&&v<1.5*120)
	count=200;
	else if(v>=1.5*120&&v<1.7*120)
	count=1500;
	else if(v>=1.7*120)
	count=2000;
	printf("count=%d",count);
	return 0;
}
