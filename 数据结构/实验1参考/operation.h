//һ��ʵ��Ŀ��


// 1�����ս���˳���Ļ���������


// 2������˳���Ĳ��롢ɾ���㷨��˼���ʵ�֣������������


// ����ʵ������


//     ��˳���ʵ�ֲ�����Ϣ�Ĺ������ѯ���ܡ�����Ҫ������:


// 1. ���ý̲��ж���˳������ʹ洢���˲�����Ϣ(������,������֢״)��Ҫ��ʹ��ͷ�ļ���


// 2.���˳���λ�����㷨��д��һ����������ɵĹ���Ϊ:�����Ա�L�в�������Ԫ��x����������򷵻����Ա��к�xֵ��ȵĵ�1������Ԫ�ص���ţ���������ڣ��򷵻�-1��


//     ��������Ϊ int ListFind(SequenceList L,char *x)


// �����������в��Բ����Ƿ��������Ϊx�Ĳ��ˣ������ݷ��ص���Ŵ�ӡ��������Ϣ��
#define MaxSize 100 
typedef struct {
    int number;
    char name[4];
    char sym[100];
}patient;

typedef struct{
    patient list[MaxSize];
    int size;
}SequenceList;

int ListFind(SequenceList L,char *x)//˳���λ�����㷨
{

    int i,j=-1;
    for(i=0;i<L.size;i++){
        if(x==L.list[i].name)
        return i;                  
                         }
   
    return j;

}
//˳����ʼ��
void SequenceInit(SequenceList *L){
    L->size=0;
}
//˳������
int Listsert(SequenceList *L,int i,patient x)
{
    int j;
    if(L->size >= MaxSize)
    {
        printf("���ˣ��岻��");
        return 0;
    }
    else if((i<0) ||(i>L->size))
    {
        printf("����ɹ�\n");
        return 0;
    }
    else{
        for(j = L->size;j>i;j--)
        {
                L->list[j] = L->list[j-1];
            L->list[i] = x;
            L->size ++;
            return 1;
        }
    }
}
//˳���ɾ��
// void listdelete(SequenceList *L,int i;patient *x)
// {
    
// }