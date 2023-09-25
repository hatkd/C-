#define OK 1
#define ERROR 0
//tree��� 
typedef struct treecode{
	int data;
	struct treecode *right,*left; 
}treecode; 

#define MAXSIZE 50	//���������Ԫ�ص�������
typedef struct{
	int data[MAXSIZE];	//��Ŷ���Ԫ��
	int front,rear;
}SqQueue;//����ʵ�ֲ��

/*��ʼ��һ���ն���Q*/
int InitQueue(SqQueue *Q){
    Q->front = 0;
    Q->rear = 0;
    return OK;
}

/*�жӿ�*/
int isEmpty(SqQueue Q){
    if(Q.rear == Q.front){
        return 1;
    }else{
        return 0;
    }
}

/*�����в��գ���ɾ��Q�ж�ͷԪ�أ���e������ֵ*/
int DeQueue(SqQueue *Q, ElemType *e){
    if(isEmpty(Q)){
        return REEOR;   //���пյ��ж�
    }
    *e = Q->data[Q->front]; //����ͷԪ�ظ�ֵ��e
    Q->front = (Q->front + 1) % MAXSIZE;    //frontָ�������һλ�ã����������ת������ͷ��
}

/*������δ���������Ԫ��eΪQ�µĶ�βԪ��*/
int EnQueue(SqQueue *Q, ElemType e){
    if((Q->rear + 1) % MAXSIZE == Q->front){
        return ERROR;   //����
    }
    Q->data[Q->rear] = e;   //��Ԫ��e��ֵ����β
    Q->rear = (Q->rear + 1) % MAXSIZE;  //rearָ�������һλ�ã����������ת������ͷ��
    return OK;
}



/*�����в��գ���ɾ��Q�ж�ͷԪ�أ���e������ֵ*/
int DeQueue(SqQueue *Q, ElemType *e){
    if(isEmpty(Q)){
        return ERROR;   //���пյ��ж�
    }
    *e = Q->data[Q->front]; //����ͷԪ�ظ�ֵ��e
    Q->front = (Q->front + 1) % MAXSIZE;    //frontָ�������һλ�ã����������ת������ͷ��
}



//���� ������ʵ�� ,�����Ǵ������ٸ���� 
 treecode *createtree(void){
 	treecode *root;
 	char ch;//�����ֵ
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

//����
void preorder(treecode *a){
	if(a!=NULL){
		printf("%d\n",a->data);
		preorder(a->left);
		preorder(a->right);
	}
} 

//���� 
void midorder(treecode *a){
	if(a!=NULL){
		midorder(a->left);
		printf("%d\n",a->data);	
		midorder(a->right);
	}
} 
//���� 
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
	InitQueue(Q);	//��ʼ����������
	treecode *p;
	EnQueue(Q, T);	//�����ڵ����
	while(!IsEmpty(Q)){	//���в�����ѭ��
		DeQueue(Q, p);	//��ͷ������
		visit(p);	//���ʳ��ӽ��
		if(p->left != NULL){
			EnQueue(Q, p->left);	//���������գ������������ڵ����
		}
		if(p->right != NULL){
			EnQueue(Q, p->right);	//���������գ������������ڵ����
		}
	}
}
