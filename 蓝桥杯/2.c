// #include<stdio.h>
// int main(){
//     //20220101--20221230
//     int i,j,k,cou;
//     int arr[9] = {2,2};
//     for(i=1;i=<12;i++)
//     {
// if(i<10)
// {
//     arr[4] = 0;
//     arr[5] = i;
// }
// else
// {
//     arr[4] = 1;
//     arr[5] = i-10;
// }
//         for(j=0;j<30;j++)
//         {
//             if(j<10){
//             arr[6] = 0;
//             arr[7] = i;}
//             else if(j>=10&&j<20){
//             arr[6] = 1;
//             arr[7] = i-10;}
//               else if(j>=20&&j<30){
//             arr[6] = 2;
//             arr[7] = i-20;}
//             else{
//                 arr[6]=3;
//                 arr[7]=0;
//             }
//         }
//         if()
//     }

//     printf("%d",cou);
//     retrun 0;
// }

#include <stdio.h>
#include <stdbool.h>  // bool ������Ҫ������ļ�

bool isStride(int n) {
    int d1 = n % 10;        // ��λ��
    int d2 = n / 10 % 10;   // ʮλ��
    int d3 = n / 100 % 10;  // ��λ��
    int d4 = n /1000 % 10;//1000

    return ((d1 == d2 - 1) && (d2 == d3 - 1))||((d2 == d3 - 1) && (d3 == d4 - 1));  // �ж��Ƿ�Ϊ˳��
}

int countDateStride() {
    int count = 0;
    for (int month = 1; month <= 12; ++month) {
        for (int day = 1; day <= 31; ++day) {
            int date = 20220000 + month * 100 + day;  // ƴ������
        
                if (day > 30) break;  // 4��6��9��11�����30��
            
            if (isStride(date) || isStride(date + 1) || isStride(date + 2)) {
                count++;
            }
        }
    }
    return count;
}

int main() {
    int count = countDateStride();
    printf("2022����%d��˳�����ڡ�\n", count);
    return 0;
}