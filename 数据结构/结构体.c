#include<stdio.h>
//��������
struct student{
	char name[4];
	int number; 
}a; //�����˸��������ͣ�111111111 

//��Ҫ�����,��Ҫ�������ȥ����

//student a;//���ں���ֱ��Ū 

//��typedef��
typedef struct student{
	 char name[4];
	int number; 
}a; //2222222222
 
 //�Ƚ����׸��� 


//��1�У�{}�����a�Ǳ�����student�����������͡���2�У���Ϊ��typedef������a��ʵ���������͵�����



//��ָ����ϵ
 struct Person
{
    char name[16];
    int age;
}*per;
 
int main()
{
    per = (Person*)malloc(sizeof(struct Person));
    strcpy(per->name, "xiaoming");
    per->age = 16;
 
    printf("%s\n", per->name);
    printf("%d\n", per->age);
    
    free(per);
 
    return 0;
}

//
typedef struct Person
{
    char name[16];
    int age;
}per, *perptr;// ������������Ҫ���ף���Ȼ����typedef�ؼ��֣�
//�ʹ��� per �ȼ��� struct Person��*perptr �ȼ��� struct Person*
 
int main()
{
    per a;
    a.age = 16;
    printf("%d\n", a.age);
 
    perptr v;
    v = (Person *)malloc(sizeof(struct Person));
    v->age = 14;
    printf("%d\n", v->age);
    free(v);
 
    return 0;
}

