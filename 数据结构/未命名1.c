#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define RANDNUM 10000 //������ĸ���
//ֱ�Ӳ��������㷨 
void insertSort(int a[])
{
	int i,j;
	int temp;
	for(i=1;i<RANDNUM;i++)
	{
        temp=a[i];
        for(j=i-1;j>=0&&temp<=a[j];j--)
        {
	        a[j+1]=a[j];
        }
        a[j+1]=temp;
	}
}
//ϣ������
void shellSort(int a[])
{
    int gap = RANDNUM;
    while (gap > 1)
    {
        gap = gap/2;	//������������t(n+1)=t(n)/2
        int i = 0;
        for (i = 0; i < RANDNUM - gap; i++)	//��0������RANDNUM-gap-1
        {
            int end = i;
            int temp = a[end + gap];
            while (end >= 0)
            {
                if (a[end] > temp)
                {
                    a[end + gap] = a[end];
                    end -= gap;
                }
                else
                {
                    break;
                }
            }
            a[end + gap] = temp;	//�� end+gap ��Ϊ����λ��
        }
    }
}
//��������ʱ��
void Time_(int a_1[],int a_2[])
{
    clock_t first,second; //��¼��ʼ�ͽ���ʱ�䣨�Ժ���Ϊ��λ��
    first=clock(); //��ʼʱ��
    //ֱ�Ӳ�������
	insertSort(a_1);
    second=clock();//����ʱ��
	//��ʾ�����㷨���õ�ʱ��
	printf("ֱ�Ӳ��������㷨����ʱ�䣺%ld\n",second-first);
    first=clock();
    //ϣ������
    shellSort(a_2);
    second=clock();
	printf("ϣ�������㷨����ʱ�䣺%ld\n",second-first);
    printf("\n");
}
//������
void main()
{ 
	int iRandNum_1[RANDNUM];
    int iRandNum_2[RANDNUM];//��������,iRandNum[RANDNUM]_1���ڲ���ֱ�Ӳ�������iRandNum_2[RANDNUM]����ϣ������
    int i,temp;
    //����2��������
    for(i=0;i<RANDNUM;i++)
	{                               
        iRandNum_1[i]=rand()%RANDNUM;
        iRandNum_2[i]=iRandNum_1[i];
        //ʹ���������㷨����������ֵ��ͬ
    }

    //����
    printf("���������������£�\n");
    Time_(iRandNum_1,iRandNum_2);

    //˳�� ����������������ж�����˳�򣬴�ʱ����ֱ�Ӳ��������в���˳�������ʱ��
    printf("������˳�������£�\n");
    Time_(iRandNum_1,iRandNum_2);

    //���� ���Ƚ�˳������תΪ����
    for(i=0;i<RANDNUM/2;i++)
    {
        temp=iRandNum_1[i];
        iRandNum_1[i]=iRandNum_1[RANDNUM-i-1];
        iRandNum_1[RANDNUM-i-1]=temp;
        //
        temp=iRandNum_2[i];
        iRandNum_2[i]=iRandNum_2[RANDNUM-i-1];
        iRandNum_2[RANDNUM-i-1]=temp;
    }//����������
    printf("���������������£�\n");
    Time_(iRandNum_1,iRandNum_2);
    // for(i=0;i<RANDNUM;i++)
    // {
    //     printf(" %d",iRandNum_1[i]);
    // }	
}

