// #define MAXVALUE 32767		//极大值相当于无穷大
// #define NODENUM 8			//叶子结点数
// typedef struct
// {
// 	char data;				//数据域
// 	int weight;				//结点的权值
// 	int parent, lch, rch;	//双亲与孩子的下标
// }htNode,*huffmanTree;	

// typedef char** huffmanCode;	//第一个*是代表它是指针变量，说明它是数组
// 							//第二个*说明它是指针数组，代表这个char类型数组里每个元素都是*huffmanCode变量


// int initHuffmanTree(huffmanTree HT)
// {
// 	HT = (htNode*)malloc(sizeof(htNode) * (2 * NODENUM));			//给HT分配2 * NODENUM个htNOde大小的htNode类型的数组
// 	for (int i = 1; i <= 2 * NODENUM - 1; i++)						//下标从1开始到2 * NODENUM
// 	{
// 		HT[i].parent = HT[i].lch = HT[i].rch = -1;					//双亲和孩子的值都置为-1
// 	}
// 	printf("please input some weight!\n");
// 	for (int i = 1; i <= NODENUM; i++)								//权值只有1-n个
// 	{
// 		scanf("%d",&HT[i].weight);									//给每个结点赋予权值
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
// 	if (n <= 1)															//如果结点数小于等于1，不创建
// 		return;
// 	int min1, min2;														//定义两个数，来存储每次选取最小两个结点的权值
// 	int rnode, lnode;													//定义两个下标值，来存储每次选取最小两个结点的下标
// 	for (int i = n + 1; i <= 2 * n -1; i++)								//要生成n-1个结点，所以要操作n—1次且从下标为n+1开始存储
// 	{
// 		int min1 = MAXVALUE; int lnode = -1;							//让最小值初始化为极大值，这样叶子结点的最大值再大也不会超过这个值了							
// 		int min2 = MAXVALUE; int rnode = -1;
// 		for (int j = 1; j <= i - 1; j++)								//因为起先是在前n个中选择最小的两个结点的权值，但新生成一个后就得在前							
// 		{																//假设n = 10 总结点数就得为19，那我们就只要比较18次就可以得出结果了，记
// 				if (HT[j].weight < min1 && HT[j].parent == -1)			//这个小于就使得当出现相同的权值时优先考虑先出现的值，可以假设下
// 				{
// 					min2 = min1;	rnode = lnode;						//碰到比min1小的，那min1的值就给第二小的min2，下标也给它
// 					min1 = HT[j].weight; lnode = j;						//然后最小的给min1，下标同理
// 				}
// 				else if (HT[j].weight < min2 && HT[j].parent == -1)		//这是第二小的判断
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
													

 