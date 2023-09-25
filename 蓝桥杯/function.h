// ��������:��ʼ�������롢ɾ��������


// (1)ListInitiate(L) ��ʼ�����Ա�����һ���ձ�L��


// (2)ListInsert(L,x) �������L�в�������Ԫ��x,ʹ���±���Ȼ����


// (3)ListDelete(L,x) ɾ�������L�е�����Ԫ��x����ɾ���ɹ��򷵻�1�����ɹ��򷵻�0��
#include<malloc.h>
//�ڵ�ṹ����
typedef struct SingleNode{
    int data;//������
    struct SingleNode *next;//�ڵ���
}SingleNode,*LinkList;//����Ľṹ��

//����һ���½ڵ�
LinkList newSingleNode(int data){
    LinkList node,next;
    node = (SingleNode *)malloc(sizeof(SingleNode));
    node->data = data;
    node->next = NULL;
    return node;
}


//�����ʼ��

void ListInitiate(SingleNode * * L)//L��ʵ��ͷ��㣬Ҳ�����ǵĵ�����ֱ����ͷ�������ֽ���������
{
    
    

        if(*L = (SingleNode*)malloc(sizeof(SingleNode) )) == NULL)
        {
            return 1;

        }
    (*L)->next = NULL;
}



// 1.�������ʱ��������ĵ�һ������Ԫ�ؽ�㿪ʼ������Ƚ�ÿ������data��ֵ��x��ֵ����dataС�ڵ���xʱ��������һ�����ıȽϣ�
//������ҵ��˲�����ĺ���λ�ã���ʱ�����½���x���룬Ȼ����½����룻���Ƚϵ����һ���������dataС�ڵ���xʱ������½����뵥����β��

void ListInsert(SingleNode * * L,int x)//�������L�в�������Ԫ��x,ʹ���±���Ȼ����
{
    LinkList p = newSingleNode(x);
    LinkList n1 = L->next;
    p->next = n1;
    L->next = p;

}




// 2.ɾ������ʱ��������ĵ�һ������Ԫ�ؽ�㿪ʼ������Ƚ�ÿ������data��ֵ��x��ֵ����data������xʱ��������һ�����ıȽϣ�
//������ҵ���Ҫɾ���Ľ�㣬ɾ�������ͷŽ�㡣������˱�β��û���ҵ�ֵΪx�Ľ�㣬��������û��Ҫɾ����Ԫ�ء�
int ListDelete(SingleNode * * L,int x)) //ɾ�������L�е�����Ԫ��x����ɾ���ɹ��򷵻�1�����ɹ��򷵻�0��
{
   

    int index = 0;//����һ��Ѱ�Һ���
    while(L != NULL){
        if(L->data == x){
            free(L);
        return 1;;//�ɹ�
        }
        L= L->next;
        index++;
    }



    return 0;//ʧ��
}

void Destroy(SingleNode * * L) //����������
{
    LinkList head ,link,temp;
    while(L->head!=NULL)
    {
        temp = L->head->link;
        free(L->head);
        L->head = temp;
    }
}