#include<malloc.h>
#include"stack.h"
#include<stdio.h>
#include <stdlib.h>

int main() {
    int n = 127;

    printf("ʮ������ %d ת���ɶ�������: ", n);
    convert(n, 2);//������ʵ�ֽ���ת����

    printf("�˽����� %d ת���ɶ�������: ", n);
    convert(n, 8);//������ʵ�ֽ���ת����

    printf("ʮ�������� %d ת���ɶ�������: ", n);
    convert(n, 16);//������ʵ�ֽ���ת����





   //����ƥ���
    char expr1[] = "[(1+2)*3-1]+[((1+2]*3)-1]";
    char expr2[] = "[(1+2)*3-1]+[(1+2)*3-1]";

    // ��������Ƿ�ƥ��
    printf("���ʽ1����%sƥ��\n", check(expr1) ? "" : "��");
    printf("���ʽ2����%sƥ��\n", check(expr2) ? "" : "��");

    return 0;
}


