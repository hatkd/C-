#include<stdio.h>//����Ҫ������һ���ˣ�����voidָ������� 
void edd(int *a); 
int main()
{
	int h=1;
	
	edd(&h);
	printf("%d",h);
	
	
	return 0;
 } 
 
 void edd(int *a)
 {
 	*a=*a+1;
  } 
