/*  HELLO.C -- Hello, world */

#include <stdio.h>
#include <string.h>
#define N 2

typedef struct
{char name[10];
 char id[6] ;
 int age;
 char sex[10];
 char symptom[50];
} patient;

void readin(patient *p);
void search(patient *p,char *x);

int main()
{

    patient s[N];
    char c[10];
    readin(s);
     /*fflush(stdin);
    getchar();*/
    printf("�����뱻���˵�������\n");
    scanf("%s",c);
    //getchar();
   //gets(c); 
    search(s,c);
    return 0;
}

void readin(patient *p)
{int i;
 for (i=0;i<N;i++)
 { printf("�����벡����Ϣ\n");
   printf("������");scanf("%s",(p+i)->name);
   printf("�����ţ�");scanf("%s",(p+i)->id);
   printf("���䣺");scanf("%d",&((p+i)->age));
   printf("�Ա�");scanf("%s",(p+i)->sex);
   printf("֢״��");scanf("%s",(p+i)->symptom);
   }
 }

 /* readin����������һ�ַ���*/

 /*void readin(patient *p)
{int i;
 printf("���������� ������  ����  �Ա�  ֢״ ��\n");
 for(i=0;i<N;i++)
 {
   scanf("%s%s%d%s%s",(p+i)->name,(p+i)->id,&((p+i)->age),(p+i)->sex,(p+i)->symptom);

   }
 }*/

 void search(patient *p,char *x)
 {int i;
  patient *q;
  for(i=0;i<N;i++)
     {  q=p+i;
     if(strcmp(q->name,x)==0)
       { printf("%s�Ĳ�������%s\n",x,q->id);
         printf("%s��������%d\n",x,q->age);
         printf("%s���Ա���%s\n",x,q->sex);
         printf("%s��֢״��%s\n",x,q->symptom);

        return;}
     }
     if(i>=N)printf("%s���޴���!\n",x);

 }


