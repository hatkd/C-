#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include "LinkList.h"

}
a
int main() {
    struct SortedList list;

    // 初始化链表
    ListInitiate(&list);

    // 插入元素
    ListInsert(&list, 2);
    ListInsert(&list, 1);
    ListInsert(&list, 4);
    ListInsert(&list, 3);

    // 打印链表元素
    PrintList(&list); // 输出: 1 2 3 4

    // 删除元素
    printf("%d\n", ListDelete(&list, 2)); // 输出: 1
    printf("%d\n", ListDelete(&list, 5)); // 输出: 0

    // 打印链表元素
    PrintList(&list); // 输出: 1 3 4

    // 清空链表空间
    Destroy(&list);

    return 0;
}
