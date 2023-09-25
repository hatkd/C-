#include<stdio.h>
 
int sum1(int n)/*时间复杂度为Ｏ(ｎ)*/
{
int i,t=-1,s=0;
for(i=1;i<=n;i++)
{ t=(-1)*t;
    s=s+t*i;
}
 return s;
}

int  sum2(int n)/*时间复杂度为Ｏ(1)*/

{ if(n%2==0)
     return  -n/2;
  else 
     return -(n-1)/2+n;
}



int main()
{ int i=0;
  printf("please input a number:");
  scanf("%d",&i);
  printf("the first method:the result is %d\n",sum1(i));
  printf("the second method:the result is %d\n",sum2(i));
  
  return 0;
}
