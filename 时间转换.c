#include<stdio.h>
int main()
{
    int totalSec;
    int hour,min,sec,day;
    int _min,_hour;
    while(1){
        printf("��������\n");
        scanf("%d",&totalSec);
        sec=totalSec%60;
        _min=totalSec/60;
        min=_min%60;
        _hour=_min/60;
        hour=_hour%24,
        day=hour/24;
        printf("%d��%dСʱ%d����%d��\n",
        day,hour,min,sec);
    }
}
