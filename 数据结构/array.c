#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

typedef struct {
    int row, col, value; // 行号、列号和值
} Triple;

typedef struct {
    Triple data[MAX_SIZE]; // 压缩存储数组
    int rows, cols, num; // 行数、列数和非零元素个数
} Matrix;

// 矩阵乘法
Matrix matrix_multiply(Matrix A, Matrix B)
{
    Matrix C;
    int i, j, k, s;
    int flagA[MAX_SIZE] = {0}; // 标记矩阵A每行起始位置
    int sum[MAX_SIZE] = {0}; // 存储矩阵B每列非零元素的个数

    // 构造矩阵C
    C.rows = A.rows;
    C.cols = B.cols;
    C.num = 0;

    // 标记矩阵A每行起始位置
    for (k = 0; k < A.num; k++) {
        i = A.data[k].row;
        flagA[i]++;
    }
    for (i = 0; i < A.rows; i++) {
        flagA[i+1] += flagA[i];
    }

    // 计算矩阵B每列非零元素的个数
    for (k = 0; k < B.num; k++) {
        j = B.data[k].col;
        sum[j]++;
    }

    // 乘法运算
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

// 输出元素
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

    // 输入矩阵A
    scanf("%d%d%d", &A.rows, &A.cols, &A.num);
    for (i = 0; i < A.num; i++) {
        scanf("%d%d%d", &A.data[i].row, &A.data[i].col, &A.data[i].value);
    }

    // 输入矩阵B
    scanf("%d%d%d", &B.rows, &B.cols, &B.num);
    for (i = 0; i < B.num; i++) {
        scanf("%d%d%d", &B.data[i].row, &B.data[i].col, &B.data[i].value);
    }

    // 计算矩阵乘积
    C = matrix_multiply(A, B);

    // 输出矩阵A、B、C
    printf("A:\n");
    print_matrix(A);
    printf("B:\n");
    print_matrix(B);
    printf("C:\n");
    print_matrix(C);

    return 0;
}