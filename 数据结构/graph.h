
// 二、实验内容

//   1.请把下图以邻接矩阵的结构存储，并打印输出此邻接矩阵。


// 图的创建代码参考教材例题.

// 提示:首先构建图的逻辑模型，得出该图的顶点集和边集，调用相应的函数生成图的邻接矩阵，并打印出邻接矩阵。

// 2.用邻接表存储上图，并输出邻接表。（此题为选做）
#define MaxVertices 20
#include<sqlist.h>

typedef struct {
    SqList vertices;//顶点
    int edge[MaxVertices][MaxVertices];//这里是领接矩阵的实现，用二维数组搞定
    int numedge;
}Matrixedge;

//初始化
void initiate(Matrixedge *a,int n){
    int i,j;//课本188页，为何初始化要那样设置，我这里先暂时让他全为零
    for(i=0;i<n;i++){
        for(j=o;j<n;j++){
            if(i == j)
            a->edge[i][j] = 0;
            else
            a->edge[i][j] = -1;
        }
    }
}

//插入顶点
void InsertVertic(Matrixedge *a,int vertic){
     ListInsert(&a->vertices, a->vertices->length, vertic);  //这里的&搞明白
}

//插入一条边
void InsertEdge(MaxVertices *a,int v1,int v2,int weight)
{
    //代码健壮性
    if(v1<0 || v1>=a->vertices.length ||v2<0||v2>=a->vertices.length)
    {
        printf("lost inserting！\n");
        exit(1);
    }
    a->edge[v1][v2] = weight;
    a->numedge++;
}
//delete edge
void DeleteEdge(Matrixedge *a int v1,int v2)
{
    //健壮性
    if(v1<0 || v1>a->vertices.length || v2<0||v2>a->vertices.length || v1=v2)
    {
        printf(delete losing);
    }
    a->adge[v1][v2] = -1;
    a->numedge--;
}

void DeleteVertic(Matrixedge *a,int v){
    //firstly，you must delete the edge about this vertics,then you can delete this vertics 
}



