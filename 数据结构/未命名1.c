#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define RANDNUM 10000 //随机数的个数
//直接插入排序算法 
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
//希尔排序
void shellSort(int a[])
{
    int gap = RANDNUM;
    while (gap > 1)
    {
        gap = gap/2;	//调整步长因子t(n+1)=t(n)/2
        int i = 0;
        for (i = 0; i < RANDNUM - gap; i++)	//从0遍历到RANDNUM-gap-1
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
            a[end + gap] = temp;	//以 end+gap 作为插入位置
        }
    }
}
//测量运行时间
void Time_(int a_1[],int a_2[])
{
    clock_t first,second; //记录开始和结束时间（以毫秒为单位）
    first=clock(); //开始时间
    //直接插入排序
	insertSort(a_1);
    second=clock();//结束时间
	//显示排序算法所用的时间
	printf("直接插入排序算法运行时间：%ld\n",second-first);
    first=clock();
    //希尔排序
    shellSort(a_2);
    second=clock();
	printf("希尔排序算法运行时间：%ld\n",second-first);
    printf("\n");
}
//主函数
void main()
{ 
	int iRandNum_1[RANDNUM];
    int iRandNum_2[RANDNUM];//存放随机数,iRandNum[RANDNUM]_1用于测量直接插入排序，iRandNum_2[RANDNUM]用于希尔排序
    int i,temp;
    //产生2万个随机数
    for(i=0;i<RANDNUM;i++)
	{                               
        iRandNum_1[i]=rand()%RANDNUM;
        iRandNum_2[i]=iRandNum_1[i];
        //使两个排序算法操作对象数值相同
    }

    //无序
    printf("在序列无序的情况下：\n");
    Time_(iRandNum_1,iRandNum_2);

    //顺序 经过排序后，两个序列都处于顺序，此时可以直接测量两排列操作顺序的运行时间
    printf("在序列顺序的情况下：\n");
    Time_(iRandNum_1,iRandNum_2);

    //逆序 需先将顺序序列转为逆序
    for(i=0;i<RANDNUM/2;i++)
    {
        temp=iRandNum_1[i];
        iRandNum_1[i]=iRandNum_1[RANDNUM-i-1];
        iRandNum_1[RANDNUM-i-1]=temp;
        //
        temp=iRandNum_2[i];
        iRandNum_2[i]=iRandNum_2[RANDNUM-i-1];
        iRandNum_2[RANDNUM-i-1]=temp;
    }//完成逆序操作
    printf("在序列逆序的情况下：\n");
    Time_(iRandNum_1,iRandNum_2);
    // for(i=0;i<RANDNUM;i++)
    // {
    //     printf(" %d",iRandNum_1[i]);
    // }	
}

