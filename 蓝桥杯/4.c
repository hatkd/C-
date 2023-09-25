#include<stdio.h>
#include<math.h>
#define num 50
int main()
{
    //循环数组
    int n,i,j;
    int arr[num]={0};
    scanf("%d",&n);
//1 0   
//2 1 1
//3 4 2 2
//4 6 4 2 3
//5 8 6 4 2 4 

for(j=0;j<n;j++)
{
    arr[j] = fabs(n-j+1)*2;//4,3
}

//输出
    for(i=0;i<n;i++){
        printf("%d\n",arr[i]);

    }
    return 0;
}
