#include<stdio.h>

int getdig(char *p,int *q)

{     int i=0;

       for( ; *p!='\0';p++)

                if(*p>='0'&& *p<='9')

                {     *q= *p-'0';       

                       p++;

                       while(*p!='\0'&&(*p>='0'&& *p<='9'))

                             *q=*q*10 + *p++-'0';  

                        i++;

                        q++;

                }

              
return i
;               

}

main()

{      char str[100],*p=str;

       int a[100],*q=a,count=0;

       gets(p);

       count=
getdig(p,q);          

       for(q=a;q<a+count; q++)

               printf("%4d",*q);

}




