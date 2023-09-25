#include<malloc.h>

// ���嵥����Ľṹ��
struct ListNode {
    int val;
    struct ListNode *next;
};

// ������������ṹ
struct SortedList {
    struct ListNode *head; // ͷ���ָ��
};

// ��ʼ������Ϊ��
void ListInitiate(struct SortedList *list) {
    list->head = NULL;
}

// �����������в�������Ԫ�� x��ʹ��������Ȼ����
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
        // �½���Ϊͷ���
        newNode->next = list->head;
        list->head = newNode;
    } else {
        newNode->next = prev->next;
        prev->next = newNode;
    }
}

// ������������ɾ������Ԫ�� x����ɾ���ɹ��򷵻� 1�����򷵻� 0
int ListDelete(struct SortedList *list, int x) {
    struct ListNode *ptr = list->head, *prev = NULL;
    while (ptr != NULL && ptr->val != x) {
        prev = ptr;
        ptr = ptr->next;
    }
    if (ptr == NULL) {
        // û���ҵ�Ҫɾ����Ԫ��
        return 0;
    } else if (prev == NULL) {
        // Ҫɾ������ͷ���
        list->head = list->head->next;
        free(ptr);
        return 1;
    } else {
        prev->next = ptr->next;
        free(ptr);
        return 1;
    }
}

// ����������
void Destroy(struct SortedList *list) {
    struct ListNode *ptr = list->head, *next = NULL;
    while (ptr != NULL) {
        next = ptr->next;
        free(ptr);
        ptr = next;
    }
    list->head = NULL;
}

// ��ӡ��������
void PrintList(struct SortedList *list) {
    struct ListNode *ptr = list->head;
    while (ptr != NULL) {
        printf("%d ", ptr->val);
        ptr = ptr->next;
    }
    printf("\n");