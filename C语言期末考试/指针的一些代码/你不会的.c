#include<stdio.h>//很重要，你错过一次了，关于void指针的作用 
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
