#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include "LinkList.h"

}
a
int main() {
    struct SortedList list;

    // ��ʼ������
    ListInitiate(&list);

    // ����Ԫ��
    ListInsert(&list, 2);
    ListInsert(&list, 1);
    ListInsert(&list, 4);
    ListInsert(&list, 3);

    // ��ӡ����Ԫ��
    PrintList(&list); // ���: 1 2 3 4

    // ɾ��Ԫ��
    printf("%d\n", ListDelete(&list, 2)); // ���: 1
    printf("%d\n", ListDelete(&list, 5)); // ���: 0

    // ��ӡ����Ԫ��
    PrintList(&list); // ���: 1 3 4

    // �������ռ�
    Destroy(&list);

    return 0;
}
