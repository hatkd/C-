#include<malloc.h>
#include"stack.h"
#include<stdio.h>
#include <stdlib.h>

int main() {
    int n = 127;

    printf("十进制数 %d 转换成二进制数: ", n);
    convert(n, 2);//这里是实现进制转换的

    printf("八进制数 %d 转换成二进制数: ", n);
    convert(n, 8);//这里是实现进制转换的

    printf("十六进制数 %d 转换成二进制数: ", n);
    convert(n, 16);//这里是实现进制转换的





   //括号匹配的
    char expr1[] = "[(1+2)*3-1]+[((1+2]*3)-1]";
    char expr2[] = "[(1+2)*3-1]+[(1+2)*3-1]";

    // 检查括号是否匹配
    printf("表达式1括号%s匹配\n", check(expr1) ? "" : "不");
    printf("表达式2括号%s匹配\n", check(expr2) ? "" : "不");

    return 0;
}


