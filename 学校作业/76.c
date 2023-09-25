#include<stdio.h>
int main()
{
	char gou[8]={"1level1"};
	int number[100]={0};
	int n,m;
	scanf("%d %d",&n,&m);
	int count,i=1,j;
	j=n%m;
	while(count!=7)
	{
		if(i==n+1)
		i=j;
		else{
				if(number[i]==1)
			{
			i++;
			continue;
			}
		
			if(i%m==0)
		{
			printf("%d %c\n",i,gou[count]);
			count++;
			number[i]=1;
		}
		
			}
		i++;
	}
	
	
	
	
	
	return 0;
}
