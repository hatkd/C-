#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

typedef struct {
    int row, col, value; // �кš��кź�ֵ
} Triple;

typedef struct {
    Triple data[MAX_SIZE]; // ѹ���洢����
    int rows, cols, num; // �����������ͷ���Ԫ�ظ���
} Matrix;

// ����˷�
Matrix matrix_multiply(Matrix A, Matrix B)
{
    Matrix C;
    int i, j, k, s;
    int flagA[MAX_SIZE] = {0}; // ��Ǿ���Aÿ����ʼλ��
    int sum[MAX_SIZE] = {0}; // �洢����Bÿ�з���Ԫ�صĸ���

    // �������C
    C.rows = A.rows;
    C.cols = B.cols;
    C.num = 0;

    // ��Ǿ���Aÿ����ʼλ��
    for (k = 0; k < A.num; k++) {
        i = A.data[k].row;
        flagA[i]++;
    }
    for (i = 0; i < A.rows; i++) {
        flagA[i+1] += flagA[i];
    }

    // �������Bÿ�з���Ԫ�صĸ���
    for (k = 0; k < B.num; k++) {
        j = B.data[k].col;
        sum[j]++;
    }

    // �˷�����
    for (i = 0; i < A.rows; i++) {
        for (k = flagA[i]; k < flagA[i+1]; k++) {
            j = A.data[k].col;
            for (s = 0; s < B.num; s++) {
                if (B.data[s].col == j) {
                    C.data[C.num].row = i;
                    C.data[C.num].col = B.data[s].row;
                    C.data[C.num].value += A.data[k].value * B.data[s].value;
                }
            }
        }
    }
    C.num = A.rows * B.cols;
    return C;
}

// ���Ԫ��
void print_matrix(Matrix M)
{
    int i, j, k = 0;
    for (i = 0; i < M.rows; i++) {
        for (j = 0; j < M.cols; j++) {
            if (i == M.data[k].row && j == M.data[k].col) {
                printf("%d ", M.data[k].value);
                k++;
            } else {
                printf("0 ");
            }
        }
        printf("\n");
    }
}

int main()
{
    int i;
    Matrix A = {0}, B = {0}, C;

    // �������A
    scanf("%d%d%d", &A.rows, &A.cols, &A.num);
    for (i = 0; i < A.num; i++) {
        scanf("%d%d%d", &A.data[i].row, &A.data[i].col, &A.data[i].value);
    }

    // �������B
    scanf("%d%d%d", &B.rows, &B.cols, &B.num);
    for (i = 0; i < B.num; i++) {
        scanf("%d%d%d", &B.data[i].row, &B.data[i].col, &B.data[i].value);
    }

    // �������˻�
    C = matrix_multiply(A, B);

    // �������A��B��C
    printf("A:\n");
    print_matrix(A);
    printf("B:\n");
    print_matrix(B);
    printf("C:\n");
    print_matrix(C);

    return 0;
}