#include<stdio.h>
#include<stdlib.h>
#include"operation.h"
int main(){
    int i,conti=1;
    SequenceList L;
    SequenceInit(&L);//初始化
    patient patient1;
    //输入功能
    printf("请你按照病人的名字，症状的顺序来输入，切不可输错,输入完成到下一个请按1,输入0即可退出输入程序\n");
    printf("开始吧");

     
    
while(conti){
   scanf("%s,%s",&L.list[i].name,&L.list[i].sym);
    Listsert(&L,i,L.list[i]);
     scanf("%d",&conti);
    i++;

}
printf("退出成功");

// //查询功能
// printf("请输入你想要查询的病人的名字");
// scanf("%s",&patient1.name);
// if(ListFind(L,patient1.name)!=-1)
// {
//     printf("%s\n",ListFind(L,patient1.name));
//      printf("%s\n",ListFind(L,patient1.sym));
// }
// else
// printf("没有你要查的病人");
return 0;
 }