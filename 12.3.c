//#include <stdio.h>
//#include <string.h>
//int getindex(char *w[],char *s);
//int main()
//{   int n;
//    char *week[7]={"Sunday","Monday","Tuesday","Wednesday","Thurday","Friday","Saturday"},str[20];
//    gets(str);
//    n = getindex(week,str);
//    if ( n==-1 ) printf("wrong input!");
//    else printf("%d", n);
//    return 0;
//}
//int getindex(char *w[],char *s )
//{    
//int i,j,count,result=-1;
//for(i=0;i<7;i++)
//{
//   for(j=0;j<7;j++)
//    {
//       if('*w[i][j]'=='s[j]')
//           count++;
//       if(count==6)
//          result=i;
//
//    }
//
//}
//return result;
//
//}
	

#include <stdio.h>
#include <string.h>
int getindex(char *w[],char *s);
int main()
{   int n;
    char *week[7]={"Sunday","Monday","Tuesday","Wednesday","Thurday","Friday","Saturday"},str[20];
    gets(str);
    n = getindex(week,str);
    if ( n==-1 ) printf("wrong input!");
    else printf("%d", n);
    return 0;
}
int getindex(char *w[],char *s )
{    
int i,j,count,result=-1;
for(i=0;i<7;i++)
{
   
       if(strcmp(*w[i],s)==1)
               result=i;
    

}
return result;

}

