//	
//【题目描述】
//
//请编写一个输出星号的函数，函数原型如 void print_star(int n,int m)，在屏幕上输出n个空格后，紧接着输出m个星号。
//
//在主函数main中，调用此函数，输出星号金字塔。说明：以20为对称轴 (第一个*在20列)
#include <stdio.h>

void print_star(int n,int m){

     int i;

 		for(i=0;i<20+1-m;i++)
		 printf(" ");
		 
		 for(i=0;i<m*2+1;i++)
		 printf("*");

 }

 int main(){

     int i,n;

     scanf("%d",&n);
     printf("                     *\n");
     for(i=1;i<n;i++){

         print_star(n,i);
		 printf("\n");//填写多行代码 

 } 

 return 0;

 }
