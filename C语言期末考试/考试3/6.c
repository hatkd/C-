//	
//����Ŀ������
//
//���дһ������Ǻŵĺ���������ԭ���� void print_star(int n,int m)������Ļ�����n���ո�󣬽��������m���Ǻš�
//
//��������main�У����ô˺���������ǺŽ�������˵������20Ϊ�Գ��� (��һ��*��20��)
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
		 printf("\n");//��д���д��� 

 } 

 return 0;

 }
