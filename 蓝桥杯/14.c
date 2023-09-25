#include<stdio.h>//86400,3600,60,
int main(){
    // int n;
    // scanf("%d",&n);
    // int h = n/1000/3600;
    //   int m = n/1000/60%60;
    //     int s = n/1000%60;

    int n;
    scanf("%d",&n);
    n/=1000;
    n%=(24*60*60);
    int ss=n%60;
    n/=60;
    int mm=n%60;
    n/=60;
    int hh=n%60;
    n/=60;
    printf("%02d:%02d:%02d",hh,mm,ss);
    return 0;
}



        //printf("%d:%d:%d",h,m,s);
    //return 0;
    //}