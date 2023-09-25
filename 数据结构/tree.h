#define OK 1
#define ERROR 0
//tree结点 
typedef struct treecode{
	int data;
	struct treecode *right,*left; 
}treecode; 

#define MAXSIZE 50	//定义队列中元素的最大个数
typedef struct{
	int data[MAXSIZE];	//存放队列元素
	int front,rear;
}SqQueue;//队列实现层次

/*初始化一个空队列Q*/
int InitQueue(SqQueue *Q){
    Q->front = 0;
    Q->rear = 0;
    return OK;
}

/*判队空*/
int isEmpty(SqQueue Q){
    if(Q.rear == Q.front){
        return 1;
    }else{
        return 0;
    }
}

/*若队列不空，则删除Q中队头元素，用e返回其值*/
int DeQueue(SqQueue *Q, ElemType *e){
    if(isEmpty(Q)){
        return REEOR;   //队列空的判断
    }
    *e = Q->data[Q->front]; //将队头元素赋值给e
    Q->front = (Q->front + 1) % MAXSIZE;    //front指针向后移一位置，若到最后则转到数组头部
}

/*若队列未满，则插入元素e为Q新的队尾元素*/
int EnQueue(SqQueue *Q, ElemType e){
    if((Q->rear + 1) % MAXSIZE == Q->front){
        return ERROR;   //队满
    }
    Q->data[Q->rear] = e;   //将元素e赋值给队尾
    Q->rear = (Q->rear + 1) % MAXSIZE;  //rear指针向后移一位置，若到最后则转到数组头部
    return OK;
}



/*若队列不空，则删除Q中队头元素，用e返回其值*/
int DeQueue(SqQueue *Q, ElemType *e){
    if(isEmpty(Q)){
        return ERROR;   //队列空的判断
    }
    *e = Q->data[Q->front]; //将队头元素赋值给e
    Q->front = (Q->front + 1) % MAXSIZE;    //front指针向后移一位置，若到最后则转到数组头部
}



//建立 ，队列实现 ,参数是创建多少个结点 
 treecode *createtree(void){
 	treecode *root;
 	char ch;//输入的值
	scanf("%c",&ch);
	
	if(ch == '#')root == NULL;
	else
	{
		root = (treecode*)malloc(sizeof(treecode));
		if(root == NULL)
		{
			printf("out of space\n");
			return root;
		}
		root->data = ch;
		root->left = createtree();
		root->right = createtree();
		
	 } 
	 return root;
 }

//先序
void preorder(treecode *a){
	if(a!=NULL){
		printf("%d\n",a->data);
		preorder(a->left);
		preorder(a->right);
	}
} 

//中序 
void midorder(treecode *a){
	if(a!=NULL){
		midorder(a->left);
		printf("%d\n",a->data);	
		midorder(a->right);
	}
} 
//后序 
void afterrder(treecode *a){
	if(a!=NULL){
		afterorder(a->left);
		afterorder(a->right);
		printf("%d\n",a->data);
	}
}

void visit(treecode *p){
    printf("%d\n",p->data);
}

void LevelOrder(treecode T){
	InitQueue(Q);	//初始化辅助队列
	treecode *p;
	EnQueue(Q, T);	//将根节点入队
	while(!IsEmpty(Q)){	//队列不空则循环
		DeQueue(Q, p);	//队头结点出队
		visit(p);	//访问出队结点
		if(p->left != NULL){
			EnQueue(Q, p->left);	//左子树不空，则左子树根节点入队
		}
		if(p->right != NULL){
			EnQueue(Q, p->right);	//右子树不空，则右子树根节点入队
		}
	}
}
