
#include<stdio.h>
#define max 10
#include"Recursion.h"

int main(){
	int n,m,a[max],b[max],i,j,tmp ;
	// printf("问题1：输入ADD算法的n值\n");
	// scanf("%d",&n); 
	// printf("答案是%d\n",ADD(n));
	
	// int num = printf("输入你在查询算法中查的数") ;
	// printf("二分法的递归实现,请输入你数组的值,10个, ,必须是递增的！！\n"); 
	// for(i = 0;i<max;i++){
	// 	scanf("%d",&a[i]);
	// }
	// tmp = Trecursion(a,0,max,num);
	// if(tmp != -1)
	// printf("查询成功\n");
	// else
	// printf("查询失败\n");

	// printf("二分法的非递归实现，请输入你数组的值,10个\n");
	// for(j=0;j<max;j++){
	// 	scanf("%d",&b[j]);
	// } 
	// tmp = Frecursion(b,num);
	// if(tmp == 1)
	// printf("查询成功\n");
	// else
	// printf("查询失败\n");

	
	printf("问题3：输入Break算法的n值\n");
	scanf("%d",&m); 
	printf("答案是%d\n",Break(m));
	return 0;
}
