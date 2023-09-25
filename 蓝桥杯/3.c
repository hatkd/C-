// #include<stdio.h>
// int main(){
//     int a,b,n,day,i;
//     scanf("%d %d %d",&a,&b,&n);//(5*a+2*b)*day/7+day%7(if)
//     while(1){
//         day++;
//     if((5*a+2*b)*day/7>=n){
//         if(day%7==0)
//         {
//             day=day+7;
//             break;
//         }
//         else if(day%7>0&&day<=5)
//         day=day+day%7;
//         else{
            
//         }
   
//     break;
//     }}
//      printf("%d",day);
//     return 0;
//     }
#include<stdio.h>
int main()
{
	int a, b, n, t, res;
	scanf("%d %d %d",&a,&b,&n);
	
	t = a * 5 + b * 2;//一周做的题
	res = n / t * 7;//多少天拿下

	n %= t;//剩下的那几个天数
	if(n > 0)
		for(int i = 1; i <= 7; i ++ )
		{
			if(i == 6 || i == 7) n -= b;
			else n -= a;
			res ++;
			if(n <= 0) break;
		}
	
	printf("%d",res);
	
	return 0;
}
