#include<stdio.h>
#include<malloc.h> 
#include"tree.h"
void main(){
	printf("create your tree\n the tree's null tree can replace '#'\n");
	treecode *a = createtree();
	//������abcde#fg# 
	printf("����\n");
	preorder(a);
	printf("����\n");
	midorder(a);
	printf("����\n"); 
	afterorder(a);

    LevelOrder(*a);
}
