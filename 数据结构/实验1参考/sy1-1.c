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
    printf("请输入被查人的姓名：\n");
    scanf("%s",c);
    //getchar();
   //gets(c); 
    search(s,c);
    return 0;
}

void readin(patient *p)
{int i;
 for (i=0;i<N;i++)
 { printf("请输入病人信息\n");
   printf("姓名：");scanf("%s",(p+i)->name);
   printf("病历号：");scanf("%s",(p+i)->id);
   printf("年龄：");scanf("%d",&((p+i)->age));
   printf("性别：");scanf("%s",(p+i)->sex);
   printf("症状：");scanf("%s",(p+i)->symptom);
   }
 }

 /* readin函数的另外一种方法*/

 /*void readin(patient *p)
{int i;
 printf("请输入姓名 病历号  年龄  性别  症状 ：\n");
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
       { printf("%s的病历号是%s\n",x,q->id);
         printf("%s的年龄是%d\n",x,q->age);
         printf("%s的性别是%s\n",x,q->sex);
         printf("%s的症状是%s\n",x,q->symptom);

        return;}
     }
     if(i>=N)printf("%s查无此人!\n",x);

 }


