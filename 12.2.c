#include <stdio.h>
char *match( char *s, char c1, char c2 );//获取字符串s中从c1到c2之间的所有字符，并且返回c1的地址 
int main()
{   char str[100], ch_start, ch_end, *p;
    scanf("%s\n", str);
    scanf("%c %c", &ch_start, &ch_end);
    p = match(str, ch_start, ch_end); 
    printf("%s", p);
    return 0;
}
char *match(char *s, char c1, char c2)
{    
int i;
char *p;
while(1)
{
   if('s[i]'=='c1')
    {
       while(1)
{
p[i]=s[i];
if('s[i]'=='c2')
break;
}

    break;}
i++;
}
return p;

}
