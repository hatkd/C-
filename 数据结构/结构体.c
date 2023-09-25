#include<stdio.h>
//基本定义
struct student{
	char name[4];
	int number; 
}a; //定义了个数据类型，111111111 

//想要搞变量,就要用上面的去定义

//student a;//或在后面直接弄 

//含typedef的
typedef struct student{
	 char name[4];
	int number; 
}a; //2222222222
 
 //比较容易搞混的 


//在1中，{}后面的a是变量，student就是数据类型。在2中，因为有typedef，所以a其实是数据类型的名字



//和指针联系
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
}per, *perptr;// 看到这里，你就需要明白，既然用了typedef关键字，
//就代表 per 等价于 struct Person，*perptr 等价于 struct Person*
 
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

