// 操作集合:初始化、插入、删除、撤销


// (1)ListInitiate(L) 初始化线性表，生成一个空表L。


// (2)ListInsert(L,x) 在有序表L中插入数据元素x,使得新表仍然有序。


// (3)ListDelete(L,x) 删除有序表L中的数据元素x，若删除成功则返回1，不成功则返回0。
#include<malloc.h>
//节点结构定义
typedef struct SingleNode{
    int data;//数据域
    struct SingleNode *next;//节点域
}SingleNode,*LinkList;//链表的结构体

//构造一个新节点
LinkList newSingleNode(int data){
    LinkList node,next;
    node = (SingleNode *)malloc(sizeof(SingleNode));
    node->data = data;
    node->next = NULL;
    return node;
}


//链表初始化

void ListInitiate(SingleNode * * L)//L其实是头结点，也是我们的单链表，直接以头结点的名字叫做链表名
{
    
    

        if(*L = (SingleNode*)malloc(sizeof(SingleNode) )) == NULL)
        {
            return 1;

        }
    (*L)->next = NULL;
}



// 1.插入操作时，从链表的第一个数据元素结点开始，逐个比较每个结点的data域值和x的值，当data小于等于x时，进行下一个结点的比较；
//否则就找到了插入结点的合适位置，此时申请新结点把x存入，然后把新结点插入；当比较到最后一个结点仍有data小于等于x时，则把新结点插入单链表尾。

void ListInsert(SingleNode * * L,int x)//在有序表L中插入数据元素x,使得新表仍然有序。
{
    LinkList p = newSingleNode(x);
    LinkList n1 = L->next;
    p->next = n1;
    L->next = p;

}




// 2.删除操作时，从链表的第一个数据元素结点开始，逐个比较每个结点的data域值和x的值，当data不等于x时，进行下一个结点的比较；
//否则就找到了要删除的结点，删除结点后释放结点。如果到了表尾还没有找到值为x的结点，则链表中没有要删除的元素。
int ListDelete(SingleNode * * L,int x)) //删除有序表L中的数据元素x，若删除成功则返回1，不成功则返回0。
{
   

    int index = 0;//这是一个寻找函数
    while(L != NULL){
        if(L->data == x){
            free(L);
        return 1;;//成功
        }
        L= L->next;
        index++;
    }



    return 0;//失败
}

void Destroy(SingleNode * * L) //撤销单链表
{
    LinkList head ,link,temp;
    while(L->head!=NULL)
    {
        temp = L->head->link;
        free(L->head);
        L->head = temp;
    }
}