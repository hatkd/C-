#include<stdio.h>
#include<stdlib.h>
#include"operation.h"
int main(){
    int i,conti=1;
    SequenceList L;
    SequenceInit(&L);//��ʼ��
    patient patient1;
    //���빦��
    printf("���㰴�ղ��˵����֣�֢״��˳�������룬�в������,������ɵ���һ���밴1,����0�����˳��������\n");
    printf("��ʼ��");

     
    
while(conti){
   scanf("%s,%s",&L.list[i].name,&L.list[i].sym);
    Listsert(&L,i,L.list[i]);
     scanf("%d",&conti);
    i++;

}
printf("�˳��ɹ�");

// //��ѯ����
// printf("����������Ҫ��ѯ�Ĳ��˵�����");
// scanf("%s",&patient1.name);
// if(ListFind(L,patient1.name)!=-1)
// {
//     printf("%s\n",ListFind(L,patient1.name));
//      printf("%s\n",ListFind(L,patient1.sym));
// }
// else
// printf("û����Ҫ��Ĳ���");
return 0;
 }