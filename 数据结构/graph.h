
// ����ʵ������

//   1.�����ͼ���ڽӾ���Ľṹ�洢������ӡ������ڽӾ���


// ͼ�Ĵ�������ο��̲�����.

// ��ʾ:���ȹ���ͼ���߼�ģ�ͣ��ó���ͼ�Ķ��㼯�ͱ߼���������Ӧ�ĺ�������ͼ���ڽӾ��󣬲���ӡ���ڽӾ���

// 2.���ڽӱ�洢��ͼ��������ڽӱ�������Ϊѡ����
#define MaxVertices 20
#include<sqlist.h>

typedef struct {
    SqList vertices;//����
    int edge[MaxVertices][MaxVertices];//��������Ӿ����ʵ�֣��ö�ά����㶨
    int numedge;
}Matrixedge;

//��ʼ��
void initiate(Matrixedge *a,int n){
    int i,j;//�α�188ҳ��Ϊ�γ�ʼ��Ҫ�������ã�����������ʱ����ȫΪ��
    for(i=0;i<n;i++){
        for(j=o;j<n;j++){
            if(i == j)
            a->edge[i][j] = 0;
            else
            a->edge[i][j] = -1;
        }
    }
}

//���붥��
void InsertVertic(Matrixedge *a,int vertic){
     ListInsert(&a->vertices, a->vertices->length, vertic);  //�����&������
}

//����һ����
void InsertEdge(MaxVertices *a,int v1,int v2,int weight)
{
    //���뽡׳��
    if(v1<0 || v1>=a->vertices.length ||v2<0||v2>=a->vertices.length)
    {
        printf("lost inserting��\n");
        exit(1);
    }
    a->edge[v1][v2] = weight;
    a->numedge++;
}
//delete edge
void DeleteEdge(Matrixedge *a int v1,int v2)
{
    //��׳��
    if(v1<0 || v1>a->vertices.length || v2<0||v2>a->vertices.length || v1=v2)
    {
        printf(delete losing);
    }
    a->adge[v1][v2] = -1;
    a->numedge--;
}

void DeleteVertic(Matrixedge *a,int v){
    //firstly��you must delete the edge about this vertics,then you can delete this vertics 
}



