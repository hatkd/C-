#include<stdio.h>
int main()
{
	char b[1000],count=0;
	int i,j;
	for(i=0;i<1000;i++)
	{
		scanf("%c",&b[i]);
		if(b[i]=='*')
		break;
	
	}
	
	for(j=0;j<1000;j++)
	{
		if(b[j]=='A')
		count++;
		else if(b[j]=='E')
		count++;
		else if(b[j]=='O')
		count++;
		else if(b[j]=='I')
		count++;
		else if(b[j]=='U')
		count++;
		else if(b[j]=='*')
		break;
	}
	printf("%d",count);
	return 0;
}
