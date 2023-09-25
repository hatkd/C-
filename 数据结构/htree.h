// #define MAXVALUE 32767		//����ֵ�൱�������
// #define NODENUM 8			//Ҷ�ӽ����
// typedef struct
// {
// 	char data;				//������
// 	int weight;				//����Ȩֵ
// 	int parent, lch, rch;	//˫���뺢�ӵ��±�
// }htNode,*huffmanTree;	

// typedef char** huffmanCode;	//��һ��*�Ǵ�������ָ�������˵����������
// 							//�ڶ���*˵������ָ�����飬�������char����������ÿ��Ԫ�ض���*huffmanCode����


// int initHuffmanTree(huffmanTree HT)
// {
// 	HT = (htNode*)malloc(sizeof(htNode) * (2 * NODENUM));			//��HT����2 * NODENUM��htNOde��С��htNode���͵�����
// 	for (int i = 1; i <= 2 * NODENUM - 1; i++)						//�±��1��ʼ��2 * NODENUM
// 	{
// 		HT[i].parent = HT[i].lch = HT[i].rch = -1;					//˫�׺ͺ��ӵ�ֵ����Ϊ-1
// 	}
// 	printf("please input some weight!\n");
// 	for (int i = 1; i <= NODENUM; i++)								//Ȩֵֻ��1-n��
// 	{
// 		scanf("%d",&HT[i].weight);									//��ÿ����㸳��Ȩֵ
// 	}									
// 	printf("please input some data!\n");
// 	for (int i = 1; i <= NODENUM; i++)
// 	{
// 			scanf("%c ",&HT[i].data);
										
// 	}
	
// 	return 1;
// }
 
// void creatHuffmanTree(huffmanTree HT, int n)
// {
// 	if (n <= 1)															//��������С�ڵ���1��������
// 		return;
// 	int min1, min2;														//���������������洢ÿ��ѡȡ��С��������Ȩֵ
// 	int rnode, lnode;													//���������±�ֵ�����洢ÿ��ѡȡ��С���������±�
// 	for (int i = n + 1; i <= 2 * n -1; i++)								//Ҫ����n-1����㣬����Ҫ����n��1���Ҵ��±�Ϊn+1��ʼ�洢
// 	{
// 		int min1 = MAXVALUE; int lnode = -1;							//����Сֵ��ʼ��Ϊ����ֵ������Ҷ�ӽ������ֵ�ٴ�Ҳ���ᳬ�����ֵ��							
// 		int min2 = MAXVALUE; int rnode = -1;
// 		for (int j = 1; j <= i - 1; j++)								//��Ϊ��������ǰn����ѡ����С����������Ȩֵ����������һ����͵���ǰ							
// 		{																//����n = 10 �ܽ�����͵�Ϊ19�������Ǿ�ֻҪ�Ƚ�18�ξͿ��Եó�����ˣ���
// 				if (HT[j].weight < min1 && HT[j].parent == -1)			//���С�ھ�ʹ�õ�������ͬ��Ȩֵʱ���ȿ����ȳ��ֵ�ֵ�����Լ�����
// 				{
// 					min2 = min1;	rnode = lnode;						//������min1С�ģ���min1��ֵ�͸��ڶ�С��min2���±�Ҳ����
// 					min1 = HT[j].weight; lnode = j;						//Ȼ����С�ĸ�min1���±�ͬ��
// 				}
// 				else if (HT[j].weight < min2 && HT[j].parent == -1)		//���ǵڶ�С���ж�
// 				{
// 					min2 = HT[j].weight;
// 					rnode = j;
// 				}
// 		}
// 		HT[lnode].parent = HT[rnode].parent = i;						
// 		HT[i].lch = lnode; HT[i].rch = rnode;							
// 		HT[i].weight = HT[lnode].weight + HT[rnode].weight;			
// 	}
		
// }
 
// void createHuffmanCode(huffmanTree HT, huffmanCode HC, int n)
// {
// 	HC = (huffmanCode)malloc(sizeof(huffmanCode) *n + 1);				
																		
// 	char* cd = (char*)malloc(sizeof(char) * n);						
// 	int start = 0,c = 0,f = 0;											
// 	cd[n - 1] = '\0';													
// 	for (int i = 1; i <= n; i++)	{							
// 		start = n - 1;													
// 		c = i;	
// 		f = HT[c].parent;
// 		while (f != -1)													
// 			start--;
// 			if (HT[f].lch == c)											
// 				cd[start] = '0';
// 			else
// 				cd[start] = '1';
// 			c = f; f = HT[c].parent;									
// 		HC[i] = (char*)malloc(sizeof(char) * (n - start));				
// 		strcpy(HC[i], &cd[start]);										
// 	}
//     free(cd);
// }
													

 