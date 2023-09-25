#include<stdio.h>
int value1(int number);
int main()
{
	int a[100];
	int value=0,j,temp,k;

	for(k=0;;k++)
			{
			
		scanf("%d",&a[k]);
		
		if(a[k]==0)
		break;
}

	for(j=0;j<=k;j++)
	{
		temp=a[j];
	value+=value1(temp);
	}
	printf("value=%d",value);
	return 0;
}
int value1(int number)
{
	if(number==0)
	return 0;
	int a;
	if(number%2==0)
	a=2;
	else
	a=1;
	return a;
}
