#include<stdio.h>
int main()
{
    int totalSec;
    int hour,min,sec,day;
    int _min,_hour;
    while(1){
        printf("输入秒数\n");
        scanf("%d",&totalSec);
        sec=totalSec%60;
        _min=totalSec/60;
        min=_min%60;
        _hour=_min/60;
        hour=_hour%24,
        day=hour/24;
        printf("%d天%d小时%d分钟%d秒\n",
        day,hour,min,sec);
    }
}
