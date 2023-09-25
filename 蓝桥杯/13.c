#include<stdio.h>
#include<math.h>
int main(){
    double n = sqrt(2021041820210418);
    double i,j,k,count;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            for(k=0;k<n;k++){
                if(n == i*j*k)
                count++;
            }
        }
    }
    printf("%d",count);
    return 0;
}