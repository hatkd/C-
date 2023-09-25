#include <stdio.h>
#define MaxQueueSize 20
typedef int ElemType;
typedef struct
{
 ElemType queue[MaxQueueSize];
int front;
int count;
}SequenceQueue;

void QueueInitiate(SequenceQueue *Q)//��ʼ��
{
 Q->front=0; Q->count=0;
}

int QueueNotEmpty(SequenceQueue Q)//�жϷǿ�
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
printf("���������޷����룡\n");
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
printf("ѭ�������ѿ�������Ԫ�س�����\n");
 return 0;
}else{
 *d=Q->queue[Q->front];
 Q->front=(Q->front+1)%MaxQueueSize;
Q->count--;
return 1;
 }
}