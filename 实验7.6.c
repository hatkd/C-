#include <stdio.h>
int main()
{
	int n,m;
	scanf("%d %d",&n,&m);
	int i,sum=0,a[n],j=1;
	char name[8]={"1level1"};
	for(i=0;i<n;i++)
	{
		a[i]=j;
		j++;
	 } 
	for(i=0;i<7;i++)
	{
		sum+=m;
		if(sum>n)
		{
			sum-=n;
		} 
		while(a[sum-1]==0)
		sum++;
		printf("%d %c\n",a[sum-1],name[i]);
		a[sum-1]=0;
		printf("%d",a[sum-1]);
	}
	return 0;
 } 
// ��������ʽ��һ���������ÿո�������ֱ��ʾ����n�ͱ���m
//�������ʽ�������У�ÿ���������ֱ��ʾ���ڼ��ˡ��͡������ϵ��ַ���
