#include<stdio.h>
#include<malloc.h> 
#include"tree.h"
void main(){
	printf("create your tree\n the tree's null tree can replace '#'\n");
	treecode *a = createtree();
	//输入是abcde#fg# 
	printf("先序\n");
	preorder(a);
	printf("中序\n");
	midorder(a);
	printf("后序\n"); 
	afterorder(a);

    LevelOrder(*a);
}
