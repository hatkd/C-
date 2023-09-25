#include<stdio.h>
int main(){

    int a,b,total,day,n,ans,i,sum,sumi;
    scanf("%d %d %d",&a,&b,&n);
total = 5*a+2*b;
    ans=n%total;//Ê£µÄÌâÄ¿
    int ans1=n/total;
    for(i=0;i<=n;i++)
    {
        if(i<=5){
             sum+=a;
             day++;
            if(sum>=ans){
               break;
            }
            
            
        }
        sumi=sum;
        if(i>5)
        {
            sumi+=b;
            day++;
            if(sumi>=ans){
                break;
            }
            
        }
     
    }
    printf("%d",7*ans1+day);
    return 0;
}


1  0
2  1 0
3  1 0 1//2 1 0
4  1 0 1 1//2 1 0 3//3 2 1 0
a[i]=a[n-i+1]=n-i-1;

int arr[1000][1000]
for(){
    scanf()
}

for(i=0;i<1000;i++){
    sum=0;
    for(j=0;j<1000;j++){
        for(k=1;k<=n&&k<=m;k++)
        {

        sum+=arr[i][j];

        }
        if(sum>=k)
        count++;
    }
}


1 0
2 1
3 5
4 10
5 20
6 30