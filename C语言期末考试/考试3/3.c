//双十一到了，某包子铺有优惠促销活动，规则如下：
//
//1）顾客某单所购商品总额在10元以内，抹去零头；(0<f<10)
//
//2）顾客某单所购商品总额在10至100之间，95折；(10<=f<100)
//
//3）顾客某单所购商品总额在100以上，95折再减10圆。(f>=100)
//
//请你依据顾客某单所购商品总额计算出应付金额。（保留小数点后两位）
//
//【输入输出】
#include<stdio.h>
int main()
{
	double x,count;
	scanf("%lf",&x);
	if(x<10&&x>0)
	count=(int)x;
	else if(x>=10&&x<100)
	count=x*0.95;
	else if(x>=100)
	count=x*0.95-10;
	
	
	printf("count=%.2lf",count);
	return 0;
}
