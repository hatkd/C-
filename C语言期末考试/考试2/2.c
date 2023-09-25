#include<stdio.h>
int sum(int n);
int main()
{
	int n;
	scanf("%d",&n);
	printf("%d",sum(n)); 
	
	return 0;
}
int sum(int n)
{
	int re;
	if(n==0)
    re=1;
	else if(n==1)
	re=2;
	else
	return n+sum(n-1);
	
	
	return re;
}
