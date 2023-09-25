#include<malloc.h>

// 定义单链表的结构体
struct ListNode {
    int val;
    struct ListNode *next;
};

// 定义有序单链表结构
struct SortedList {
    struct ListNode *head; // 头结点指针
};

// 初始化链表为空
void ListInitiate(struct SortedList *list) {
    list->head = NULL;
}

// 在有序链表中插入数据元素 x，使得链表仍然有序
void ListInsert(struct SortedList *list, int x) {
    struct ListNode *ptr = list->head, *prev = NULL;
    while (ptr != NULL && ptr->val < x) {
        prev = ptr;
        ptr = ptr->next;
    }
    struct ListNode *newNode = (struct ListNode *)malloc(sizeof(struct ListNode));
    newNode->val = x;
    newNode->next = NULL;
    if (prev == NULL) {
        // 新结点成为头结点
        newNode->next = list->head;
        list->head = newNode;
    } else {
        newNode->next = prev->next;
        prev->next = newNode;
    }
}

// 在有序链表中删除数据元素 x，若删除成功则返回 1，否则返回 0
int ListDelete(struct SortedList *list, int x) {
    struct ListNode *ptr = list->head, *prev = NULL;
    while (ptr != NULL && ptr->val != x) {
        prev = ptr;
        ptr = ptr->next;
    }
    if (ptr == NULL) {
        // 没有找到要删除的元素
        return 0;
    } else if (prev == NULL) {
        // 要删除的是头结点
        list->head = list->head->next;
        free(ptr);
        return 1;
    } else {
        prev->next = ptr->next;
        free(ptr);
        return 1;
    }
}

// 撤销单链表
void Destroy(struct SortedList *list) {
    struct ListNode *ptr = list->head, *next = NULL;
    while (ptr != NULL) {
        next = ptr->next;
        free(ptr);
        ptr = next;
    }
    list->head = NULL;
}

// 打印有序单链表
void PrintList(struct SortedList *list) {
    struct ListNode *ptr = list->head;
    while (ptr != NULL) {
        printf("%d ", ptr->val);
        ptr = ptr->next;
    }
    printf("\n");