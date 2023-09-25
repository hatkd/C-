// 一、实验目的:


// 1．掌握堆栈的存储方式和基本操作


// 2．掌握堆栈后进先出运算原则在解决实际问题中的应用


 


// 二、实验内容:


// 1.利用栈结构，编写程序将十进制数转换成N制数（N可以为2、4、8、16等）。


// 说明:十进制数值转换成二进制使用辗转相除法将一个十进制数值转换成二进制数值。即用该十进制数值除以2，并保留其余数；重复此操作，直到该十进制数值为0为止。最后将所有的余数反向输出就是所对应的二进制数值。十进制数值转换成八进制算法类似。转换算法要求用一个函数完成。


 


// 2.假设算术表达式中允许包含两种括号:圆括号和方括号，其嵌套的顺序随意，即（[][]）


// 或[（[]()）]等为正确格式，而[(]或()))或 [())均为不正确的格式。请使用栈结构，写一算法检验某表达式中的括号是否匹配，并测试你的算法是否正确。测试表达式为:


// (1)[(1+2)*3-1]+[((1+2]*3)-1]


// (2) [(1+2)*3-1]+[(1+2)*3-1]


// 将十进制数 n 转换成 base 进制数
void convert(int n, int base) {
    int *stack = (int *)malloc(sizeof(int) * 1000); // 开辟一块内存作为栈
    int top = -1; // 栈顶指针初始化为 -1

    // 将 n 进制转换成 base 进制
    while (n) {
        stack[++top] = n % base;
        n /= base;
    }

    // 输出 
    while (top >= 0) {
        if (stack[top] >= 10) {
            printf("%c", stack[top] - 10 + 'A');
        } else {
            printf("%d", stack[top]);
        }
        top--;
    }

    printf("\n");
    free(stack); // 释放栈的内存
}




// 实现括号匹配的函数
int match(char left, char right) {
    if (left == '(' && right == ')') {
        return 1;
    } else if (left == '[' && right == ']') {
        return 1;
    } else {
        return 0;
    }
}

// 检查字符串中的括号是否匹配
int check(char *str) {
    int len = 0;
    while (str[len]) {
        len++;
    }
    char *stack = (char *)malloc(sizeof(char) * len); // 开辟一块内存作为栈
    int top = -1; // 栈顶指针初始化为 -1

    // 遍历字符串中的每一个字符
    for (int i = 0; str[i]; i++) {
        // 如果遇到左括号，则推入栈中
        if (str[i] == '(' || str[i] == '[') {
            stack[++top] = str[i];
        }

        // 如果遇到右括号，判断和栈顶左括号是否匹配
        if (str[i] == ')' || str[i] == ']') {
            if (top < 0 || !match(stack[top], str[i])) {
                // 栈为空或者括号不匹配，返回 false
                return 0;
            } else {
                top--; // 匹配成功，弹出栈顶元素
            }
        }
    }

    // 如果最后栈中还有左括号，说明括号不匹配
    if (top >= 0) {
        return 0;
    } else {
        return 1;
    }
}



