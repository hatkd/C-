//一、实验目的


// 1、掌握建立顺序表的基本方法。


// 2、掌握顺序表的插入、删除算法的思想和实现，并能灵活运用


// 二、实验内容


//     用顺序表实现病历信息的管理与查询功能。具体要求如下:


// 1. 利用教材中定义顺序表类型存储病人病历信息(病历号,姓名，症状)；要求使用头文件。


// 2.设计顺序表定位查找算法，写成一个函数，完成的功能为:在线性表L中查找数据元素x，如果存在则返回线性表中和x值相等的第1个数据元素的序号；如果不存在，则返回-1。


//     函数定义为 int ListFind(SequenceList L,char *x)


// 请在主函数中测试查找是否存在姓名为x的病人，并根据返回的序号打印出病人信息。
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

int ListFind(SequenceList L,char *x)//顺序表定位查找算法
{

    int i,j=-1;
    for(i=0;i<L.size;i++){
        if(x==L.list[i].name)
        return i;                  
                         }
   
    return j;

}
//顺序表初始化
void SequenceInit(SequenceList *L){
    L->size=0;
}
//顺序表插入
int Listsert(SequenceList *L,int i,patient x)
{
    int j;
    if(L->size >= MaxSize)
    {
        printf("满了，插不了");
        return 0;
    }
    else if((i<0) ||(i>L->size))
    {
        printf("插入成功\n");
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
//顺序表删除
// void listdelete(SequenceList *L,int i;patient *x)
// {
    
// }