#include <stdio.h>

void find(int *p,int n,int *max,int *min)

{     int i;

             *max=*min=0;

              for(i=1;i<n;i++)

              {       if(p[i]>p[*max]) 
*max=i
;

                      if(p[i]<p[*min]) 
*min=i
;

              }

}

int main()

{     int a[5],i,max,min;

             for(i=0;i<5;i++)

                     scanf("%d",&a[i]);

             find(a,5,
&max,&min
 );       

             printf("%d,%d",max,min);
             return 0;

              }
