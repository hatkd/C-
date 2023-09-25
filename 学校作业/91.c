#include<stdio.h>
#define N 10
void sort(int *x,int n)

{    int i,j,k,t;

     for( i=0;i<n-1;i++)

     {        k=i;      

              for( j=i+1;j<n;j++)    

              if( x[k]>x[j])            

                     k=j;

              t=x[i],x[i]=x[k],x[k]=t;

     }

}

int main()

{       int a[N],n,*p;

scanf("n=%d",&n);              
        for(p=a;p<a+n;p++) 
			     
        scanf("%d",p);
    	
 		sort(a,n);             

       for(p=a;p<a+n;p++)

               printf("%3d",*p);

return 0;
      }


