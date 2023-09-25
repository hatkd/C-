#include<stdio.h>
int factor(int n);
int main()
{
	int n,m,sum;
	scanf("%d %d",&n,&m);
	sum=factor(n)+factor(m);
	printf("%d",sum);
	return 0;
 } 
 int factor(int n)
 {
 	int i,sum=1;
 	for(i=n;i>0;i--)
 	sum*=i;
 	
 	
 	return sum;
 }
