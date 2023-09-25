#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int i=0,j=0,sum,arr[200000],sumj=0;

for(i=0;i<n;i++)
{
    scanf("%d",&arr[i]);
}

for(i=0;i<n-1;i++){
    sumj=0;
    for(j=i+1;j<n;j++){
           sumj+=arr[j];
    }
     sum+=arr[i]*sumj;
}

printf("%d",sum);
    return 0;
}