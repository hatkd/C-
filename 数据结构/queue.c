#include<stdio.h>
#include"queue.h"

int main(){
      SequenceQueue cq;
    QueueInitiate(&cq);
    QueueAppend(&cq,1);
int i,j,n;

printf("��������������������");
scanf("%d",&n);
int curr;

for (i = 0; i < n; i++)
    {
        int last = 0;
        for (j = 0; j <= i; j++)
        {
            if (j == 0 || j == i) { // ��һ���������һ��������1
                curr = 1;
            } else { // �м������Ҫ����
                curr = curr + last; // ��ǰ������ǰһ�������϶���ͷ������
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