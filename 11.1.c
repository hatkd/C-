#include<stdio.h>
 typedef struct time{
int h;
int m;
int s;


}fun;
//int main()
//{
//	fun time;
//	int temp,n;	
//	int m=time.m;
//	int s=time.s;
//	scanf("%d %d %d",&time.h,&time.m,&time.s);
//	scanf("%d",&n);
//	time.s=(time.s+n)%60;
//	time.m=(time.m+((s+n)/60))%60;
//	
//	temp=(m+((s+n)/60))/60;
//	time.h=temp+time.h;
//	if(time.h>=24)
//	time.h=0;
//	printf("After %d seconds is %d:%d:%d",n,time.h,time.m,time.s);
//	return 0;
// } 
//#include<stdio.h>
//typedef struct time{
// int h;
// int m;
// int s;
//}fun;
//int main(){
// fun time; 
// int n,m,s,temp;
// scanf("%d %d %d",&time.h,&time.m,&time.s); 
// scanf("%d",&n);
// m=time.m;
// s=time.s;
// time.s=(time.s+n)%60;
// time.m=(time.m+((s+n)/60))%60;
// temp=(m+((s+n)/60))/60;
// time.h=temp+time.h;
// if(time.h==24)
// time.h=0;
// printf("After %d seconds is %d:%d:%d",n,time.h,time.m,time.s);
// return 0;
// }

int main(){
 fun time; 
 int n,temp;
 scanf("%d:%d:%d",&time.h,&time.m,&time.s); 
 scanf("%d",&n);
 temp=time.h*3600+time.m*60+time.s+n;
 printf("After %d seconds is %d:%d:%d",n,temp/3600%24,temp%3600/60,temp%60);
 return 0;
}
