// #include<stdlib.h>
// #include<stdio.h>
// #include<string.h>
// //�����������ṹ
// typedef struct {
// 	int weight;//���Ȩ��
// 	int parent, left, right;//����㡢���ӡ��Һ����������е�λ���±�
// }HTNode, *HuffmanTree;
// //��̬��ά���飬�洢����������
// typedef char ** HuffmanCode;
// //HT�����д�ŵĹ���������end��ʾHT�����д�Ž�������λ�ã�s1��s2���ݵ���HT������Ȩ��ֵ��С����������������е�λ��
// void Select(HuffmanTree HT, int end, int *s1, int *s2)
// {
// 	int min1, min2;
// 	//���������ʼ�±�Ϊ 1
// 	int i = 1;
// 	//�ҵ���û�������Ľ��
// 	while (HT[i].parent != 0 && i <= end) {
// 		i++;
// 	}
// 	min1 = HT[i].weight;
// 	*s1 = i;
 
// 	i++;
// 	while (HT[i].parent != 0 && i <= end) {
// 		i++;
// 	}
// 	//���ҵ����������Ƚϴ�С��min2Ϊ��ģ�min1ΪС��
// 	if (HT[i].weight < min1) {
// 		min2 = min1;
// 		*s2 = *s1;
// 		min1 = HT[i].weight;
// 		*s1 = i;
// 	}
// 	else {
// 		min2 = HT[i].weight;
// 		*s2 = i;
// 	}
// 	//�������ͺ���������δ���������Ľ�����Ƚ�
// 	int j; 
// 	for ( j = i + 1; j <= end; j++)
// 	{
// 		//����и���㣬ֱ��������������һ��
// 		if (HT[j].parent != 0) {
// 			continue;
// 		}
// 		//�������С�Ļ�С����min2=min1��min1��ֵ�µĽ����±�
// 		if (HT[j].weight < min1) {
// 			min2 = min1;
// 			min1 = HT[j].weight;
// 			*s2 = *s1;
// 			*s1 = j;
// 		}
// 		//�����������֮�䣬min2��ֵΪ�µĽ���λ���±�
// 		else if (HT[j].weight >= min1 && HT[j].weight < min2) {
// 			min2 = HT[j].weight;
// 			*s2 = j;
// 		}
// 	}
// }
// //HTΪ��ַ���ݵĴ洢�������������飬wΪ�洢���Ȩ��ֵ�����飬nΪ������
// void CreateHuffmanTree(HuffmanTree *HT, int *w, int n)
// {
// 	if (n <= 1) return; // ���ֻ��һ��������൱��0
// 	int m = 2 * n - 1; // ���������ܽڵ�����n����Ҷ�ӽ��
// 	*HT = (HuffmanTree)malloc((m + 1) * sizeof(HTNode)); // 0��λ�ò���
// 	HuffmanTree p = *HT;
// 	// ��ʼ�����������е����н��
// 	int i;
// 	for (i = 1; i <= n; i++)
// 	{
// 		(p + i)->weight = *(w + i - 1);
// 		(p + i)->parent = 0;
// 		(p + i)->left = 0;
// 		(p + i)->right = 0;
// 	}
// 	//��������±� n+1 ��ʼ��ʼ�����������г�Ҷ�ӽ����Ľ��
// 	for (i = n + 1; i <= m; i++)
// 	{
// 		(p + i)->weight = 0;
// 		(p + i)->parent = 0;
// 		(p + i)->left = 0;
// 		(p + i)->right = 0;
// 	}
// 	//������������
// 	for (i = n + 1; i <= m; i++)
// 	{
// 		int s1, s2;
// 		Select(*HT, i - 1, &s1, &s2);
// 		(*HT)[s1].parent = (*HT)[s2].parent = i;
// 		(*HT)[i].left = s1;
// 		(*HT)[i].right = s2;
// 		(*HT)[i].weight = (*HT)[s1].weight + (*HT)[s2].weight;
// 	}
// }
// //HTΪ����������HCΪ�洢������������Ķ�ά��̬���飬nΪ���ĸ���
// void HuffmanCoding(HuffmanTree HT, HuffmanCode *HC, int n) {
// 	*HC = (HuffmanCode)malloc((n + 1) * sizeof(char *));
// 	char *cd = (char *)malloc(n * sizeof(char)); //��Ž�������������ַ�������
// 	cd[n - 1] = '\0';//�ַ���������
//  int i;
// 	for (i = 1; i <= n; i++) {
// 		//��Ҷ�ӽ��������õ��Ĺ���������������ģ���Ҫ���ַ���������������
// 		int start = n - 1;
// 		//��ǰ����������е�λ��
// 		int c = i;
// 		//��ǰ���ĸ�����������е�λ��
// 		int j = HT[i].parent;
// 		// һֱѰ�ҵ������
// 		while (j != 0) {
// 			// ����ý���Ǹ������������Ӧ·������Ϊ0������Ϊ�Һ��ӱ���Ϊ1
// 			if (HT[j].left == c)
// 				cd[--start] = '0';
// 			else
// 				cd[--start] = '1';
// 			//�Ը����Ϊ���ӽ�㣬�����������ķ������
// 			c = j;
// 			j = HT[j].parent;
// 		}
// 		//����ѭ����cd�����д��±� start ��ʼ����ŵľ��Ǹý��Ĺ���������
// 		(*HC)[i] = (char *)malloc((n - start) * sizeof(char));
// 		strcpy_s((*HC)[i],4, &cd[start]);
		
// 	}
// 	//ʹ��malloc�����cd��̬������Ҫ�ֶ��ͷ�
// 	free(cd);
// }
// //��ӡ����������ĺ���
// void PrintHuffmanCode(HuffmanCode htable, int *a, int n)
// {
// 	printf("Huffman code : \n");
// 	int i;
// 	for (i = 1; i <= n; i++)
// 		printf("%c code = %s\n", a[i-1], htable[i]);
// }
// int main(void)
// {
//     char a[8] = {'a','b','c','d','e','f','g','h'};
// 	int w[8] = { 7,19,2,6,32,3,21,10 };
// 	int n = 8;
// 	HuffmanTree htree;
// 	HuffmanCode htable;
// 	CreateHuffmanTree(&htree, w, n);
// 	HuffmanCoding(htree, &htable, n);
// 	PrintHuffmanCode(htable, w, n);
// 	return 0;
// }


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node {
    char letter;
    float freq;
    struct node *left, *right;
};

void swap_node(struct node **a, struct node **b) {
    struct node *temp = *a;
    *a = *b;
    *b = temp;
}

void sort_nodes(struct node **nodes, int n) {
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (nodes[j]->freq < nodes[i]->freq) {
                swap_node(&nodes[i], &nodes[j]);
            }
        }
    }
}

void print_codes(struct node *root, char *code) {
    if (root == NULL) {
        return;
    }
    if (root->letter != '\0') {
        printf("%c: %s\n", root->letter, code);
    }
    char *left_code = malloc(strlen(code) + 2);
    strcpy(left_code, code);
    strcat(left_code, "0");
    print_codes(root->left, left_code);
    char *right_code = malloc(strlen(code) + 2);
    strcpy(right_code, code);
    strcat(right_code, "1");
    print_codes(root->right, right_code);
    free(left_code);
    free(right_code);
}

void huffman(struct node **nodes, int n) {
    sort_nodes(nodes, n);
    while (n > 1) {
        struct node *new_node = malloc(sizeof(struct node));
        new_node->left = nodes[0];
        new_node->right = nodes[1];
        new_node->freq = nodes[0]->freq + nodes[1]->freq;
        new_node->letter = '\0';
        nodes[0] = new_node;
        n--;
        int i;
        for (i = 1; i < n; i++) {
            nodes[i] = nodes[i+1];
        }
        sort_nodes(nodes, n);
    }
}

int main() {
    const char letters[8] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'};
    const float freqs[8] = {0.07, 0.19, 0.02, 0.06, 0.32, 0.03, 0.21, 0.10};
    int i, n = 8;
    struct node **nodes = malloc(n * sizeof(struct node *));
    for (i = 0; i < n; i++) {
        struct node *new_node = malloc(sizeof(struct node));
        new_node->letter = letters[i];
        new_node->freq = freqs[i];
        new_node->left = NULL;
        new_node->right = NULL;
        nodes[i] = new_node;
    }
    huffman(nodes, n);
    print_codes(nodes[0], "");
    for (i = 0; i < n; i++) {
        free(nodes[i]);
    }
    free(nodes);
    return 0;
}