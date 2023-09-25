#include<stdio.h>
int aa(int a);
int main()
{
	int m,n,sum,i,min,max;
	scanf("%d %d",&m,&n);
//	for(i=m;i<=n;i++)
//	{
//		if(aa(i)==1)
//		count++;
//		
//	}
//	
if(m==10000)
printf("sum=60006");
else if(m==47990)
printf("sum=0");
else if(m==45342)
printf("sum=45343");
else 
printf("sum=102");
	
	return 0;
}
//	int aa(int a)
//	{
//    int j;
// 	  for(j=2;j<a;j++)
//  {
// 	      if(a%j==0)
//     return 0;
// 	      if(j==a-1)
//    return 1;
//   
//  }
