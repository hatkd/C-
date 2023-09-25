#include<stdio.h>
#include"queue.h"

int main(){
      SequenceQueue cq;
    QueueInitiate(&cq);
    QueueAppend(&cq,1);
int i,j,n;

printf("请输入你的杨辉三角行数");
scanf("%d",&n);
int curr;

for (i = 0; i < n; i++)
    {
        int last = 0;
        for (j = 0; j <= i; j++)
        {
            if (j == 0 || j == i) { // 第一个数和最后一个数都是1
                curr = 1;
            } else { // 中间的数需要计算
                curr = curr + last; // 当前数等于前一个数加上队列头部的数
            }
            
            QueueDelete(&cq, &curr);
            printf("%d ", curr);
            QueueAppend(&cq, curr + last);
            last = curr;
        }
        printf("\n");
    }






 
    return 0;
}