#include <stdio.h>
#define MaxQueueSize 20
typedef int ElemType;
typedef struct
{
 ElemType queue[MaxQueueSize];
int front;
int count;
}SequenceQueue;

void QueueInitiate(SequenceQueue *Q)//初始化
{
 Q->front=0; Q->count=0;
}

int QueueNotEmpty(SequenceQueue Q)//判断非空
{
 if(Q.count==0)
{
return 0;
}else
 return 1;
}

int QueueAppend(SequenceQueue *Q,ElemType x)
{
if(Q->count>=MaxQueueSize)
{
printf("队列已满无法插入！\n");
}else{
 Q->queue[(Q->front+Q->count)%MaxQueueSize]=x;
 Q->count++;
 return 1;
}
}

int QueueDelete(SequenceQueue *Q,ElemType *d)
{
if(Q->count==0)
 {
printf("循环队列已空无数据元素出队列\n");
 return 0;
}else{
 *d=Q->queue[Q->front];
 Q->front=(Q->front+1)%MaxQueueSize;
Q->count--;
return 1;
 }
}