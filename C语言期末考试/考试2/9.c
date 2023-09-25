#include<stdio.h>
long my_pow2(long x,int n){
    if(
n==0
) return 1;
    if(n%2==0)
        return my_pow2(x*x,n/2);//x^n = (x*x)^(n/2)  
    else
        return 
x*my_pow2(x*x,(n+1)/2)
;//ÆæÊýÊ±
}
int main(){
    long  x;
    int  n;
    scanf("%ld%d",&x,&n);
    printf("%ld\n",my_pow2(x,n));
    return 0;
}
